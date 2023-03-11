//
//  DSA02022_ngay_dac_biet.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 10/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

array<string, 3> day={"02", "20", "22"};
array<string, 1> month={"02"};
array<string, 8> year={"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};

int main(){
    for(string d:day){
        for(string m:month){
            for(string y:year){
                cout<<d<<'/'<<m<<'/'<<y<<endl;
            }
        }
    }
}


