//
//  DSA01020_xau_nhi_phan_truoc.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 16/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

string Sinh(string a){
    int n = a.length();
    string last = "";
    for(int i=0; i<n; i++) last += "0";
    
    if(a != last){
        for(int i=n-1; i>=0; i--){
            if(a[i]=='1'){
                a[i]='0';
                for(int j=i+1; j<n; j++) a[j]='1';
                break;
            }
        }
    }else{
        a = "";
        for(int i=0; i<n; i++) a += "1";
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        str = Sinh(str);
        cout<<str<<endl;
    }
}

