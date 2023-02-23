//
//  DSA04001_luy_thua.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 23/02/2023.
//

#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long power(long long n, long long k){
    if(k==0) return 1;
    long long x = power(n, k/2) % MOD;
    if(k%2 == 0) return (x * x) % MOD;
    else return n*((x*x)%MOD) % MOD;
}


void oneTime(){
    int n, k;
    cin>>n>>k;
    cout<<power(n, k)<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}






