//
//  DSA01025_dat_ten_2.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 02/03/2023.
//


#include <bits/stdc++.h>
using namespace std;

vector<char> arr, res;
map<char, bool> mark;
int n, k;


void print_res(vector<char> arr){
    for(int i=0; i<arr.size(); i++){
        if(i==0 and arr[0]==0){
            
        }else cout<<arr[i];
    }
    cout<<endl;
}

void deQuy(int i){
    for(int j:arr){
        if(mark[j]==0){
            if((res.size()!=0 and j>res[res.size()-1]) or res.size()==0){
                res.push_back(j);
                mark[j]=1;
            }else continue;
        }else continue;
        if(res.size()==k) print_res(res);
        else deQuy(i+1);
        res.pop_back();
        mark[j]=0;
    }
}

void oneTime(){
    arr.clear();
    res.clear();
    mark.clear();
    cin>>n>>k;
    for(int i=0; i<n; i++){
        arr.push_back('A'+i);
    }
    sort(arr.begin(), arr.end());
    deQuy(0);
    
}

int main(){
    int times; cin>>times;
    for(int i=0; i<times; i++) oneTime();
}
