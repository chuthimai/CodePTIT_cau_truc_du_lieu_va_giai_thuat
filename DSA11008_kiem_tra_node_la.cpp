//
//  DSA11008_kiem_tra_node_la.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 10/06/2023.
//

#include <bits/stdc++.h>
using namespace std;

int l; bool res;
struct Node{
    int val;
    int level;
    Node* left;
    Node* right;
    Node(int n){
        val = n;
        level = 0;
        left = NULL;
        right = NULL;
    }
};

Node* searchNode(Node* head, int v){
    if(head->val==v) return head;
    else{
        Node* node=NULL;
        if(head->left!=NULL)  node = searchNode(head->left, v);
        if(node==NULL and head->right!=NULL) node = searchNode(head->right, v);
        return node;
    }
}

void insertNode(Node* &head, int u, int v, char x){
    Node* node = searchNode(head, u);
    if(x=='L') {
        node->left = new Node(v);
        node->left->level = node->level + 1;
        if (node->left->level>l) l = node->left->level;
    }else{
        node->right = new Node(v);
        node->right->level = node->level + 1;
        if (node->right->level>l) l = node->right->level;
    }
}

void Solution(Node* head){
    if(head->left!=NULL) Solution(head->left);
    if(head->right!=NULL) Solution(head->right);
    if(head->left==NULL && head->right==NULL){
        if(head->level!=l) res = res and false;
        else res = res and true;
    }
}

void oneTime(){
    l = 0; res = true;
    int n; cin>>n;
    Node* tree=NULL;
    while(n--){
        int u, v; char x;
        cin>>u>>v>>x;
        if(tree==NULL) tree = new Node(u);
        insertNode(tree, u, v, x);
    }
    Solution(tree);
    cout<<res<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
