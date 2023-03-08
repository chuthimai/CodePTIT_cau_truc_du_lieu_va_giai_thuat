//
//  DSA01013_ma_gray_2.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 06/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n;

void print_res(vector<bool> arr){
    for(int i=0; i<n; i++) cout<<arr[i];
    cout<<endl;
}

void oneTime(){
    string str;
    cin>>str;
    n = str.length();
    
    vector<bool> binary, gray;
    for(int i=0; i<n; i++){
        if(str[i]=='0') gray.push_back(0);
        else gray.push_back(1);
    }
    binary.push_back(gray[0]);
    
    for(int i=1; i<n; i++){
        if(gray[i]==1){
            if(binary[i-1]==0) binary.push_back(1);
            else binary.push_back(0);
        }else{
            if(binary[i-1]==0) binary.push_back(0);
            else binary.push_back(1);
        }
    }
    
    print_res(binary);
    
}

int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}










