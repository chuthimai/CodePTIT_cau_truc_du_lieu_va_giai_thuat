//
//  DSA06020_tim_kiem.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

int binary_search(int fist, int last, vector<int> arr, int need_find){
    if(arr[fist] == need_find or arr[last] == need_find) return 1;
    else{
        int mid = (fist + last)/2;
        if(mid == fist) return -1;
        if(arr[mid] > need_find){
            if(binary_search(fist, mid-1, arr, need_find) == 1) return 1;
        }else{
            if(binary_search(mid, last, arr, need_find) == 1) return 1;
        }
        return -1;
    }
}


void oneTime(){
    int n, find;
    cin>>n >>find;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    printf("%d\n", binary_search(0, n-1, arr, find));
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}

