//
//  DSA02008_chon_so_tu_ma_tran_vuong_cap_N.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 08/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int matrix[15][15];
int n, k, sum=0;
map<int, bool> mark;
vector<vector<int>> save;
vector<int> res;

void print_res(vector<int> arr){
    for(int i: arr) cout<<i+1<<" ";
    cout<<endl;
}

void deQuy(int i){
    bool change = 0;
    for(int j=0; j<n; j++){
        if(mark[j]==0){
            sum+=matrix[i][j];
            mark[j]=1;
            res.push_back(j);
            change=1;
        }
        if(sum>k || i>=n){
        }else if (sum==k) save.push_back(res);
        else deQuy(i+1);
        
        if(change==1){
            sum-=matrix[i][j];
            mark[j]=0;
            res.pop_back();
            change=0;
        }
    }
}


int main(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>matrix[i][j];
    }
    deQuy(0);
    
    int count = 0;
    for(auto i: save){
        if(i.size()==n) count++;
    }
    cout<<count<<endl;
    for(auto i: save){
        if(i.size()==n) print_res(i);
    }
}








