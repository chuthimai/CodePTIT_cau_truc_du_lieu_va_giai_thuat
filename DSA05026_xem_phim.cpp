//
//  DSA05026_xem_phim.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 19/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

int table[105][25005];

int main(){
    int C, N;
    cin>>C>>N;
    int w[105];
    for(int i=1; i<=N; i++) cin>>w[i];
    
    for(int i=0; i<=N; i++) table[i][0]=0;
    for(int i=0; i<=C; i++) table[0][i]=0;
    
    for(int i=1; i<=N; i++){
        for(int j=1; j<=C; j++){
            if(j>w[i]) table[i][j] = max(table[i-1][j], table[i-1][j-w[i]]+w[i]);
            else table[i][j] = table[i-1][j];
        }
    }
    cout<<table[N][C]<<endl;
}





