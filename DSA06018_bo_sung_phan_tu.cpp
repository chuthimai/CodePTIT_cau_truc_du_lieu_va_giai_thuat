//
//  DSA06018_bo_sung_phan_tu.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    
    int res = arr[arr.size()-1] - arr[0] + 1 - arr.size();
    printf("%d\n", res);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



