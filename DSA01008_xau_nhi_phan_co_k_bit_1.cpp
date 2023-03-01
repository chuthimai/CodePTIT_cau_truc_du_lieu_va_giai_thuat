//
//  DSA01008_xau_nhi_phan_co_k_bit_1.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 01/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n,k, count1;
vector<int> res;


void print_res(vector<int> arr){
    for(int i:arr) cout<<i;
    cout<<endl;
}

void deQuy(int i){
    for(int j=0; j<=1; j++){
        res.push_back(j);
        if(j==1) count1++;
        if(count1==k && res.size()==n) print_res(res);
        else if(res.size()<n) deQuy(i+1);
        res.pop_back();
        if(j==1) count1--;
    }
}


void oneTime(){
    cin>>n>>k;
    count1=0;
    res.clear();
    deQuy(0);
}

int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}












