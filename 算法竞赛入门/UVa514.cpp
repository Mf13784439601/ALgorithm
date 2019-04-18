/*
#include<iostream>
#include<string>
#include<stack>
#include<cstdio>

#define Max 1000

using namespace std;

int n;

int Out[Max];

int main() {

	while (cin >> n&&n != 0) {
		getchar();
		stack<int> s;

		while (cin >> Out[1] && Out[1]) {
			int in = 1;
			int out = 1;
			int flag = 1;
			for (int i = 2; i <= n; i++) {
				cin >> Out[i];
			}



			while (out <= n) {
				if (in == Out[out]) {
					in++;
					out++;
				}
				else if (!s.empty() && s.top() == Out[out]) {
					s.pop();
					out++;
				}
				else if (in <= n) {
					s.push(in++);
				}
				else {
					flag = 0;
					break;
				}
			}
			if (flag) {
				cout << "Yes\n";
			}
			else
				cout << "No\n";
		}
		cout << endl;
	}

	return 0;

}*/