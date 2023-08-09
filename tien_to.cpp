//
//  tien_to.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 09/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

//long long stoll0(string s){
//    long long num = 0;
//    for(int i=0; i<s.length(); i++){
//        num = num*10 + s[i]-'0';
//    }
//    return num;
//}

bool isnum(char i){
    if(i>='0' && i<='9') return 1;
    else return 0;
}

void oneTime(){
    int n;
    cin>>n;
    string arr[1005];
    for(int i=0; i<n; i++) cin>>arr[i];
    long long int res=0;
    stack<long long int> so;
    stack<char> dau;
    for(int i=n-1; i>=0; i--){
        if(isnum(arr[i][0]) || isnum(arr[i][1])){
            if(isnum(arr[i][0])) so.push(stoll(arr[i]));
            else{
                arr[i].erase(0, 1);
                so.push(-stoll(arr[i]));
            }
        }
        else{
            if(arr[i]=="+"){
                long int a=so.top();
                so.pop();
                long int b=so.top();
                so.pop();
                so.push(a+b);
            }
            if(arr[i]=="-"){
                long int a=so.top();
                so.pop();
                long int b=so.top();
                so.pop();
                so.push(a-b);
            }
            if(arr[i]=="*"){
                long int a=so.top();
                so.pop();
                long int b=so.top();
                so.pop();
                so.push(a*b);
            }
            if(arr[i]=="/"){
                long int a=so.top();
                so.pop();
                long int b=so.top();
                so.pop();
                so.push(a/b);
            }
            
        }
    }
    res = so.top();
    cout<<res<<endl;

}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}




