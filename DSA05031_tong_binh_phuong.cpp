//
//  DSA05031_tong_binh_phuong.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 18/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

array<int, 10005> dp;

int main(){
    for(int i=0; i<=10005; i++){
        dp[i]=i;
        int k = sqrt(i);
        for(int j=1; j<=k; j++){
            dp[i] = min(dp[i],dp[i-j*j] + 1);
        }
        
    }
    dp[0]=1;
    int t; cin>>t;
    while (t--) {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
}










