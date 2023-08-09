//
//  duyet_cay_nhi_phan_tim_kiem.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 23/05/2023.
//

#include <bits/stdc++.h>
using namespace std;


struct Node{
    int val;
    Node* Left;
    Node* Right;
    Node(int v){
        val = v;
        Left = NULL;
        Right = NULL;
    }
};

void add_Node(Node* &head, int v){
    if(v<head->val){
        if(head->Left==NULL) head->Left = new Node(v);
        else add_Node(head->Left, v);
    }else if (v>head->val){
        if(head->Right==NULL) head->Right = new Node(v);
        else add_Node(head->Right, v);
    }
    
}

void preorder(Node* head){
    if(head!=NULL){
        cout<<head->val<<" ";
        preorder(head->Left);
        preorder(head->Right);
    }
}

void oneTime(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    Node* node = new Node(arr[0]);
    for(int i=1; i<n; i++){
        add_Node(node, arr[i]);
    }
    preorder(node);
    cout<<endl;
}


int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++) oneTime();
}

