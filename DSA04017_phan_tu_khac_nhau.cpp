//
//  DSA04017_phan_tu_khac_nhau.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 08/03/2023.
//

#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> A, B;
int n;

int binary_search(int first, int last){
    if(first == last) return first;
    else{
        int mid = (first + last)/2;
        if(B[mid] !=  A[mid]){
            return binary_search(first, mid) ;
        }else{
            return binary_search(mid+1, last);
        }
    }
}


void oneTime(){
    A.clear();
    B.clear();
    cin>>n;
    for(int i=0; i<n; i++){
        ll a;
        cin>>a;
        A.push_back(a);
    }
    for(int i=0; i<n-1; i++){
        ll b;
        cin>>b;
        B.push_back(b);
    }
    
    cout<<binary_search(0, n-1)+1<<endl;
}

int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}


