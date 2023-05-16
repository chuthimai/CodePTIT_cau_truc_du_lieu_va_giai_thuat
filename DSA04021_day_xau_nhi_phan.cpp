//
//  DSA04021_day_xau_nhi_phan.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 16/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


long long Fib[100];


string character(long long k, int n){
    if(n == 1) return "0";
    if(n == 2) return "1";
    if(k <= Fib[n-2]) return character(k, n-2);
    else return character(k-Fib[n-2], n-1);
}


void oneTime(){
    int n;
    long long k;
    cin>>n>>k;
    cout<<character(k, n)<<endl;
}


int main(){
    Fib[0] = 0;
    Fib[1] = 1;
    for(int i=2; i<93; i++){
        Fib[i] = Fib[i-1] + Fib[i-2];
    }
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}







