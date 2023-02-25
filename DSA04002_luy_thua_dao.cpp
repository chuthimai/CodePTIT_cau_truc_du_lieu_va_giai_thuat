//
//  DSA04002_luy_thua_dao.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 23/02/2023.
//

#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long reverse(long long n){
    long long k=0;
    while(n>0){
        k = k*10 + n%10;
        n /= 10;
    }
    return k;
}

long long power(long long n, long long k){
    if (k==0) return 1;
    long long x = power(n, k/2) % MOD;
    if(k%2 == 0) return (x * x) % MOD;
    else return n*((x*x)%MOD) % MOD;
}


void oneTime(){
    long long n;
    cin>>n;
    cout<<power(n, reverse(n))<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



