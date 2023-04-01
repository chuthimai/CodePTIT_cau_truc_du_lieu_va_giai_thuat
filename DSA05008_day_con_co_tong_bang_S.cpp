//
//  DSA05008_day_con_co_tong_bang_S.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 18/03/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n, sum;
    cin>>n>>sum;
    int arr[205];
    for(int i=0; i<n; i++) cin>>arr[i];
    array<bool, 40001> sum_arr;
    sum_arr.fill(0);
    sum_arr[0]=1;
    for(int i=0; i<n; i++){
        for(int j=sum; j>=arr[i]; j--){
            if(sum_arr[j]==0 && sum_arr[j-arr[i]]==1) sum_arr[j]=1;
        }
    }
    if(sum_arr[sum]==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}


int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


