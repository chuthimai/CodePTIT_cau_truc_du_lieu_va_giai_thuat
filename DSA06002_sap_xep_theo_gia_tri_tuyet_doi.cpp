//
//  DSA06002_sap_xep_theo_gia_tri_tuyet_doi.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 04/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

float X;

bool compare(int a,int b){
    return abs(a-X) < abs(b-X);
}

void oneTime(){
    int n;
    cin>>n>>X;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    stable_sort(arr.begin(), arr.end(), compare);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}

