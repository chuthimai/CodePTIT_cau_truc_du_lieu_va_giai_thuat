//
//  DSA04004_gap_doi_day_so.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 28/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


void val(int n, long long pos){
    long long mid = (pow(2, n)-1)/2+1;
    if(pos==mid){
        cout<<n<<endl;
    }else{
        long long mod = pos % mid;
        val(n-1, mod);
    }
}

void oneTime(){
    int n;
    long long k;
    cin>>n>>k;
    val(n, k);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}





