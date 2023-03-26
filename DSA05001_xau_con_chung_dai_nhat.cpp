//
//  DSA05001_xau_con_chung_dai_nhat.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 26/03/2023.
//

#include <bits/stdc++.h>
using namespace std;
array<array<int, 1001>, 1001> mark;

void oneTime(){
    for(array<int, 1001> i: mark) i.fill(0);
    string X, Y;
    cin>>X>>Y;
    for(int i=1; i<X.length()+1; i++){
        for(int j=1; j<Y.length()+1; j++){
            if(X[i-1]==Y[j-1]) mark[i][j] = mark[i-1][j-1]+1;
            else mark[i][j]=max(mark[i-1][j], mark[i][j-1]);
        }
    }
    cout<<mark[X.length()][Y.length()]<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}









