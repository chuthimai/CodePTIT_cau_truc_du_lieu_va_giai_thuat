//
//  DSA09032_ket_ban.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 20/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

int parent[100005];
map<int, int> vertex;
int n, m;

void init(){
    for(int i=1; i<=n; i++){
        parent[i] = i;
    }
}

int Find(int u){
    if(u!=parent[u]) parent[u] = Find(parent[u]);
    return parent[u];
}

void Union(int u, int v){
    int a = Find(u), b = Find(v); //Tìm mã tập hợp của u và v
    if(a==b) return; // Nếu đang ở cùng tập hợp thì ko cần hợp 2 tập vào nữa
    parent[b] = a;
    
}

int main(){
    int t, u, v, i;
    cin>>t;
    while(t--){
        vertex.clear();
        cin>>n>>m;
        init();
        while(m--){
            cin>>u>>v;
            Union(u, v);
        }
        
        for(i=1; i<=n; i++) vertex[Find(i)]++;
        int res = 0;
        for(auto i:vertex){
            res = max(res, i.second);
        }
        cout<<res<<endl;
    }
}









