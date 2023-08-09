//
//  so_2_uu_the.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 13/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    int len = s.length();
    int count_2 = 0;
    for(int i=0; i<len; i++) if(s[i]=='2') count_2++;
    if(count_2>len/2) return true;
    else return false;
}


void oneTime(){
    long int n, count = 0;
    cin>>n;
    array<string, 10> arr={"0", "1", "2"};
    map<char, int> mark;
    queue<string> q;
    q.push("0");
    q.push("1");
    q.push("2");
    while(count != n){
        if(q.front() == "0") q.pop();
        if(check(q.front())) {
            cout<<q.front()<<' ';
            count++;
        }
        for(int i=0; i<3; i++){
            string a=q.front();
            q.push(a+arr[i]);
        }
        q.pop();
        
    }
    cout<<endl;
}


int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



