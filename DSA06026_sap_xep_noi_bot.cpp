//
//  DSA06026_sap_xep_noi_bot.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 04/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void print_arr(int step, vector<int> arr){
    printf("Buoc %d: ", step);
    for(int i=0; i<arr.size(); i++) printf("%d ", arr[i]);
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    int step = 0;
    for(int i=n-1; i>=0; i--){
        vector<int> old_arr = arr;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
        if(old_arr != arr){
            step++;
            print_arr(step, arr);
        }
    }
    
}


