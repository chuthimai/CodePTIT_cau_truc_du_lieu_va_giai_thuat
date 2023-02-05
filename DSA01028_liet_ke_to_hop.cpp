//
//  DSA01028_liet_ke_to_hop.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 05/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

bool SinhToHop(int n, int k, vector<int> &arr){
    vector<int> last_arr;
    for(int i=0; i<k; i++) last_arr.push_back(n-i);
    reverse(last_arr.begin(), last_arr.end());
    if(arr != last_arr){
        for(int i=k-1; i>=0; i--){
            if(arr[i] < last_arr[i]) {
                arr[i]++;
                for(int j=i+1; j<k; j++) arr[j] = arr[i]+j-i;
                break;
            }
        }
        return true;
    }else return false;
}

void print_arr(vector<int> arr, vector<int> arr_n){
    int n = arr.size();
    for(int i=0; i<n; i++) printf("%d ", arr_n[arr[i]-1]);
    cout<<endl;
}


int main(){
    int n, k;
    cin>>n >>k;
    vector<int> arr, arr_n;
    for(int i=0; i<k; i++) arr.push_back(i+1);
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr_n.push_back(a);
    }
    
    sort(arr_n.begin(), arr_n.end());
    arr_n.erase(unique(arr_n.begin(), arr_n.end()), arr_n.end());
    bool is_on = true;
    while (is_on) {
        print_arr(arr, arr_n);
        is_on = SinhToHop(arr_n.size(), k, arr);
    }
    
}




