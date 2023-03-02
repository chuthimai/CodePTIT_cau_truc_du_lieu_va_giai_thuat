//
//  DSA02003_di_chuyen_trong_me_cung.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 02/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n, x, y;
array<array<bool, 25>, 25> arr;
vector<char> res;
bool OK;
string str="DR";


void print_res(vector<char> arr){
    for(char i:arr) cout<<i;
    cout<<" ";
}

void deQuy(int i){
    for(char j:str){
        if(j=='D' and arr[x+1][y]==1) {
            res.push_back(j);
            x++;
        }else if(j=='R' and arr[x][y+1]==1) {
            res.push_back(j);
            y++;
        }else if(j=='D' and arr[x+1][y]==0) continue;
        else if (j=='R' and arr[x][y+1]==0) continue;
        if(res.size()==2*n-2) {
            print_res(res);
            OK=1;
        }else deQuy(i+1);
        if(j=='D' and arr[x][y]==1) {
            res.pop_back();
            x--;
        }else if(j=='R' and arr[x][y]==1) {
            res.pop_back();
            y--;
        }
    }
}


void oneTime(){
    x=0; y=0;
    for(int i=0; i<25; i++) arr[i].fill(0);
    res.clear();
    OK=0;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>arr[i][j];
    }
    if(arr[0][0]!=0) deQuy(0);
    if(OK==0) cout<<"-1"<<endl;
    else cout<<endl;
}


int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}









