//
//  chia_cat_do_thi.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 07/05/2023.
//

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> edge, res;


int parent[100005];
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

void oneTime(){
    int u, v;
    cin>>n>>m;
    res.clear();
    pair<int, int> p;
    p.first = 0;
    p.second = 1;
    res.push_back(p);
    init();

    while(m--){
        cin>>u>>v;
        pair<int, int> c;
        c.first=u; c.second=v;
        edge.push_back(c);
    }

    for(int i=0; i<=n; i++){
        init();
        for(auto e: edge){
            if(e.first != i && e.second != i) Union(e.first, e.second);
        }
        int count = 0;
        for(int j=1; j<=n; j++){
            if(j==i) continue;
            else {
                if(parent[j]==j) count++;
            }
        }
        if(res[0].second<count){
            res.clear();
            pair<int , int> p;
            p.first = i;
            p.second = count;
            res.push_back(p);
        }else if (res[0].second==count and count!=1){
            pair<int , int> p;
            p.first = i;
            p.second = count;
            res.push_back(p);
        }
    }
//    for(auto i:res) cout<<i.first<<" ";
    cout<<res[0].first;
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
