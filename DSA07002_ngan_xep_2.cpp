//
//  DSA07002_ngan_xep_2.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 30/03/2023.
//

#include <bits/stdc++.h>
using namespace std;


int main(){
    stack<int> arr;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string str;
        cin>>str;
        if(str=="PUSH"){
            int a;
            cin>>a;
            arr.push(a);
        }else if (str=="POP" && arr.size()>0) arr.pop();
        else if(str=="PRINT"){
            if(arr.size()==0) cout<<"NONE"<<endl;
            else cout<<arr.top()<<endl;
        }
    }
}





