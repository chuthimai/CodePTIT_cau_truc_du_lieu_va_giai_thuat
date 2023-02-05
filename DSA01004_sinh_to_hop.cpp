//
//  DSA01004_sinh_to_hop.cpp
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
            }else if(arr[i] == last_arr[i]) continue;
        }
        return true;
    }else return false;
}

void print_arr(vector<int> arr){
    int n = arr.size();
    for(int i=0; i<n; i++) printf("%d", arr[i]);
    cout<<" ";
}

void oneTime(){
    int n, k;
    cin>>n >>k;
    vector<int> arr;
    for(int i=0; i<k; i++){
        arr.push_back(i+1);
    }
    
    bool is_on = true;
    while(is_on){
        print_arr(arr);
        is_on = SinhToHop(n, k, arr);
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        oneTime();
        cout<<endl;
    }
}

