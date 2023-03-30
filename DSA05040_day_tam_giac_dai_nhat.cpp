//
//  DSA05040_day_tam_giac_dai_nhat.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 30/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

array<int, 1000001> arr, inc, decr;

void oneTime(){
    int n;
    cin>>n;
    inc.fill(0);
    decr.fill(0);
    
    for(int i=0; i<n; i++) cin>>arr[i];
    inc[0]=1;
    decr[n-1]=1;
    for(int i=1; i<n; i++){
        if(arr[i-1]<arr[i]) inc[i]=inc[i-1]+1;
        else inc[i]=1;
    }
    for(int i=n-2; i>=0; i--){
        if(arr[i]>arr[i+1]) decr[i]=decr[i+1]+1;
        else decr[i]=1;
    }
    int m=0;
    for(int i=0; i<n; i++){
        m = max(m, inc[i]+decr[i]-1);
    }
    cout<<m<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}










