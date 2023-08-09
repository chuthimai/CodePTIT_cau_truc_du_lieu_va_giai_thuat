////
////  tong_gia_tri_lon_nhat.cpp
////  CodePTIT_cau_truc_du_lieu_va_giai_thuat
////
////  Created by Chu Mai on 09/04/2023.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int table[5005][5005];
//
//int main(){
//    int n, m;
//    cin>>n>>m;
//    int x[5005], y[5005];
//    for(int i=1; i<=n; i++){
//        cin>>x[i]>>y[i];
//    }
//    for(int i=0; i<=m; i++) table[0][i]=0;
//
//    for(int i=1; i<=n; i++){
//        for(int j=0; j<=m; j++){
//            if(x[i]<=j){
//                table[i][j]=max(table[i-1][j], table[i-1][j-x[i]]+y[i]);
//            }else table[i][j]=table[i-1][j];
//        }
//    }
//
////    for(int i=0; i<=n; i++){
////        for(int j=0; j<=m; j++) cout<<table[i][j]<<" ";
////        cout<<endl;
////    }
//
//    cout<<table[n][m]<<endl;
//}
//
//
//
