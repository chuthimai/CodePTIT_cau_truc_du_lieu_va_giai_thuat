//
//  DSA01006_hoan_vi_nguoc.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 01/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> res;
array<bool, 15> mark;


void print_res(vector<int> arr){
    for(int i:arr) cout<<i;
    cout<<" ";
}

void deQuy(int i){
    for(int j=n; j>0; j--){
        if(!mark[j]){
            res.push_back(j);
            mark[j] = 1;
            if(res.size() == n) print_res(res);
            else deQuy(i+1);
            res.pop_back();
            mark[j] = 0;
        }
    }
}

void oneTime(){
    cin>>n;
    res.clear();
    mark.fill(0);
    deQuy(0);
    cout<<endl;
}

int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}








