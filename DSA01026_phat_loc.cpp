//
//  DSA01026_phat_loc.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 02/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n;
string str="68";
vector<char> res;

void print_res(vector<char> arr){
    for(char i:arr) cout<<i;
    cout<<endl;
}

bool check(vector<char> arr){
    bool check8 = true, check6 = true;
    int len=arr.size();
    for(int i=1; i<len; i++){
        if(arr[i]=='8' and arr[i-1]=='8'){
            check8=false;
            break;
        }
        if(i>3 and (arr[i]=='6' && arr[i-1]=='6' && arr[i-2]=='6' && arr[i-3]=='6')){
            check6=false;
            break;
        }
    }
    return (check6 and check8);
}

void deQuy(int i){
    for(char j:str){
        if(res.size()==n-1 and j=='8') continue;
        else res.push_back(j);
        if(check(res)){
            if(res.size()==n) print_res(res);
            else deQuy(i+1);
        }
        res.pop_back();
    }
}


int main(){
    cin>>n;
    res.push_back('8');
    deQuy(0);
}









