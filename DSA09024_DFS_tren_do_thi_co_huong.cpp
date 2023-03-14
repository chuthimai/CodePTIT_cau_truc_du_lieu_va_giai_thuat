//
//  DSA09024_DFS_tren_do_thi_co_huong.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> dsKe;
map<int, bool> visited;

void DFS(int u){
    cout<<u<<' ';
    visited[u]=1;
    for(int i:dsKe[u]){
        if(visited[i]==0){
            DFS(i);
        }
    }
}

void oneTime(){
    dsKe.clear();
    visited.clear();
    int v, e, start;
    cin>>v>>e>>start;
    
    for(int i=0; i<e; i++){
        int a, b;
        cin>>a>>b;
        dsKe[a].push_back(b);
    }
    DFS(start);
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



