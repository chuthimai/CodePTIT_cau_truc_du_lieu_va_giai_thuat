//
//  DSA01012_ma_gray_1.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 06/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

int n;


void print_res(array<bool, 15> arr){
    for(int i=n; i>0; i--) cout<<arr[i];
    cout<<" ";
}

void oneTime(){
    cin>>n;
    vector<long long> exp2;
    for(int i=0; i<=n; i++) exp2.push_back(pow(2, i));
    array<bool, 15> res, end_res;
    end_res.fill(0);
    end_res[n]=1;
    res.fill(0);
    print_res(res);
    
    bool is_on=true;
    long long count=1;
    while (is_on) {
        for(int i=1; i<=n; i++){
            if(count % exp2[i] == exp2[i-1]){
                if(res[i]==0) res[i]=1;
                else res[i]=0;
                break;
            }
        }
        print_res(res);
        count++;
        if(res==end_res) is_on=false;
    }
    
    cout<<endl;
}

int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}










