//
//  DSA07013_tinh_gia_tri_bieu_thuc_hau_to.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 06/04/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    string str;
    cin>>str;
    stack<int> fun;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='+'){
            int res = fun.top();
            fun.pop();
            res += fun.top();
            fun.pop();
            fun.push(res);
        }else if (str[i]=='-'){
            int res = fun.top();
            fun.pop();
            res = fun.top()-res;
            fun.pop();
            fun.push(res);
        }else if(str[i]=='*'){
            int res = fun.top();
            fun.pop();
            res = fun.top()*res;
            fun.pop();
            fun.push(res);
        }else if(str[i]=='/'){
            int res = fun.top();
            fun.pop();
            res = fun.top()/res;
            fun.pop();
            fun.push(res);
        }else fun.push(str[i]-'0');
    }
    int res = fun.top();
    cout<<res<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



