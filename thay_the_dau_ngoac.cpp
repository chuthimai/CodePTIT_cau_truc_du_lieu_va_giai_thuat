//
//  thay_the_dau_ngoac.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 09/04/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    string str;

    getline(cin, str);
    stack<int> s;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='(') s.push(i);
        else if (str[i]==')' && !s.empty()){
            str[s.top()]='0';
            str[i]='1';
            s.pop();
        }else if(str[i]==')' && s.empty()){
            str[i]='?';
        }
    }
    while(!s.empty()){
        str[s.top()]='?';
        s.pop();
    }
    for(int i=0; i<str.size(); i++){
        if(str[i]=='?') cout<<"-1";
        else cout<<str[i];
    }
    cout<<endl;
}

int main(){
    int n; cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++) oneTime();
}


