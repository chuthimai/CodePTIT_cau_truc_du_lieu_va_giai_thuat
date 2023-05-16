//
//  DSA03005_chia_mang_thanh_2_mang_con_co_tong_lon_nhat.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 16/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    vector<int> arr;
    int n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int a; cin>>a;
        arr.push_back(a);
    }
    k = min(k, n-k);
    int A=0, B=0;
    sort(arr.begin(), arr.end());
    for (int i=0; i<n; i++){
        if (i<k) A += arr[i];
        else B += arr[i];
    }
    cout<<B-A<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}






