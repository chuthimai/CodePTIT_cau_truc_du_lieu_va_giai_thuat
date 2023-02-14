//
//  DSA06019_sap_xep_theo_so_lan_xuat_hien.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

map<int, int> save;


bool compare(int a, int b){
    if(save[a] > save[b]) return true;
    else if(save[a] == save[b]){
        if(a < b) return true;
        else return false;
    }else return false;
}

void oneTime(){
    int n;
    cin>>n;
    vector<int> arr;
    save.clear();
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
        save[a]++;
    }
    
    sort(arr.begin(), arr.end(), compare);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



