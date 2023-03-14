//
//  DSA07001_ngan_xep.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/03/2023.
//

#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> s;
    do{
        string lenh;
        cin>>lenh;
        if(lenh=="push"){
            int n; cin>>n;
            s.push_back(n);
        }else if(lenh=="pop") s.pop_back();
        else if (lenh=="show"){
            for(auto i:s) cout<<i<<" ";
            cout<<endl;
        }
    }while(!s.empty());
    cout<<"empty"<<endl;
}
