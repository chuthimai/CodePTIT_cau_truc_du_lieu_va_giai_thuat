//
//  DSA02005_hoan_vi_xau_ky_tu.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 10/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

map<char, bool> mark;
string str, res;

void deQuy(int i){
    for(char j:str){
        if(mark[j]==0){
            mark[j]=1;
            res.push_back(j);
        }else continue;
        
        if(res.length()==str.length()) cout<<res<<" ";
        else deQuy(i+1);
        mark[j]=0;
        res.pop_back();
    }
}


void oneTime(){
    cin>>str;
    deQuy(0);
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}










