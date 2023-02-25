//
//  DSA02010_tong_hop_so_co_tong_bang_X.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 25/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

int A[35], C[35];
int n, X, s;
int OK = 0;
vector<vector<int>> save;


void in(int i){
    printf("[");
    for (int j=0; j<=i; j++) {
        if(j!=i) printf("%d ", C[j]);
        else printf("%d", C[j]);
        
    }
    printf("]");
}

void quay_lui(int i, int s){
    int j;
    for(j=0; j<n; j++){
        if(A[j]>=C[i-1] && s+A[j]<=X){
            C[i]=A[j];
            s = s+A[j];
            if(s==X){
                OK ++; in(i);
            }else quay_lui(i+1, s);
            s = s-A[j];
        }
    }
}

void oneTime(){
    cin>>n>>X;
    for(int i=0; i<n; i++) cin>>A[i];
    quay_lui(0, 0);
    if(OK == 0) printf("-1");
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



