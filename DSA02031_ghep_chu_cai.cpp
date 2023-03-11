//
//  DSA02031_ghep_chu_cai.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 11/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

char end_character;
string str, res;
map<char, bool> mark;

vector<bool> change_binary(string str){
    vector<bool> arr;
    for(char i:str){
        if(i=='A'||i=='E') arr.push_back(1);
        else arr.push_back(0);
    }
    return arr;
}

bool check(vector<bool> arr){
    bool OK=1;
    for(int i=1; i<arr.size()-1; i++){
        if(arr[i]==1 && arr[i-1]==0 && arr[i+1]==0){
            OK=0;
            break;
        }
    }
    return OK;
}


void deQuy(int i){
    for(char j:str){
        if(mark[j]==0){
            mark[j]=1;
            res.push_back(j);
        }else continue;
        if(res.length()==str.length()) {
            if(check(change_binary(res))){
                cout<<res<<endl;
            }
        }
        else deQuy(i+1);
        
        res.pop_back();
        mark[j]=0;
    }
}

int main(){
    cin>>end_character;
    char sub_char='A';
    while(sub_char!=end_character+1){
        str.push_back(sub_char);
        sub_char+=1;
    }
    deQuy(0);
    
}















