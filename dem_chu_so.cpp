//
//  dem_chu_so.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 09/04/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    long int l, r;
    cin>>l>>r;
    string numL=to_string(l), numR=to_string(r);
    array<string, 10> arr={"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    map<char, int> mark;
    queue<string> q;
    q.push("0");
    q.push("1");
    q.push("2");
    q.push("3");
    q.push("4");
    q.push("5");
    q.push("6");
    q.push("7");
    q.push("8");
    q.push("9");
    
    for(int i=0; i<=r; i++){
        if(i==0 && l==0){
            mark['0']=1;
            q.pop();
        }else if(i==0 && l!=0) q.pop();
        else if(i<l && i!=0){
            for(int i=0; i<arr.size(); i++) {
                if(stol(q.front()+arr[i])>stol(numR)) break;
                q.push(q.front()+arr[i]);
            }
            q.pop();
        }else if(i>=l){
            string str = q.front();
            for(char c:str) mark[c]++;
            for(int i=0; i<arr.size(); i++) {
                if(stol(q.front()+arr[i])>stol(numR)) break;
                q.push(q.front()+arr[i]);

            }
            q.pop();
        }
    }
    for(int i='0'; i<='9'; i++){
        cout<<mark[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



