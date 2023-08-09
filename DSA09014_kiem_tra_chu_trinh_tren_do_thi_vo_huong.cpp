////
////  DSA09014_kiem_tra_chu_trinh_tren_do_thi_vo_huong.cpp
////  CodePTIT_cau_truc_du_lieu_va_giai_thuat
////
////  Created by Chu Mai on 20/04/2023.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//
//vector<pair<int, int>> edge;
//
//int parent[100005];
//int n, m;
//
//void init(){
//    for(int i=1; i<=n; i++){
//        parent[i] = i;
//    }
//}
//
//int Find(int u){
//    if(u!=parent[u]) parent[u] = Find(parent[u]);
//    return parent[u];
//}
//
//bool Union(int u, int v){
//    int a = Find(u), b = Find(v); //Tìm mã tập hợp của u và v
//    if(a==b) return 1; // Nếu đang ở cùng tập hợp thì ko cần hợp 2 tập vào nữa
//    parent[b] = a;
//    return 0;
//
//}
//
//int main(){
//    int t, u, v;
//    cin>>t;
//    while(t--){
//        cin>>n>>m;
//        init();
//
//        while(m--){
//            cin>>u>>v;
//            pair<int, int> c;
//            c.first=u; c.second=v;
//            edge.push_back(c);
//        }
//
//        bool check = 0;
//        for(auto e: edge){
//            check = Union(e.first, e.second);
//            if(check) break;
//        }
//
//        if(check) cout<<"YES\n";
//        else cout<<"NO\n";
//    }
//}
//
