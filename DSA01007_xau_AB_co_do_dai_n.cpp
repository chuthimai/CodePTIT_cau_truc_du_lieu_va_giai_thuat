//
//  DSA01007_xau_AB_co_do_dai_n.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 01/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n;
string str = "AB";
vector<char> res;


void print_res(vector<char> arr){
    for(char i:arr) cout<<i;
    cout<<" ";
}

void deQuy(int i){
    for(char j:str){
        res.push_back(j);
        if(res.size() == n) print_res(res);
        else deQuy(i+1);
        res.pop_back();
    }
}

void oneTime(){
    cin>>n;
    res.clear();
    deQuy(0);
    cout<<endl;
}

int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}






