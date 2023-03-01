//
//  DSA04003_dem_day.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 01/03/2023.
//

#include <bits/stdc++.h>
#define MOD 123456789
using namespace std;

long long power(long long n, long long k){
    if(k==0) return 1;
    else{
        long long x = power(n, k/2)%MOD;
        if(k%2==0) return (x*x)%MOD;
        else return n*((x*x)%MOD) % MOD;
    }
}

void oneTime(){
    long long n;
    cin>>n;
    cout<<power(2, n-1)<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}






