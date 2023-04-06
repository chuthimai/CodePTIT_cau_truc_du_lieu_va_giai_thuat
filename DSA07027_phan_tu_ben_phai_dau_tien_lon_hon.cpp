//
//  DSA07027_phan_tu_ben_phai_dau_tien_lon_hon.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 06/04/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    int n;
    cin>>n;
    array<long int, 100001> arr;
    for(int i=0; i<n; i++) cin>>arr[i];
    stack<long int> s, res;
    for(int i=n-1; i>=0; i--){
        if(s.empty()){
            res.push(-1);
        }else{
            while(!s.empty() && s.top()<=arr[i]) s.pop();
            if(s.empty()){
                res.push(-1);
            }else res.push(s.top());
        }
        s.push(arr[i]);
    }
    while(!res.empty()) {
        cout<<res.top()<<" ";
        res.pop();
    }
    cout<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}





