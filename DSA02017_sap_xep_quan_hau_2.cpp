//
//  DSA02017_sap_xep_quan_hau_2.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 26/02/2023.
//

#include <bits/stdc++.h>
using namespace std;


array<array<int, 10>, 10> arr;
array<bool, 20> cot, xuoi, nguoc;
int n, m, sum;


void hang_cua_hau(int i){
    for(int j=1; j<=n; j++){
        if(cot[j] && xuoi[i-j+n] && nguoc[i+j-1]){
            sum += arr[i][j];
            cot[j] = false;
            xuoi[i-j+n] = false;
            nguoc[i+j-1] = false;
            if(i==n) {
                if(sum>m) m = sum;
            }
            else hang_cua_hau(i+1);
            
            cot[j] = true;
            xuoi[i-j+n] = true;
            nguoc[i+j-1] = true;
            sum -= arr[i][j];
        }
    }
}

void oneTime(){
    cot.fill(true);
    xuoi.fill(true);
    nguoc.fill(true);
    m = 0;
    sum = 0;
    n = 8;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin>>arr[i][j];
    }
    hang_cua_hau(1);
    cout<<m<<endl;
    
}

int main(){
    int times; cin>>times;
    for(int i=0; i<times; i++) oneTime();
}



