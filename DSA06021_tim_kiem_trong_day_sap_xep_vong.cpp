//
//  DSA06021_tim_kiem_trong_day_sap_xep_vong.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n, find;
    cin>>n>>find;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a == find) printf("%d\n", i+1);
    }
    
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}




