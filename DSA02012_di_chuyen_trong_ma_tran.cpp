//
//  DSA02012_di_chuyen_trong_ma_tran.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 10/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int m, n;
vector<bool> res;
int ways;


bool check(int m, vector<bool> arr){
    int count=0;
    for(bool i:arr){
        if(i==0) count++;
    }
    if(count==m-1) return 1;
    else return 0;
}

void deQuy(int i){
    for(int j=0; j<=1; j++){
        res.push_back(j);
        if(res.size()==m+n-2){
            if(check(m, res)) ways++;
        }else deQuy(i+1);
        res.pop_back();
    }
}

void oneTime(){
    res.clear();
    ways=0;
    cin>>m>>n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) {
            int a; cin>>a;
        }
    }
    deQuy(0);
    cout<<ways<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}














