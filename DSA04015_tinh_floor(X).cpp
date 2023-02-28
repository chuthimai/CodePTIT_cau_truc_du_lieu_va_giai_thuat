//
//  DSA04015_tinh_floor(X).cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 26/02/2023.
//

#include <bits/stdc++.h>
#define ll long long
using namespace std;


vector<double> arr;
ll n, position;
double X;

void oneTime(){
    arr.clear();
    position=-1;
    cin>>n>>X;
    for(int i=1; i<=n; i++){
        ll a; cin>>a;
        if(a<=X) position=i;
    }
    
    printf("%lli\n", position);
    
}

int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}







