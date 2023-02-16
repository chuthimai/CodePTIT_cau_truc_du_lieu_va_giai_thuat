//
//  DSA01027_hoan_vi_day_so.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 16/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void in(vector<int> arr, vector<int> A){
    for(int i: arr) printf("%d ", A[i-1]);
    cout<<endl;
}

bool sinh(vector<int> &arr, int n){
    vector<int> last_arr;
    for(int i=n; i>0; i--) last_arr.push_back(i);
    if(arr == last_arr) return false;
    else{
        int i=arr.size()-1, j=arr.size()-1;
        for(; i>0; i--){
            if(arr[i]>arr[i-1]){
                i = i - 1;
                break;
            }
        }
        int min = INT_MAX, index;
        for(; j>i; j--){
            if(min>arr[j] && arr[j]>arr[i]){
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
        sort(arr.begin()+i+1, arr.end());
        return true;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr, A;
    
    for(int i=0; i<n; i++){
        int a; cin>>a;
        A.push_back(a);
    }
    sort(A.begin(), A.end());
    
    for(int i=0; i<n; i++){
        arr.push_back(i+1);
    }
    in(arr, A);
    while (sinh(arr, n)) {
        in(arr, A);
    }
    cout<<endl;
    
}
