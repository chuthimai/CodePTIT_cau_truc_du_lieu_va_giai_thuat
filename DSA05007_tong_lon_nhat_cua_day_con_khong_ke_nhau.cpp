//
//  DSA05007_tong_lon_nhat_cua_day_con_khong_ke_nhau.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 19/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

int arr[1000005];
long long int dp[1000005];

void oneTime(){
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        dp[i] = arr[i];
    }
    dp[2] += dp[0];
    long long int res = dp[2];
    for(int i=3; i<n; i++){
        dp[i] += max(dp[i-2], dp[i-3]);
        res = max(res, dp[i]);
    }
    
    cout<<res<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}





