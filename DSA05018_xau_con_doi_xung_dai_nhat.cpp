//
//  DSA05018_xau_con_doi_xung_dai_nhat.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 30/03/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    string str;
    cin>>str;
    int len = str.length();
    array<array<bool, 1001>, 1001> F;

    for(int i=0; i<len; i++) F[i][i]=1;
    for(int i=len-2; i>=0; i--){
        for(int j=i+1; j<len; j++){
            if(str[i]==str[j]){
                if(abs(i-j)==1) F[i][j]=1;
                else F[i][j] = F[i+1][j-1];
            }else{
                F[i][j] = 0;
            }
        }
    }

//    Bang phuong an
//    for(int i=0; i<len; i++){
//        for(int j=0; j<len; j++) cout<<F[i][j]<<" ";
//        cout<<endl;
//    }

    int res=0;
    for(int i=0; i<len; i++){
        for(int j=i; j<len; j++){
            if(F[i][j]==1) res = max(res, j-i+1);
        }
    }
    cout<<res<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
