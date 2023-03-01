//
//  DSA01019_hahaha.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 01/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n;
vector<char> res;
string str="AH";

void print_res(vector<char> arr){
    for(char i:arr) cout<<i;
    cout<<endl;
}

void deQuy(int i){
    for(char j:str){
        if((res.size()==n-1 || res[res.size()-1]=='H') && j=='H') {
            break;
        }else res.push_back(j);
        
        if(res.size()==n) print_res(res);
        else deQuy(i+1);
        
        res.pop_back();
    }
}


void oneTime(){
    cin>>n;
    res.clear();
    res.push_back('H');
    deQuy(0);
}

int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}










