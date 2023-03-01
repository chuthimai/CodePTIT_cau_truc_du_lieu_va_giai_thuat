//
//  DSA04005_day_xau_Fibonaci.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 28/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

array<long long, 93> Fib_arr;

void strFib(int n, long long pos){
    if(n==1) cout<<"A"<<endl;
    else if(n==2) cout<<"B"<<endl;
    else{
        if(pos<=Fib_arr[n-2]) strFib(n-2, pos);
        else strFib(n-1, pos-Fib_arr[n-2]);
    }
}

void oneTime(){
    Fib_arr={0,1,1};
    int n;
    long long pos;
    cin>>n>>pos;
    for(int i=3; i<n-1; i++){
        Fib_arr[i] = Fib_arr[i-1] + Fib_arr[i-2];
    }
    strFib(n, pos);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
//A
//B
//AB
//BAB
//ABBAB
//BABABBAB
//ABBABBABABBAB
//BABABBABABBABBABABBAB
//ABBABBABABBABBABABBABABBABBABABBAB
