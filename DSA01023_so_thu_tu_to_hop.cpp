//
//  DSA01023_so_thu_tu_to_hop.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 05/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

void SinhToHop(int n, int k, vector<int> &arr){
    vector<int> last_arr;
    for(int i=0; i<k; i++) last_arr.push_back(n-i);
    reverse(last_arr.begin(), last_arr.end());
    if(arr != last_arr){
        for(int i=k-1; i>=0; i--){
            if(arr[i] < last_arr[i]) {
                arr[i]++;
                for(int j=i+1; j<k; j++) arr[j] = arr[i]+j-i;
                break;
            }else if(arr[i] == last_arr[i]) continue;
        }
    }
}

void oneTime(){
    int n, k;
    cin>>n >>k;
    vector<int> arr, arr_n;
    for(int i=0; i<k; i++) arr.push_back(i+1);
    for(int i=0; i<k; i++){
        int a; cin>>a;
        arr_n.push_back(a);
    }
    
    int count = 1;
    while(arr != arr_n){
        SinhToHop(n, k, arr);
        count++;
    }
    printf("%d\n", count);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}




