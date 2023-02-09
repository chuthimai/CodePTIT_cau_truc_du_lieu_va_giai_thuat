//
//  DSA06015_merge_sort.cpp
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
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    arr = merge_sort(arr);
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    cout<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}





