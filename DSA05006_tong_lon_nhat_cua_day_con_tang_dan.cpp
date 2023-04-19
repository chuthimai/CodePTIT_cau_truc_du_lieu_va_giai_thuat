//
//  DSA05006_tong_lon_nhat_cua_day_con_tang_dan.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 19/04/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n;
    cin>>n;
    int arr[1005], dp[1005];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        dp[i] = arr[i];
    }
    int res = arr[0];
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i]){
                dp[i] = max(dp[j]+arr[i], dp[i]);
                res = max(res, dp[i]);
            }
        }
    }
    cout<<res<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
