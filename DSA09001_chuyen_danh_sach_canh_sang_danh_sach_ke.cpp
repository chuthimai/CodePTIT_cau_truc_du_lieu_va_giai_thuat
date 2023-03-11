//
//  DSA09001_chuyen_danh_sach_canh_sang_danh_sach_ke.cpp
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
    int v, e;
    cin>>v>>e;
    map<int, vector<int>> dsKe;
    for(int i=0; i<e; i++){
        int a, b;
        cin>>a>>b;
        dsKe[a].push_back(b);
        dsKe[b].push_back(a);
    }
    
    for(auto i:dsKe){
        cout<<i.first<<": ";
        print_arr(i.second);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}










