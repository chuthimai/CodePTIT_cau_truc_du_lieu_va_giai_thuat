//
//  quan_hau.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 23/02/2023.
//

#include <bits/stdc++.h>
using namespace std;

array<bool, 20> cot, xuoi, nguoc;
int dem, n;


void hang_cua_hau(int i){
    for(int j=1; j<=n; j++){
        if(cot[j] && xuoi[i-j+n] && nguoc[i+j-1]){
            cot[j] = false;
            xuoi[i-j+n] = false;
            nguoc[i+j-1] = false;
            if(i==n) dem++;
            else hang_cua_hau(i+1);
            
            cot[j] = true;
            xuoi[i-j+n] = true;
            nguoc[i+j-1] = true;
        }
    }
}

void oneTime(){
    cot.fill(true);
    xuoi.fill(true);
    nguoc.fill(true);
    dem = 0;
    
    cin>>n;
    hang_cua_hau(1);
    cout<<dem<<endl;
    
}

int main(){
    int times; cin>>times;
    for(int i=0; i<times; i++) oneTime();
}




