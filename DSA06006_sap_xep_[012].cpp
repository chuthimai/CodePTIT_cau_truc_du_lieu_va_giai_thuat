//
//  DSA06006_sap_xep_[012].cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n;
    cin>>n;
    int arr[3] = {0, 0, 0};
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr[a]++;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<arr[i]; j++){
            printf("%d ", i);
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



