//
//  CTDL_001_thuat_toan_sinh.cpp
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

int main(){
    int n;
    cin>>n;
    if(n%2 == 0){
        vector<bool> arr;
        for(int i=0; i<n/2; i++) arr.push_back(0);
        bool is_on = true;
        while(is_on == true){
            for(int i=0; i<n/2; i++) cout<<arr[i]<<" ";
            for(int i=n/2-1; i>=0; i--) cout<<arr[i]<<" ";
            cout<<endl;
            is_on = Sinh(n/2, arr);
        }
    }else{
        vector<bool> arr;
        for(int i=0; i<n/2+1; i++) arr.push_back(0);
        bool is_on = true;
        while(is_on == true){
            for(int i=0; i<n/2+1; i++) cout<<arr[i]<<" ";
            for(int i=n/2-1; i>=0; i--) cout<<arr[i]<<" ";
            cout<<endl;
            is_on = Sinh(n/2+1, arr);
        }
    }
}




