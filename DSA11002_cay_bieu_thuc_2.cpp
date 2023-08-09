////
////  DSA11002_cay_bieu_thuc_2.cpp
////  CodePTIT_cau_truc_du_lieu_va_giai_thuat
////
////  Created by Chu Mai on 02/05/2023.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//
//
//struct Node{
//    string val;
//    Node* Left;
//    Node* Right;
//    Node(string x){
//        val = x;
//        Left = NULL;
//        Right = NULL;
//    }
//};
//
//string itoa(int num){
//    bool negative = false;
//    if(num<0) negative = true;
//    num = abs(num);
//    string s = "";
//    while(num){
//        s.push_back(num%10+'0');
//        num /= 10;
//    }
//    reverse(s.begin(), s.end());
//    if(negative) s = "-" + s;
//    return s;
//}
//
//int stoi_with_Z(string num){
//    bool negative = false;
//    if(num[0] == '-') negative = true;
//    if(negative) num.erase(num.begin(), num.begin()+1);
//    if(negative) return -stoi(num);
//    else return stoi(num);
//}
//
//bool isnumber(char c){
//    if(c>='0' and c<='9') return 1;
//    else return 0;
//}
//
//bool insertNode(Node* &head, string v){
//    if(head->Left==NULL){
//        head->Left = new Node(v);
//        return 1;
//    }else if (head->Right==NULL){
//        head->Right = new Node(v);
//        return 1;
//    }else{
//        bool check = 0;
//        if(!isnumber(head->Left->val[0])) check = insertNode(head->Left, v);
//        if(check == 0 && !isnumber(head->Right->val[0])) check = insertNode(head->Right, v);
//        return check;
//    }
//}
//
//Node* LRN(Node* &node){
//    if (node != NULL){
//        if(node->val == "+"){
//            node->val = itoa(stoi_with_Z(LRN(node->Left)->val) + stoi(LRN(node->Right)->val));
//        }else if (node->val == "-"){
//            node->val = itoa(stoi_with_Z(LRN(node->Left)->val) - stoi(LRN(node->Right)->val));
//        }else if (node->val == "*"){
//            node->val = itoa(stoi_with_Z(LRN(node->Left)->val) * stoi(LRN(node->Right)->val));
//        }else if (node->val == "/"){
//            node->val = itoa(stoi_with_Z(LRN(node->Left)->val) / stoi(LRN(node->Right)->val));
//        }
//    }
//    return node;
//}
//
//void oneTime(){
//    int n; cin>>n;
//    string x;
//    Node* tree = new Node("");
//    for(int i=0; i<n; i++){
//        cin>>x;
//        if(i==0){
//            tree->val=x;
//            continue;
//        }
//        insertNode(tree, x);
//    }
//    cout<<LRN(tree)->val<<endl;
//    tree = NULL;
//}
//
//int main(){
//    int n; cin>>n;
//    for(int i=0; i<n; i++) oneTime();
//}
//
//
//
//
//
