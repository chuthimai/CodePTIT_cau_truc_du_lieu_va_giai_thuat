////
////  dem_so_vat_can_tren_me_cung.cpp
////  CodePTIT_cau_truc_du_lieu_va_giai_thuat
////
////  Created by Chu Mai on 09/04/2023.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//
//map<int, vector<int>> Ke;
//map<int, bool> visited;
//int count_w = 0;
//
//void DFS(int u){
//    for(int i:Ke[u]){
//        if(visited[i]==0){
//            visited[i]=1;
//            DFS(i);
//        }
//    }
//}
//bool check_v(int n){
//    int c=0;
//    for(int i=0; i<n; i++){
//        if(visited[i]) c++;
//    }
//    if(c==n) return 1;
//    else return 0;
//}
//
//int main(){
//    int n, m;
//    cin>>n>>m;
//    int mx = 0;
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++) {
//            char c;
//            cin>>c;
//            if (c=='#') {
//                Ke[i].push_back(j);
//                if(i>mx) mx=i;
////                Ke[j].push_back(i);
//            }
//        }
//    }
//
//    while(!check_v(mx)){
//        for(int u=0; u<n; u++){
//            if(visited[u]==0){
//                DFS(u);
//                count_w++;
//                break;
//            }
//        }
//    }
//    cout<<count_w<<endl;
//}
