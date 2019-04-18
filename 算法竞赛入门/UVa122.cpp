/*
#include<iostream>
#include<sstream>
#include<string>
#include<queue>
using namespace std;

struct Node {
	int value;
	Node*left, *right;
	Node() {
		value = -1;
		left = NULL;
		right = NULL;
	}
};
Node *root = new Node();
int flag = 0;
void init(string);
void slove();
void del(Node*);
int main() {
	string str;
	while (cin >> str) {
		if (str != "()")
			init(str);
		else {
			slove();
			del(root);
			root = new Node();
			flag = 0;
		}
	}
}

void init(string str) {
	Node *rt = root;
	for (size_t i = 0; i < str.length(); i++) {
		if (str[i] == 'L') {
			if (rt->left == NULL)
				rt->left = new Node();
			rt = rt->left;
		}
		else if (str[i] == 'R') {
			if (rt->right == NULL)
				rt->right = new Node();
			rt = rt->right;
		}
	}
	if (rt->value != -1)
		flag = 1;
	istringstream ss(&str[1]);
	ss >> rt->value;
}

void slove() {
	if (flag == 1) {
		cout << "not complete" << endl;
		return;
	}
	int ans[300], i = 0;
	queue<Node*>q;
	q.push(root);
	while (!q.empty()) {
		Node *temp = q.front();
		q.pop();
		if (temp->value == -1) {
			cout << "not complete" << endl;
		}
		else {
			ans[i++] = temp->value;
			if (temp->left != NULL) q.push(temp->left);
			if (temp->right != NULL) q.push(temp->right);
		}

	}
	for (int j = 0; j < i; j++) {
		if (j) cout << " ";
		cout << ans[j];
	}
	cout << endl;
}
void del(Node*rt) {
	if (rt != NULL) {
		del(rt->left);
		del(rt->right);
		delete(rt);
	}
}*/