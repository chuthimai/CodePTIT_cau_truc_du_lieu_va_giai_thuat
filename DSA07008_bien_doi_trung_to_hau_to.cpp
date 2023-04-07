//
//  DSA07008_bien_doi_trung_to_hau_to.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 06/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    map<char, int> level={{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}};
    stack<char> dau;
    string bieuThuc;
    cin>>bieuThuc;
    for(int i=0; i<bieuThuc.length(); i++){
        if(bieuThuc[i]=='(') dau.push(bieuThuc[i]);
        else if((bieuThuc[i]>='a' && bieuThuc[i]<='z') || (bieuThuc[i]>='A' && bieuThuc[i]<='Z')) cout<<bieuThuc[i];
        else if(bieuThuc[i]==')'){
            while (dau.top()!='(') {
                cout<<dau.top();
                dau.pop();
            }
            dau.pop();
        }
        else{
            if(dau.empty()) dau.push(bieuThuc[i]);
            else{
                while (!dau.empty() && level[bieuThuc[i]]<=level[dau.top()]) {
                    cout<<dau.top();
                    dau.pop();
                }
                dau.push(bieuThuc[i]);
            }
        }
    }
    while (!dau.empty()) {
        if(dau.top()=='(') dau.pop();
        else{
            cout<<dau.top();
            dau.pop();
        }
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


