//
//  DSA01009_xau_AB_dac_biet.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 02/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n,k;
vector<char> res;
vector<vector<char>> save;
string str="AB";

void print_res(vector<char> arr){
    for(char i:arr) cout<<i;
    cout<<endl;
}

bool check(vector<char> arr){
    int count_A=0;
    int len=arr.size();
    for(int i=k-1; i<len; i++){
        bool checkA=true;
        for(int j=i-k+1; j<=i; j++){
            checkA = checkA && (arr[j]=='A');
            if(checkA==0) break;
        }
        if(checkA==1) count_A++;
        if(count_A>1) break;
    }
    if(count_A==1 || (count_A==0 && arr.size()<n)) return true;
    else return false;
}

void deQuy(int i){
    for(char j:str){
        res.push_back(j);
        if(check(res)==true){
            if(res.size()==n) save.push_back(res);
            else deQuy(i+1);
            res.pop_back();
        }else{
            res.pop_back();
            continue;
        }
    }
}


int main(){
    cin>>n>>k;
    deQuy(0);
    cout<<save.size()<<endl;
    for(int i=0; i<save.size(); i++) print_res(save[i]);
}





