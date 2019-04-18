
/*
#include<iostream>
#include<string>
#include<cstdio>

  输入一个子天平，返回天平是否平衡，参数w修改为子天平的总重量

#define Max 1000
using namespace std;

bool solve(int &W) {
	int W1, D1, W2, D2;
	bool b1 = true, b2 = true;
	cin >> W1 >> D1 >> W2 >> D2;
	if (!W1)
		b1 = solve(W1);
	if (!W2)
		b2 = solve(W2);
	W = W1 + W2;
	return b1&&b2 && (W1*D1 == W2*D2);
}

int main() {

	int T, W;
	cin >> T;
	while (T--) {
		if (solve(W)) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
		if (T)
			cout << endl;
	}
	return 0;
}*/
