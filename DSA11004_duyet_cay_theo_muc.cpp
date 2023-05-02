//
//  DSA11004_duyet_cay_theo_muc.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 27/04/2023.
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

void printNode(Node* node){
    if(node->Left!=NULL) cout<<node->Left->val<<" ";
    if(node->Right!=NULL) cout<<node->Right->val<<" ";
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
    bool loop = true;
    q.push(tree);
    cout<<tree->val<<" ";
    while (loop) {
        if(q.front()->Left!=NULL) q.push(q.front()->Left);
        if(q.front()->Right!=NULL) q.push(q.front()->Right);
        printNode(q.front());
        q.pop();
        if(q.size()==0) loop = false;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


