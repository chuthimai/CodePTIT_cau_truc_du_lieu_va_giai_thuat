//
//  DSA09003_bieu_dien_do_thi_co_huong.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 11/03/2023.
//

#include <bits/stdc++.h>
using namespace std;


void print_arr(vector<int> arr){
    sort(arr.begin(), arr.end());
    for(int i:arr) cout<<i<<" ";
    cout<<endl;
}

void oneTime(){
    int v;
    int e;
    cin>>v>>e;
    map<int, vector<int>> dsKe;
    for(int i=1; i<=v; i++){
        vector<int> arr;
        dsKe[i]=arr;
    }
    for(int i=0; i<e; i++){
        int a, b;
        cin>>a>>b;
        dsKe[a].push_back(b);
    }
    
    for(pair<int, vector<int>> i:dsKe){
        cout<<i.first<<": ";
        print_arr(i.second);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}










