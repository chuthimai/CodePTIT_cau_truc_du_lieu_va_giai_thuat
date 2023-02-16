//
//  DSA06011_tong_gan_0_nhat.cpp
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
    
    
    int save=INT_MAX;
    int sum_pre=0, sum;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            sum = arr[i] + arr[j];
            if(save > abs(sum)){
                save = abs(sum);
                sum_pre = sum;
            }
        }
    }
    printf("%d\n", sum_pre);
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


