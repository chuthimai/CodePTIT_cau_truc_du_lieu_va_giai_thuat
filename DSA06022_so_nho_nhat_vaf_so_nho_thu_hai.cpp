//
//  DSA06022_so_nho_nhat_vaf_so_nho_thu_hai.cpp
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
    long long min = LONG_MAX, min_second = LONG_MAX;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    for(int i=0; i<n; i++) if(arr[i]<min) min = arr[i];
    for(int i=0; i<n; i++) if(arr[i]<min_second and arr[i]>min) min_second = arr[i];
    
    if(min_second == LONG_MAX) printf("-1\n");
    else printf("%lli %lli\n", min, min_second);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



