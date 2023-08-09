//
//  kiem_tra_cay_nhi_phan_du.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 07/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


class Node{
public:
    int val;
    Node *Left;
    Node *Right;
    Node(int x){
        val = x;
        Left = NULL;
        Right = NULL;
    }
};

void insertNode(Node* &head,int val_p, int val_c, char direction){
    if(head == NULL) return;
    if(head->val == val_p){
        if(direction=='L') {
            head->Left = new Node(val_c);
        }
        if(direction=='R'){
            head->Right = new Node(val_c);
        }
    }else{
        insertNode(head->Left, val_p, val_c, direction);
        insertNode(head->Right, val_p, val_c, direction);
    }
    
}

bool check(Node* node){
    if(node->Left!=NULL && node->Right!=NULL) return 1;
    else if(node->Left==NULL && node->Right==NULL) return 1;
    else return 0;
}

void oneTime(){
    int n; cin>>n;
    Node* tree = new Node(0);
    queue<Node*> q;
    for(int i=0; i<n; i++){
        int vp, vc; cin>>vp>>vc;
        char d; cin>>d;
        if(i==0) tree->val = vp;
        insertNode(tree,vp,vc,d);
    }
    bool is_full = true;
    q.push(tree);
    while (!q.empty()) {
        if(q.front()->Left!=NULL) q.push(q.front()->Left);
        if(q.front()->Right!=NULL) q.push(q.front()->Right);
        is_full = check(q.front());
        if(!is_full) break;
        q.pop();
    }
    if(is_full) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



