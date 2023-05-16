//
//  DSA03010_noi_day_1.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 16/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


bool check(int a, int b){
    return a < b;
}


void oneTime(){
    priority_queue<int, vector<int>, greater<int>>q;
    int n; cin>>n;
    long long res = 0;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        q.push(a);
    }
    while (q.size()>1){
        int a, b;
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        res += a+b;
        q.push(a+b);
    }
    cout<<res<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


