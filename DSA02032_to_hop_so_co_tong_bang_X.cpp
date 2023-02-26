//
//  DSA02032_to_hop_so_co_tong_bang_X.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 23/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n, X;
vector<int> A, C;
vector<vector<int>> save;
int OK;


void in(vector<int> arr){
    long long n = arr.size();
    printf("{");
    for(int i=0; i<n; i++){
        if(i==n-1) printf("%d", arr[i]);
        else printf("%d ", arr[i]);
    }
    printf("} ");
}

void to_hop(int i, int sum){
    for(int j=0; j<n; j++){
        
        int t;
        if(i==0) t=0;
        else t=C[i-1];
        
        if(A[j]>=t and sum+A[j]<=X){
            C.push_back(A[j]);
            sum += A[j];
            if(sum == X){
                OK++;
                save.push_back(C);
            }else if(sum<X) to_hop(i+1, sum);
            C.pop_back();
            sum -= A[j];
        }
    }
}

void oneTime(){
    A.clear();
    C.clear();
    save.clear();
    OK = 0;
    
    cin>>n>>X;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        A.push_back(a);
    }
    
    to_hop(0, 0);
    if(OK==0) printf("-1");
    else{
        printf("%d ", OK);
        for(int i=0; i<OK; i++){
            in(save[i]);
        }
    }
    cout<<endl;
    
}


int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


