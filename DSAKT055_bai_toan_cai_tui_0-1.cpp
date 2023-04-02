//
//  DSAKT055_bai_toan_cai_tui_0-1.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 01/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n, limited_volume;
    cin>>n>>limited_volume;
    int volume[1005], value[1005];
    for(int i=1; i<=n; i++) cin>>volume[i];
    for(int i=1; i<=n; i++) cin>>value[i];
    
    int table[1005][1005];
    for(int i=0; i<=limited_volume; i++) table[0][i]=0;
    
    for(int i=1; i<=n; i++){
        for(int j=0; j<=limited_volume; j++){
            if(volume[i]<=j){
                table[i][j] = max(table[i-1][j], table[i-1][j-volume[i]] + value[i]);
            }else table[i][j]=table[i-1][j];
        }
    }
    
//    in ra bảng phương án
//    for(int i=0; i<=n; i++){
//        for(int j=0; j<=limited_volume; j++) cout<<table[i][j]<<' ';
//        cout<<endl;
//    }
    
    cout<<table[n][limited_volume]<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


