//
//  DSA05012_to_hop_C(n,k).cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 01/04/2023.
//

#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

void oneTime(){
    int n, k;
    cin>>n>>k;
    long int matrix[1005][1005];
    for(int i=0; i<=k; i++) matrix[i][0]=0;
    for(int i=0; i<=n; i++) matrix[0][i]=1;
    for(int i=1; i<=k; i++){
        for(int j=1; j<=n; j++) matrix[i][j] = (matrix[i-1][j-1]%MOD + matrix[i][j-1]%MOD)%MOD;
    }
    cout<<matrix[k][n]<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


