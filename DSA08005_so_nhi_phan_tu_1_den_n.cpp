//
//  DSA08005_so_nhi_phan_tu_1_den_n.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 06/04/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n;
    cin>>n;
    queue<string> Q;
    Q.push("1");
    string s = Q.front();
    int count=0;
    while(count!=n){
        s = Q.front();
        cout<<s<<" ";
        count++;
        Q.push(s+"0");
        Q.push(s+"1");
        Q.pop();
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}





