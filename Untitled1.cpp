#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node* right;
	node* left;
	node(int x){
		value=x;
		right=NULL;
		left=NULL;
	}
};

void insert(node* &head, int parent, int value, char pos){
	if(head==NULL) return;
	if(head->value==parent){
		if(pos=='L') head->left=new node(value);
		else head->right=new node(value);
	}else{
		insert(head->left, parent, value, pos);
		insert(head->right, parent, value, pos);
	}
}

void print(node* head){
	queue<node*> q;
	q.push(head);
	while(!q.empty()){
		node* tmp=q.front(); q.pop();
		cout << tmp->value << " ";
		if(tmp->left!=NULL) q.push(tmp->left);
		if(tmp->right!=NULL) q.push(tmp->right);
	}
	cout << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a, b; char c;
		node* p=NULL;
		while(n--){
			cin >> a >> b >> c;
			if(p==NULL) p=new node(a);
			insert(p, a, b, c);
		}
		print(p);
	}
	return 0;
}
