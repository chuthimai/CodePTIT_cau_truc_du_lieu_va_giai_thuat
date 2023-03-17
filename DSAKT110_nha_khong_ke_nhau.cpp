//
//  DSAKT110_nha_khong_ke_nhau.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 17/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

array<long long int, 1000005> arr, val;

void oneTime(){
    arr.fill(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    val=arr;
    for(int i=2; i<n; i++){
        val[i]=max(val[i-1], val[i-2]+arr[i]);
        val[i]=max(val[i], val[i-3]+arr[i]);
    }
    cout<<val[n-1]<<endl;
}


int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}




