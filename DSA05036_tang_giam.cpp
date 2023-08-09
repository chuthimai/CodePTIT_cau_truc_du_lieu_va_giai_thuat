//
//  DSA05036_tang_giam.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 11/06/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    array<float, 505> A, B;
    array<int, 505> markA, markB;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A[i]>>B[i];
    }
    
    markA.fill(1);
    markB.fill(1);
    for(int i=1; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(A[j]<A[i]) markA[i] = max(markA[i], markA[j]+1);
        }
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(B[j]>B[i]) markB[i] = max(markB[i], markB[j]+1);
        }
    }
    int res = 0;
    for(int i=0; i<n; i++){
        int c = min(markA[i], markB[i]);
        res = max(res, c);
    }
    cout<<res<<endl;
}


int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
