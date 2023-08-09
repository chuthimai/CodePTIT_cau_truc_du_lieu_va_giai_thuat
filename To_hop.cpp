//
//  To_hop.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 19/05/2023.
//

#include <bits/stdc++.h>
using namespace std;

vector<string> res;
string s;
int n;
string r;

void De_Quy(int i){
    for(int j=i; j<s.length(); j++){
        r.push_back(s[j]);
        if(r.length()<n) De_Quy(j+1);
        else if(r.length()==n) res.push_back(r);
        r.pop_back();
    }
}

void oneTime(){
    res.clear();
    cin>>s>>n;
    De_Quy(0);
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    for(string str:res){
        cout<<str<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++) oneTime();
}






