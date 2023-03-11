//
//  DSA02030_liet_ke_xau_ky_tu.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 11/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

char end_character;
int k;
string str, res;

void deQuy(int i){
    for(char j:str){
        if(res.length()==0 ||(j>=res[res.length()-1])){
            res.push_back(j);
        }else continue;
        if(res.length()==k) cout<<res<<endl;
        else deQuy(i+1);
        
        res.pop_back();
    }
}

int main(){
    cin>>end_character>>k;
    char sub_char='A';
    while(sub_char!=end_character+1){
        str.push_back(sub_char);
        sub_char+=1;
    }
    deQuy(0);
    
}














