//
//  DSA07110_kiem_tra_day_ngoac_dung.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 30/03/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    stack<int> arr;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        int a;
        if(s[i]=='}' or s[i]=='{') a=1;
        if(s[i]=='(' or s[i]==')') a=2;
        if(s[i]=='[' or s[i]==']') a=3;
        if(arr.empty()){
            arr.push(a);
            continue;
        }
        int num=arr.top();
        if(num==a) arr.pop();
        else arr.push(a);
    }
    if(arr.size()==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



