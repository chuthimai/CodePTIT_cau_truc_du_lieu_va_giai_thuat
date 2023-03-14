//
//  day_con_co_k_phan_tu.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 02/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> arr, res;
map<int, bool> mark;
int n, k;


void print_res(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        if(i==0 and arr[0]==0){
            
        }else cout<<arr[i]<<" ";
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

int main(){
    arr.clear();
    res.clear();
    mark.clear();
    cin>>n>>k;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    deQuy(0);
    
}

