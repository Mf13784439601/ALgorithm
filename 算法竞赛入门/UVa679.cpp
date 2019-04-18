/*
#include<iostream>
#include<cstdio>
#include<string>

//#define Max 1000

using namespace std;
const int Max = 20;
int s[1 << Max];

int main() {
	int D, I;
	while (cin >> D >> I) {
		memset(s, 0, sizeof(s));//开关
		int k, n = (1 << D) - 1;//n为最大结点编号
		for (int i = 0; i < I; i++) {//连续让I个小球下落
			k = 1;
			while (1) {
				s[k] = !s[k];
				if (s[k])
					k = 2*k;
				else {
					k = 2 * k+1;
				}
				//k = s[k] ? 2 * k + 1 : 2 * k;
				if (k > n)
					break;
		}
		}

		cout << (k / 2);

	}
	return 0;
}*/