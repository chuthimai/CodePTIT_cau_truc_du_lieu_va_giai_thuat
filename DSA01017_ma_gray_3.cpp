//
//  DSA01017_ma_gray_3.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 08/03/2023.
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
        if(str[i]=='0') binary.push_back(0);
        else binary.push_back(1);
    }
    gray.push_back(binary[0]);
    
    for(int i=1; i<n; i++){
        gray.push_back(binary[i-1] xor binary[i]);
    }
    
    print_res(gray);
    
}

int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}



