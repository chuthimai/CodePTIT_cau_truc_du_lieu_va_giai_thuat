//
//  kiem_tra_cau_viet_dung_quy_tac.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 07/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    stack<int> arr;
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' or s[i]=='[') arr.push(s[i]);
        if(s[i]==')') {
            if(arr.empty()) arr.push(s[i]);
            else if(arr.top()=='(') arr.pop();
            else arr.push(s[i]);
        }
        if(s[i]==']') {
            if(arr.empty()) arr.push(s[i]);
            else if(arr.top()=='[') arr.pop();
            else arr.push(s[i]);
        }
    }
    if(arr.size()==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++) oneTime();
}




