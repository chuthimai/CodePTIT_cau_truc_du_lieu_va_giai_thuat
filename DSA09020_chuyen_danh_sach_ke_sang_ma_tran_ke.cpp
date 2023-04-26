//
//  DSA09020_chuyen_danh_sach_ke_sang_ma_tran_ke.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 26/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> dsKe;
bool matrix[1001][1001];

void tok(string s, int n){
    s = s + " ";
    string x;
    for(int i=0; i<s.length(); i++){
        if(s[i]==' ' && x!=""){
            dsKe[n].push_back(stoi(x));
            x="";
        }else x.push_back(s[i]);
    }
}


int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1; i<=n; i++){
        string s;
        getline(cin, s);
        tok(s, i);
    }
    
    for(int i=1; i<=n; i++){
        for(int x:dsKe[i]) matrix[i][x] = 1;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}









