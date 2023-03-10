//
//  DSA02006_day_con_tong_bang_k.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 10/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> arr, res;
map<int, bool> mark;
int n, k, sum;
bool OK;

void print_res(vector<int> arr){
    cout<<"[";
    for(int i=0; i<arr.size(); i++){
        if(i==arr.size()-1)cout<<arr[i]<<"] ";
        else cout<<arr[i]<<" ";
    }
}

void deQuy(int i){
    for(int j:arr){
        if((res.size()==0) || (j>res[res.size()-1] && mark[j]==0)){
            mark[j]=1;
            sum+=j;
            res.push_back(j);
        }else continue;
        
        if(sum==k){
            print_res(res);
            OK=1;
        }else if (sum>k){
        }else deQuy(i+1);
        
        mark[j]=0;
        sum-=j;
        res.pop_back();
    }
}


void oneTime(){
    OK=0;
    sum=0;
    arr.clear();
    res.clear();
    cin>>n>>k;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    deQuy(0);
    if(OK==0) cout<<"-1";
    cout<<endl;
}

int main(){
    int times;
    cin>>times;
    for(int i=0 ; i<times; i++) oneTime();
}







