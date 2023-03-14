//
//  DSA09024_BFS_tren_do_thi_co_huong.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 14/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> dsKe;
map<int, bool> visited;

void BFS(int u){
    queue<int> q;
    visited[u]=1;
    q.push(u);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        cout<<v<<" ";
        for(int i:dsKe[v]){
            if(visited[i]==0){
                q.push(i);
                visited[i]=1;
            }
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
    BFS(start);
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}




