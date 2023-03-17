//
//  DSA05005_so_buoc_it_nhat.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 17/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

array<int, 1005> A, mark;

void oneTime(){
    mark.fill(1);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int res=0;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(A[j]<=A[i]){
                mark[i] = max(mark[j]+1 , mark[i]);
                res = max(mark[i], res);
            }
        }
    }
    
    cout<<n-res<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}

