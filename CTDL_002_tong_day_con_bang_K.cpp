//
//  CTDL_002_tong_day_con_bang_K.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 05/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

bool Sinh(int n, vector<bool> &arr){
    vector<bool> last_arr;
    for(int i=0; i<n; i++) last_arr.push_back(1);
    
    if(arr != last_arr){
        for(int i=n-1; i>=0; i--){
            if(arr[i]==0){
                arr[i]=1;
                for(int j=i+1; j<n; j++) arr[j]=0;
                break;
            }
        }
        return true;
    }else return false;
}

bool check_sum(vector<int> arr, vector<bool> binary_arr, int sum, int n){
    int sum_check = 0;
    for(int i=0; i<n; i++){
        if(binary_arr[i] == 1) sum_check += arr[i];
    }
    if(sum_check == sum) {
        for(int i=0; i<n; i++){
            if(binary_arr[i] == 1) printf("%d ", arr[i]);
        }
        cout<<endl;
        return true;
    }else return false;
}

int main(){
    int  n, K;
    cin>>n >>K;
    vector<int> arr;
    vector<bool> binary_arr;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
        binary_arr.push_back(0);
    }
    
    bool is_on = true;
    int count = 0;
    while (is_on){
        is_on = Sinh(n, binary_arr);
        if(check_sum(arr, binary_arr, K, n)) count++;
    }
    printf("%d\n", count);
}




