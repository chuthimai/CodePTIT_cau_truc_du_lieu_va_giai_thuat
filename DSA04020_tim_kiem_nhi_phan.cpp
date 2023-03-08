//
//  DSA04020_tim_kiem_nhi_phan.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 08/03/2023.
//


#include <bits/stdc++.h>
using namespace std;

int binary_search(int fist, int last, vector<int> arr, int need_find){
    if(arr[fist] == need_find) return fist;
    else if(arr[last] == need_find) return last;
    else{
        int mid = (fist + last)/2;
        if(mid == fist) return -1;
        if(arr[mid] > need_find){
            return binary_search(fist, mid-1, arr, need_find);
        }else{
            return binary_search(mid, last, arr, need_find) ;
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
    int position = binary_search(0, n-1, arr, find);
    if(position==-1) cout<<"NO"<<endl;
    else cout<<position+1<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


