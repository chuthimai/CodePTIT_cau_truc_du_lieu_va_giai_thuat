//
//  DSA06028_sap_xep_chon_liet_ke_nguoc.cpp
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

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    vector<Array> all_step;
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
            Array added_arr;
            added_arr.arr = arr;
            all_step.push_back(added_arr);
        }
    }
    
    int total_step = all_step.size();
    for(int i=total_step-1; i>=0; i--){
        print_arr(i+1, all_step[i].arr);
    }
}


