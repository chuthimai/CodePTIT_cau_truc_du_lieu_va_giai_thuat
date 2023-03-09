//
//  DSA02002_day_so_2.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 09/03/2023.
//

#include <bits/stdc++.h>
using namespace std;


void print_res(vector<int> arr){
    cout<<"[";
    for(int i=0; i<arr.size(); i++){
        if(i==arr.size()-1) cout<<arr[i]<<"] ";
        else cout<<arr[i]<<" ";
    }
}

void oneTime(){
    vector<vector<int>> save;
    vector<int> res, arr;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    res=arr;
    while(arr.size()!=1){
        save.push_back(res);
        res.clear();
        for(int i=0; i<arr.size()-1; i++){
            res.push_back(arr[i] + arr[i+1]);
        }
        arr=res;
    }
    save.push_back(res);
    
    for(int i=save.size()-1; i>=0; i--){
        print_res(save[i]);
    }
    cout<<endl;
}


int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}







