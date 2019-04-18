/*
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
using namespace std;
const int maxn = 100000 + 5;
int last, cur;//光标位于 cur 号字符的后面
char s[100000];
//int  next[maxn];
int main() {
	int next[100000];
	while (scanf_s("%s", s + 1) == 1) {
		int n = strlen(s + 1);//输入保存在 s[1],s[2],s[3].....中
		last = cur = 0;
		next[0] = 0;
		for (int i = 1; i <= n; i++) {
			char ch = s[i];
			if (ch == '[')
				cur = 0;
			else if (ch == ']')
				cur = last;
			else {
				next[i] = next[cur];
				next[cur] = i;
				if (cur == last)
					last = i;
				cur = i;
			}
		}
		
		for (int i = next[0]; i != 0; i = next[i])
			cout << s[i] << "  ";
		cout << endl;

   }

	return 0;
}*/