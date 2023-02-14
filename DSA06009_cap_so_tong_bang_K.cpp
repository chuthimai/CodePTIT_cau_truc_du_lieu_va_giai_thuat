//
//  DSA06009_cap_so_tong_bang_K.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n, sum, count=0;
    cin>>n>>sum;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    sort(arr.begin(), arr.end());
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==sum) count++;
            else if(arr[i]+arr[j]>sum) break;
        }
    }
    printf("%d\n", count);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


