//
//  DSA06010_sap_xep_chu_so.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n;
    cin>>n;
    string str;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        str += a;
    }
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}





