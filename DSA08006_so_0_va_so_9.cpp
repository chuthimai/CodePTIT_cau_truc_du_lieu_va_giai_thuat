//
//  DSA08006_so_0_va_so_9.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 06/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

long int strToNum(string str){
    long int num = 0;
    for(char i:str){
        num = num*10 + i-'0';
    }
    return num;
}

void oneTime(){
    int n;
    cin>>n;
    queue<string> Q;
    Q.push("9");
    string s = Q.front();
    long int res = strToNum(s);
    while(res%n!=0){
        s = Q.front();
        Q.push(s+"0");
        Q.push(s+"9");
        Q.pop();
        res = strToNum(Q.front());
    }
    cout<<res<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}





