/*
#include<iostream>
#include<string>
#include<cstdio>

#define Max 1000

using namespace std;

int sum[Max];

/*
   输入并统计一棵子树，树根水平位置为 p

void build(int p) {
	int v;
	cin >> v;
	if (v == -1)
		return;
	sum[p] += v;
	build(p - 1);
	build(p + 1);
}

// 边读入边统计
bool init() {
	int v;
	cin >> v;
	if (v == -1)
		return false;
	memset(sum, 0, sizeof(sum));
	int pos = Max / 2;
	sum[pos ] = v;
	build(pos - 1);
	build(pos + 1);
}


int main() {
	int kase = 0;
	while (init()) {
		int p = 0;
		while (sum[p] == 0)
			p++;//找最左边的叶子
		cout << " Case "<<++kase << " :\n" << sum[p++];//因为要避免行末多余空格
		while (sum[p] != 0)
			cout << " " << sum[p++];
		cout << "\n\n";
	}

	return 0;
}*/