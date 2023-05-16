//
//  DSA03001_doi_tien.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 16/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


void oneTime(){
    array<int, 15> arr = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int cash; cin>>cash;
    int number_of_cash = 0;
    while (cash > 0) {
        for(int i=0; i<10; i++){
            if (cash >= 1000){
                cash -= 1000;
                number_of_cash++;
                break;
            }else if(cash < arr[i]){
                cash -= arr[i-1];
                number_of_cash++;
                break;
            }
        }
    }
    cout<<number_of_cash<<endl;
    
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



