#include <bits/stdc++.h>

using namespace std;

bool fl;

struct node{
	int v;
	node* l, *r;
	node(int _v){
		v = _v;
		l = r = nullptr;
	}
};

void insert(node* root, int v){
	if(v > root->v){
		if(root->r == nullptr)
			root->r = new node(v);
		else
			insert(root->r, v);
	}else{
		if(root->l == nullptr)
			root->l = new node(v);
		else
			insert(root->l, v);
	}
}

void search(node* root, int v){
	if(root->v == v)
		fl = true;
	else if(root->r != nullptr and v > root->v)
		search(root->r, v);
	else if(root->l != nullptr and v < root->v)
		search(root->l, v);
}

void pre(node* root){
	if(fl) cout << ' ';
	fl = true;
	cout << (char)root->v;
	if(root->l != nullptr)
		pre(root->l);
	if(root->r != nullptr)
		pre(root->r);	
}

void inf(node* root){
	if(root->l != nullptr)
		inf(root->l);
	if(fl) cout << ' ';
	fl = true;
	cout << (char)root->v;
	if(root->r != nullptr)
		inf(root->r);
}

void pos(node* root){
	if(root->l != nullptr)
		pos(root->l);
	if(root->r != nullptr)
		pos(root->r);
	if(fl) cout << ' ';
	fl = true;
	cout << (char)root->v;
}

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s;
	node* root = nullptr;
	while(getline(cin, s)){
		fl = false;
		if(s == "INFIXA"){
			inf(root);
			cout << '\n';
		}else if(s == "PREFIXA"){
			pre(root);
			cout << '\n';
		}else if(s == "POSFIXA"){
			pos(root);
			cout << '\n';
		}else{
			if(s[0] == 'I'){
				if(root == nullptr)
					root = new node(s[2]);
				else
					insert(root, s[2]);
			}else{
				search(root, s[2]);
				cout << s[2] << (fl ? " existe": " nao existe") << '\n';
			}
		}
	}

	return 0;
}
