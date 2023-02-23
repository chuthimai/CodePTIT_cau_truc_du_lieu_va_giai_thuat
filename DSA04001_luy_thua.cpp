//
//  DSA04001_luy_thua.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 23/02/2023.
//

#include <bits/stdc++.h>
#define MOD 1e9+7
using namespace std;

long long power(int n, long long k){
    if(k==0) return 1;
    long long x = power(n, k/2);
    if(k%2==0) return x*x%MOD;
    else n*x*x%MOD;
}

int main(){
    
}








