//
//  hoan_vi_chu_so.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 02/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> arr, res;
map<int, bool> mark;
long long n;


void print_res(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        if(i==0 and arr[0]==0){
            
        }else cout<<arr[i];
    }
    cout<<endl;
}

void deQuy(int i){
    for(int j:arr){
        if(mark[j]==0){
            res.push_back(j);
            mark[j]=1;
        }else continue;
        if(res.size()==arr.size()) print_res(res);
        else deQuy(i+1);
        res.pop_back();
        mark[j]=0;
    }
}

void oneTime(){
    arr.clear();
    res.clear();
    mark.clear();
    cin>>n;
    while(n>0){
        arr.push_back(n%10);
        n /= 10;
    }
    sort(arr.begin(), arr.end());
    deQuy(0);
    
}

int main(){
    int times; cin>>times;
    for(int i=0; i<times; i++) oneTime();
}







