//
//  tinh_toan_gia_tri_bieu_thuc.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 19/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


bool is_num(string s){
    if(s=="-") return 0;
    else if(s=="+") return 0;
    else if(s=="*") return 0;
    else if(s=="/") return 0;
    else return 1;
}

long long int neg_stoll(string s){
    bool neg = 0;
    if(s[0]=='-'){
        neg = 1;
        s.erase(s.begin(), s.begin()+1);
    }
    long long int res = stoll(s);
    if(neg) return -res;
    else return res;
}

long long back(vector<string> arr){
    long long res = 0;
    stack<string> s;
    for(int i=0; i<arr.size(); i++){
        if(is_num(arr[i])) s.push(arr[i]);
        else{
            long long s1, s2;
            s1 = neg_stoll(s.top()); s.pop();
            s2 = neg_stoll(s.top()); s.pop();
            if(arr[i]=="+") s.push(to_string(s1+s2));
            else if (arr[i]=="-") s.push(to_string(s2-s1));
            else if (arr[i]=="/") s.push(to_string(s2/s1));
            else if (arr[i]=="*") s.push(to_string(s2*s1));
        }
    }
    res = neg_stoll(s.top());
    return res;
}

long long front(vector<string> arr){
    long long res = 0;
    stack<string> s;
    for(int i=0; i<arr.size(); i++){
        if((not is_num(arr[i])) or (not is_num(s.top()))) s.push(arr[i]);
        else{
            long long s1, s2;
            s1 = neg_stoll(arr[i]);
            s2 = neg_stoll(s.top()); s.pop();
            if(arr[i]=="+") s.push(to_string(s1+s2));
            else if (arr[i]=="-") s.push(to_string(s2-s1));
            else if (arr[i]=="/") s.push(to_string(s2/s1));
            else if (arr[i]=="*") s.push(to_string(s2*s1));
        }
    }
    res = neg_stoll(s.top());
    return res;
}


void oneTime(){
    int n;
    cin>>n;
    vector<string> arr;
    for(int i=0; i<n; i++) {
        string s; cin>>s;
        arr.push_back(s);
    }
    bool is_back = 0;
    if(is_num(arr[0])) is_back = 1;
    if(is_back) cout<<back(arr)<<endl;
    else cout<<front(arr)<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}





