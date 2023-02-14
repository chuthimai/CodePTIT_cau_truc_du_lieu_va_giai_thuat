//
//  DSA06005_hop_va_giao_cua_hai_day_so_2.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void print_arr(vector<int> arr){
    int len = arr.size();
    for(int i=0; i<len; i++) printf("%d ", arr[i]);
    cout<<endl;
}

void oneTime(){
    int n, m;
    cin>>n>>m;
    vector<int> A, B;
    vector<int> Union, Intersection;
    
    for(int i=0; i<n; i++){
        int a; cin>>a;
        A.push_back(a);
    }
    
    for(int i=0; i<m; i++){
        int b; cin>>b;
        B.push_back(b);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int i=0, j=0;
    bool loop = true;
    while (loop){
        if(i>=n){
            for(j=j; j<m; j++) Union.push_back(B[j]);
            loop = false;
        }else if (j>=m){
            for(i=i; i<n; i++) Union.push_back(A[i]);
            loop = false;
        }else if(A[i]<B[j]){
            Union.push_back(A[i]);
            i++;
        }else if(A[i]>B[j]){
            Union.push_back(B[j]);
            j++;
        }else if(A[i]==B[j]){
            Union.push_back(A[i]);
            Intersection.push_back(A[i]);
            i++;
            j++;
        }else loop = false;
    }
    
    print_arr(Union);
    print_arr(Intersection);
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


