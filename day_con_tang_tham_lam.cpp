//
//  day_con_tang_tham_lam.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 12/06/2023.
//

#include <bits/stdc++.h>
using namespace std;
vector<long int> temp_res;
vector<vector<long int>> res;
map<int, bool> mark;


void print_arr(vector<long int> arr){
    for(long int i: arr) cout<<i<<" ";
    cout<<endl;
}

int main(){
    vector<long int> arr;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    for(int i=0; i<n; i++){
        temp_res.clear();
        if(mark[i]==0){
            temp_res.push_back(arr[i]);
            mark[i] = 1;
        }
        for(int j=i+1; j<n; j++){
            if(mark[j]==0){
                if(arr[j]>temp_res[temp_res.size()-1]) {
                    temp_res.push_back(arr[j]);
                    mark[j] = 1;
                }
            }
        }
        if(temp_res.size()!=0) res.push_back(temp_res);
    }
    cout<<res.size()<<endl;
    for(auto r:res) print_arr(r);
}
