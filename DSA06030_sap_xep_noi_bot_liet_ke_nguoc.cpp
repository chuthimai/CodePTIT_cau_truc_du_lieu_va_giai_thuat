//
//  DSA06030_sap_xep_noi_bot_liet_ke_nguoc.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 04/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

struct Array{
    vector<int> arr;
};

void print_arr(int step, vector<int> arr){
    printf("Buoc %d: ", step);
    for(int i=0; i<arr.size(); i++) printf("%d ", arr[i]);
    cout<<endl;
}

void oneTime(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    vector<Array> all_step;
    for(int i=n-1; i>=0; i--){
        vector<int> old_arr = arr;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
        if(old_arr != arr){
            Array added_arr;
            added_arr.arr = arr;
            all_step.push_back(added_arr);
        }else break;
    }
    
    int total_step = all_step.size();
    for(int i=total_step-1; i>=0; i--){
        print_arr(i+1, all_step[i].arr);
    }
    
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
