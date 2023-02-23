//
//  DSA06017_tron_hai_day.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 09/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


vector<int> merge(vector<int> left, vector<int> right){
    vector<int> result;
    int left_index = 0, right_index = 0;
    int len = left.size() + right.size();
    while (result.size() < len) {
        if(left_index >= left.size()){
            result.push_back(right[right_index]);
            right_index++;
        }else if (right_index >= right.size()){
            result.push_back(left[left_index]);
            left_index++;
        }else{
            if(left[left_index] <= right[right_index]){
                result.push_back(left[left_index]);
                left_index++;
            }else{
                result.push_back(right[right_index]);
                right_index++;
            }
        }
        
    }
    
    return result;
}


vector<int> merge_sort(vector<int> arr){
    if (arr.size() <= 1) {
        return arr;
    }else{
        int len = arr.size();
        int mid = len/2;
        
        vector<int> left, right;
        for(int i=0; i<len; i++){
            if(i < mid) left.push_back(arr[i]);
            else right.push_back(arr[i]);
        }
        
        left = merge_sort(left);
        right = merge_sort(right);
        
        return merge(left, right);
    }
}


void oneTime(){
    int n, m;
    cin>>n>>m;
    vector<int> arr_A, arr_B, res;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr_A.push_back(a);
    }
    for(int i=0; i<m; i++){
        int a; cin>>a;
        arr_B.push_back(a);
    }
    arr_A = merge_sort(arr_A);
    arr_B = merge_sort(arr_B);
    res = merge(arr_A, arr_B);
    for(int i=0; i<res.size(); i++) printf("%d ", res[i]);
    cout<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}





