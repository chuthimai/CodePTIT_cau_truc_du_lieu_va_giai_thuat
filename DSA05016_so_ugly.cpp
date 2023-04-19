//
//  DSA05016_so_ugly.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 19/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

map<long long int, bool> dp;

void oneTime(){
    int n; cin>>n;
    for(auto i:dp){
        if(n==1){
            cout<<i.first<<endl;
            break;
        }
        n--;
    }
}

int main(){
    dp[1] = 1;
    for(auto i: dp){
        dp[i.first*2]=1;
        dp[i.first*3]=1;
        dp[i.first*5]=1;
        if(dp.size()>=10000) break;
    }
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}




