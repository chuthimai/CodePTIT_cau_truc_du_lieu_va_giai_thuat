//
//  DSA02033_so_xa_cach.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 11/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr, res;
map<int, bool> mark;


void print_res(vector<int> arr){
    for(int i:arr) cout<<i;
    cout<<endl;
}

bool check(vector<int> arr){
    bool OK=1;
    for(int i=1; i<arr.size(); i++){
        if(abs(arr[i]-arr[i-1])==1){
            OK=0;
            break;
        }
    }
    return OK;
}

void deQuy(int i){
    for(int j:arr){
        if(mark[j]==0){
            mark[j]=1;
            res.push_back(j);
        }else continue;
        
        if(!check(res)){
            mark[j]=0;
            res.pop_back();
            continue;
        }
        if(res.size()==n) print_res(res);
        else deQuy(i+1);
        
        mark[j]=0;
        res.pop_back();
    }
}

void oneTime(){
    arr.clear();
    res.clear();
    cin>>n;
    for(int i=1; i<=n; i++){
        arr.push_back(i);
    }
    
    deQuy(0);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}






