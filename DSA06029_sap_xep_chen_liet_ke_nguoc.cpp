//
//  DSA06029_sap_xep_chen_liet_ke_nguoc.cpp
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
    vector<int> initial_arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        initial_arr.push_back(a);
    }
    
    vector<int> sorted_arr;
    vector<Array> all_step;
    for(int i=0; i<n; i++){
        int num = initial_arr[i];
        
        if(sorted_arr.size() == 0){
            sorted_arr.push_back(num);
        }else{
            for(int j=0; j<sorted_arr.size(); j++){
                if(num < sorted_arr[0]) {
                    sorted_arr.insert(sorted_arr.begin(), num);
                    break;
                }else if(num > sorted_arr[sorted_arr.size()-1]){
                    sorted_arr.push_back(num);
                    break;
                }else if(num > sorted_arr[j] and num <= sorted_arr[j+1]) {
                    sorted_arr.insert(sorted_arr.begin()+j+1, num);
                    break;
                }
            }
        }
        
        Array added_arr;
        added_arr.arr = sorted_arr;
        all_step.push_back(added_arr);
    }
    
    int total_step = all_step.size();
    for(int i=total_step-1; i>=0; i--){
        print_arr(i, all_step[i].arr);
    }
    
}


