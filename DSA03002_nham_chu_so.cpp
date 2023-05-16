//
//  DSA03002_nham_chu_so.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 16/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


string get_min(string str){
    for (int i=0; i<str.length(); i++){
        if(str[i]=='6') str[i] = '5';
    }
    return str;
}

string get_max(string str){
    for (int i=0; i<str.length(); i++){
        if(str[i]=='5') str[i] = '6';
    }
    return str;
}

int main(){
    string A, B;
    cin>>A>>B;
    cout<<stoi(get_min(A)) + stoi(get_min(B))<<" "<<stoi(get_max(A)) + stoi(get_max(B))<<endl;
}

