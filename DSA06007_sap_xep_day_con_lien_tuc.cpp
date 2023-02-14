//
//  DSA06007_sap_xep_day_con_lien_tuc.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n;
    cin>>n;
    vector<int> arr_sort, arr;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    arr_sort = arr;
    sort(arr_sort.begin(), arr_sort.end());
    
    int i=0, j=n-1;
    while (i<j) {
        if(arr[i] != arr_sort[i] and arr[j] != arr_sort[j]) break;
        if(arr[i] == arr_sort[i]) i++;
        if(arr[j] == arr_sort[j]) j--;
    }
    printf("%d %d\n", i+1, j+1);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}




