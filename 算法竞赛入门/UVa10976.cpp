/*
#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<vector>

#define Max 1000
using namespace std;

int k;

int main() {
	while (cin >> k&&k) {
		vector<int> a, b;
		int i = 0;
		for (int y = k + 1; y <= 2 * k; y++) {
			if (((k*y) % (y - k)) == 0) {
				int x = ((k*y) / (y - k));
				a.push_back(x);
				b.push_back(y);
				i++;
			}
			
		}
		cout << i << endl;
		if (i > 0) {
			for (int n = 0; n < i; n++) {
				cout << "1/" << k << " = 1/" << a[n] << " + 1/" << b[n] << endl;
			}
		}
	}


	return 0;
}*/