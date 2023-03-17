//
//  DSA05013_bac_thang.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 17/03/2023.
//

#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long F[100005];


void oneTime(){
    memset(F, 0, 100005);
    F[0]=1;
    F[1]=1;
    int n,k;
    cin>>n>>k;
    for(int i=2; i<=k; i++){
        int j=i;
        while (j--) {
            F[i] = (F[i]+F[j])%MOD;
        }
    }
    for(int i=k+1; i<=n; i++){
        for(int j=1; j<=k; j++) F[i] = (F[i]+F[i-j])%MOD;
    }
    cout<<F[n]<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}










