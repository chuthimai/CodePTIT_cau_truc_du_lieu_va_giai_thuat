//
//  CTDL_004_day_con_tang_dan_bac_k.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 02/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> arr, res;
int n, k, counter=0;


void deQuy(int i, int start){
    for(int j=start; j<arr.size(); j++){
        if(res.empty()) res.push_back(arr[j]);
        else{
            if(arr[j]>res[res.size()-1]) res.push_back(arr[j]);
            else continue;
        }
        if(res.size()==k) counter++;
        else deQuy(i+1, j+1);
        
        res.pop_back();
    }
}

int main(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    deQuy(0, 0);
    cout<<counter<<endl;
}









