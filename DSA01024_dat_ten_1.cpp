//
//  DSA01024_dat_ten_1.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 22/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<string> arr_name;
vector<string> name;

void print_name(){
    for(int i=0; i<k; i++) cout<<name[i]<<" ";
    cout<<endl;
}

void find_name(int num){
    for(int i=num; i<arr_name.size(); i++){
        name.push_back(arr_name[i]);
        if(name.size() >= k) print_name();
        else find_name(i+1);
        name.pop_back();
    }
}

int main(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        string a;
        cin>>a;
        arr_name.push_back(a);
    }
    
    sort(arr_name.begin(), arr_name.end());
    arr_name.erase(unique(arr_name.begin(), arr_name.end()), arr_name.end());
    find_name(0);
}







