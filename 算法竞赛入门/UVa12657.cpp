/*
#include<iostream>
#include<string>
#include<cstdio>

#define Max 1000

using namespace std;

int Left[Max];
int Right[Max];
void link(int L, int R) {
	Right[L] = R;
	Left[R] = L;
}
int main() {
	int n, m, kase = 0;
	while (cin >> n >> m) {
		for (int i = 1; i <= n; i++) {
			Left[i] = i - 1;
			Right[i] = (i + 1) % (n + 1);
		}
		Right[0] = 1;
		Left[0] = n;
		int op, x, y, inv=0;
		while (m--) {
			cin >> op;
			if (op == 4) {
				inv = !inv;
			}
			else {
				cin >> x >> y;
				if (op == 3&&Right[y]==x) {
					swap(x, y);
				}
				if (op != 3 && inv) {
					op = 3 - op;
				}
				if (op == 1 && x == Left[y])
					continue;
				if (op == 2 && x == Right[y])
					continue;
				int LX = Left[x], RX = Right[x], LY = Left[y], RY = Right[y];
				if (op == 1) {
					link(LX, RX);
					link(LY, x);
					link(x, RY);
				}
				else if (op == 2) {
					link(LX, RX);
					link(y, x);
					link(x, RY);
				}
				else if (op == 3) {
					if (Right[x] == y) {
						link(y,x);
						link(LX, y);
						link(x, RY);
					}
					else {
						link(x,RY);
						link(y,RX);
						link(LX,y);
						link(LY,x);
					}
				}

			}
			int b = 0;
			long long ans = 0;
			for (int i = 1; i <= n; i++) {
				b = Right[b];
				if (i % 2 == 1)
					ans += b;
			}
			if (inv&&n % 2 == 0) {
				ans = (long long)n*(n + 1) / 2 - ans;
			}
			cout << "Case " << ++kase << " : " << ans << endl;

		}
		
	}
	return 0;
}*/