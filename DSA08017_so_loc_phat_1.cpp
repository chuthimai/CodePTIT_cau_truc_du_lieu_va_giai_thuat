//
//  DSA08017_so_loc_phat_1.cpp
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
    stack<string> res;
    Q.push("6");
    Q.push("8");
    string s=Q.front();
    while (s.length()<=n) {
        res.push(s);
        Q.push(s+"6");
        Q.push(s+"8");
        Q.pop();
        s = Q.front();
    }
    while(!res.empty()){
        cout<<res.top()<<" ";
        res.pop();
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


