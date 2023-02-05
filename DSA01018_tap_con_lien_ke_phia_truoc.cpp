//
//  DSA01018_tap_con_lien_ke_phia_truoc.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 05/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

void SinhToHopNguoc(int n, int k, vector<int> &arr){
    vector<int> last_arr, begin_arr;
    for(int i=0; i<k; i++) {
        last_arr.push_back(n-i);
        begin_arr.push_back(i+1);
    }
    reverse(last_arr.begin(), last_arr.end());
    arr.insert(arr.begin(), 0);
    last_arr.insert(last_arr.begin(), 0);
    begin_arr.insert(begin_arr.begin(), 0);
    
    if(arr != begin_arr){
        for(int i=k; i>0; i--){
            if(arr[i]-1 != arr[i-1]){
                arr[i]--;
                for(int j=i+1; j<=k; j++) arr[j] = last_arr[j];
                break;
            }
        }
    }else{
        arr = last_arr;
    }
}

void print_arr(vector<int> arr){
    int n = arr.size()-1;
    for(int i=0; i<n; i++) printf("%d ",arr[i+1]);
    cout<<endl;
}


void oneTime(){
    int n, k;
    cin>>n >>k;
    vector<int> arr_input, previous_arr;
    for(int i=0; i<k; i++){
        int a; cin>>a;
        arr_input.push_back(a);
    }
    SinhToHopNguoc(n, k, arr_input);
    print_arr(arr_input);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



