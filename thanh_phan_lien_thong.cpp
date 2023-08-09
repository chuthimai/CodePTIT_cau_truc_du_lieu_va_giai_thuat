//
//  thanh_phan_lien_thong.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 13/04/2023.
//

#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> dsKe;
map<int, bool> visited;

void DFS(int u){
//    cout<<u<<' ';
    visited[u]=1;
    for(int i:dsKe[u]){
        if(visited[i]==0){
            DFS(i);
        }
    }
}

int main(){
    dsKe.clear();
    visited.clear();
    int v, e, start;
    cin>>v>>e>>start;

    for(int i=0; i<e; i++){
        int a, b;
        cin>>a>>b;
        dsKe[a].push_back(b);
        dsKe[b].push_back(a);
    }
    DFS(start);
    bool have = 0;
    for(int i=1; i<=v; i++){
        if(visited[i]==0) {
            cout<<i<<endl;
            have = 1;
        }
    }
    if(have == 0) cout<<"0\n";
}




