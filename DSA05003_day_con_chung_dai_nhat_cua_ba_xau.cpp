//
//  DSA05003_day_con_chung_dai_nhat_cua_ba_xau.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 26/03/2023.
//

#include <bits/stdc++.h>
using namespace std;
array<array<array<int, 101>, 101>, 101> mark;

void oneTime(){
    for(array<array<int, 101>, 101> i: mark){
        for(array<int, 101> j:i) j.fill(0);
    }
    string X, Y, Z;
    int a,b,c;
    cin>>a>>b>>c;
    cin>>X>>Y>>Z;
    for(int i=1; i<a+1; i++){
        for(int j=1; j<b+1; j++){
            for(int k=1; k<c+1; k++){
                if(X[i-1]==Y[j-1] && X[i-1]==Z[k-1]) mark[i][j][k] = mark[i-1][j-1][k-1]+1;
                else{
                    mark[i][j][k] = max(mark[i-1][j-1][k], mark[i][j-1][k-1]);
                    mark[i][j][k] = max(mark[i][j][k], mark[i-1][j][k-1]);
                    mark[i][j][k] = max(mark[i][j][k], mark[i][j-1][k]);
                    mark[i][j][k] = max(mark[i][j][k], mark[i-1][j][k]);
                    mark[i][j][k] = max(mark[i][j][k], mark[i-1][j][k]);
                    mark[i][j][k] = max(mark[i][j][k], mark[i][j-1][k]);
                    mark[i][j][k] = max(mark[i][j][k], mark[i][j][k-1]);
                }
                
            }
        }
    }
    cout<<mark[X.length()][Y.length()][Z.length()]<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}








