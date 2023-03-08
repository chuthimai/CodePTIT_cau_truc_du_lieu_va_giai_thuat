//
//  DSA01016_phan_tich_so_1.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 08/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n, sum=0;
vector<int> res;

void print_res(vector<int> arr){
    cout<<"(";
    for(int i=0; i<arr.size(); i++){
        if(i==arr.size()-1) cout<<arr[i]<<") ";
        else cout<<arr[i]<<" ";
    }
}

void deQuy(int i){
    for(int j=i; j>0; j--){
        if(res.size()==0){
            sum += j;
            res.push_back(j);
        }else{
            if(j<=res[res.size()-1]){
                sum += j;
                res.push_back(j);
            }else continue;
        }
        
        if(sum==n) print_res(res);
        else if(sum<n) deQuy(i-1);
        sum -= j;
        res.pop_back();
    }
}


void oneTime(){
    res.clear();
    cin>>n;
    deQuy(n);
    cout<<endl;
}


int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}

