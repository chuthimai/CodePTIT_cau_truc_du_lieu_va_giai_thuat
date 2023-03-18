//
//  DSA05029_giai_ma.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 17/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    string str;
    cin>>str;
    int n = str.length();
    int dp[n+1];
    memset(dp, 0, sizeof(dp));
    
    dp[0]=1;
    
    for(int i=1; i<=n; i++){
        if(str[i-1]=='0') {
            dp[i]=0;
        }
        if(str[i-1]!='0') dp[i] = dp[i-1];
        if(i>1 && (str[i-2]=='1' || (str[i-2]=='2' && str[i-1]<='6'))) dp[i] += dp[i-2];
    }
    cout<<dp[n]<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
