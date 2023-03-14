////
////  dem_ky_tu_B.cpp
////  CodePTIT_cau_truc_du_lieu_va_giai_thuat
////
////  Created by Chu Mai on 02/03/2023.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//
//array<int, 100> Fib, dem;
//int n, k;
//
//int strFib(int i, int k){
//    if(i==0) {
//        dem[0]=0;
//    }
//    else if(i==1) {
//        dem[1]=1;
//    }else if(Fib[i]>=k) {
//        dem[i]=strFib(i, k);
//    }
//    else {
//        dem[i]=strFib(i-1, k-Fib[i])+dem[i];
//        
//    }
//    return dem[i];
//}
//
//
//void oneTime(){
//    cin>>n>>k;
//    dem.fill(0);
//    Fib = {1, 1};
//    for(int i=2; i<=45; i++){
//        Fib[i]=Fib[i-1]+Fib[i-2];
//    }
//    
//    cout<<strFib(n, k)<<endl;
//    
//}
//
//int main(){
//    int times; cin>>times;
//    for(int i=0; i<times; i++) oneTime();
//}
//
//
//
//
//
//
//
//
//
