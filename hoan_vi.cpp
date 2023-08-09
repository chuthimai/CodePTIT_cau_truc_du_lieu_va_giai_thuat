//
//  hoan_vi.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 23/05/2023.
//

#include <bits/stdc++.h>
using namespace std;

int c=0, n, m;
vector<int> res, arr;
map<int, bool> mark;

void print_arr(vector<int> array){
    for(int i:array){
        cout<<i<<" ";
    }
    cout<<endl;
}

void DeQuy(int i){
    for(int j=0; j<n; j++){
        if(mark[arr[j]]==0){
            mark[arr[j]] = 1;
            res.push_back(arr[j]);
            if(res.size()==n){
                c++;
                if(c%m == 0){
                    print_arr(res);
                }
            }else DeQuy(i+1);
            res.pop_back();
            mark[arr[j]] = 0;
        }else continue;
    }
}

int main(){
    cin>>n>>m;
    for(int i=1; i<=n; i++) arr.push_back(i);
    DeQuy(0);
}









