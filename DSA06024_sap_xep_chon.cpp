//
//  DSA06024_sap_xep_chon.cpp
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
    for(int i=0; i<n; i++){
        vector<int> old_arr = arr;
        int smalest_num = arr[i];
        int index_of_smalest_num = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < smalest_num){
                smalest_num = arr[j];
                index_of_smalest_num = j;
            }
        }
        swap(arr[i], arr[index_of_smalest_num]);
        if(old_arr == arr && i==n-1){
            continue;
        }else{
            step++;
            print_arr(step, arr);
        }
    }
}


