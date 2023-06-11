//
//  DSA02011_may_ATM.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 11/06/2023.
//


#include<bits/stdc++.h>
using namespace std;

int n, s, A[35];
int ok, k, a[35];

void tryy(int i){
    for(int j=a[i-1]+1; j<=n-k+i; j++){
        a[i]=j;
        s-=A[j];
        if(s==0){
            ok=1; return;
        }
        else if(s>0&&i<k) tryy(i+1);
        s+=A[j];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> s;
        for(int i=1; i<=n; i++){
            cin >> A[i];
        }
        
        ok=0; k=1;
        while(!ok&&k<=n){
            tryy(1);
            if(ok) cout << k << "\n";
            ++k;
        }
        if(!ok) cout << "-1\n";
    }
}

