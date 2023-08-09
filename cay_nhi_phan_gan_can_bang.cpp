//
//  cay_nhi_phan_gan_can_bang.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 07/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


struct Node{
    int val;
    Node* Left;
    Node* Right;
    Node(int x){
        val = x;
        Left = NULL;
        Right = NULL;
    }
};

Node* insertNode(Node* &head, int v){
    if(head->Left==NULL){
        head->Left = new Node(v);
        return head->Left;
    }else{
        head->Right = new Node(v);
        return head->Right;
    }
}

void inOrder(Node* node){
    if(node != NULL){
        inOrder(node->Left);
        cout<<node->val<<" ";
        inOrder(node->Right);
    }
}

void oneTime(){
    int n; cin>>n;
    queue<Node*> q;
    int x;
    Node* tree = new Node(0);
    for(int i=0; i<n; i++){
        cin>>x;
        if(i==0){
            tree->val=x;
            q.push(tree);
            continue;
        }
        q.push(insertNode(q.front(), x));
        if(q.front()->Left!=NULL && q.front()->Right!=NULL) q.pop();
    }
    inOrder(tree);
    cout<<endl;
    tree = NULL;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}
