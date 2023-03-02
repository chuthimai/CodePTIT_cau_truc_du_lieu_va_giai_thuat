//
//  DSA01010_tap_quan_su.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 02/03/2023.
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
        int a; cin>>a;
        arr.push_back(a);
    }
    vector<int> save=arr;
    if(!SinhToHop(n, k, arr)) cout<<arr.size();
    else{
        int i=0, j=0;
        int count=0;
        while(i<k and j<k){
            if(save[i]>arr[j]) j++;
            else if(save[i]<arr[j]) i++;
            else{
                count++;
                i++; j++;
            }
        }
        cout<<k-count;
        
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


