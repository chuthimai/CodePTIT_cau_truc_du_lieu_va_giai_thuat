//
//  DSA01021_to_hop_tiep_theo.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 16/02/2023.
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
    }else{
        arr.clear();
        for(int i=0; i<k; i++) arr.push_back(0);
    }
}

void print_arr(vector<int> arr){
    int n = arr.size();
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    cout<<endl;
}

void oneTime(){
    int n, k;
    cin>>n >>k;
    vector<int> arr, old_arr;
    for(int i=0; i<k; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    old_arr = arr;
    SinhToHop(n, k, arr);
    
    int same = 0;
    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            if(old_arr[i] == arr[j]) same++;
        }
    }
    printf("%d\n", k-same);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


