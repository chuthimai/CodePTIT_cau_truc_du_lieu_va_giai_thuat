//
//  DSA05025_con_ech.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 17/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

long long F[51];

int main(){
    F[0]=0;
    F[1]=1;
    F[2]=2;
    F[3]=4;
    for(int i=4; i<=50; i++) F[i]=F[i-1]+F[i-2]+F[i-3];
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        cout<<F[n]<<endl;
    }
}

















