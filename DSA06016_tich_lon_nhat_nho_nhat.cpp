//
//  DSA06016_tich_lon_nhat_nho_nhat.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n, m;
    cin>>n>>m;
    long long min = LONG_MAX;
    long long max = LONG_MIN;
    for(int i=0; i<n; i++){
        long long a;
        cin>>a;
        if(a>max) max=a;
    }
    
    for(int i=0; i<m; i++){
        long long a;
        cin>>a;
        if(a<min) min=a;
    }
    
    printf("%lli\n", min*max);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


