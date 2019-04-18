/*
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<vector>
#define Max 1000

using namespace std;

struct  Node {

	int value;
	Node*left;
	Node*right;
	bool have_value;
	Node(Node*le = NULL, Node*ri = NULL) :have_value(false) {
		left = le;
		right = ri;
	}
};

Node *root;
char s[Max];
bool failed = false;


void addnode(int v, char *s) {
	int n = strlen(s);
	Node*u = root;//�Ӹ��ڵ㿪ʼ������
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			if (u->left == NULL)
				u->left = new Node();
			u = u->left;
		}
		else if (s[i] == 'R') {
			if (u->right == NULL)
				u->right = new Node();
			u = u->right;
		}
		if (u->have_value)
			failed = true;//�Ѿ�����ֵ��������������
		u->value = v;
		u->have_value = true;
	}

}
bool read_input() {

	root = new Node();//�������ڵ�
	while (1) {
		if (scanf_s("%s", s) != 1)
			return false;
		if (!strcmp(s, "()"))
			break;
		int v;
		sscanf_s(&s[1], "%d", &v);//������ֵ
		addnode(v, strchr(s, ',') + 1);
	}
	return true;

}
//�����˳�������������˴�ʹ��һ�����������������񣬳�ʼʱֻ��һ�����ڵ㣬Ȼ��ÿ��ȡ��һ����㣬�Ͱ��������ҽڵ�Ž����С�
bool bfs(vector<int>&ans) {
	queue<Node*>q;
	ans.clear();
	q.push(root);
	while (!q.empty()) {
		Node* u = q.front();
		q.pop();
		if (!u->have_value)
			return false;
		ans.push_back(u->value);
		if (u->left != NULL)
			q.push(u->left);
		if (u->right != NULL)
			q.push(u->right);
	}
	return true;
}
void remove_tree(Node* u) {
	if (u == NULL)
		return;
	remove_tree(u->left);
	remove_tree(u->right);
	delete u;
}

string str;
int x;

int main() {
	read_input();
	vector<int> ans;
	bfs(ans);
	remove_tree(root);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "  ";
	}
	return 0;
}*/