/*
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#define Max 1000

using namespace std;

int used[10];

int judge(int a, int b) {
	if (b > 98765)
		return 0;
	for (int i = 0; i < 10; i++) {
		used[i] = 0;
	}
	if (a < 10000)
		used[0] = 1;
	while (a) {
		used[a % 10] = 1;
		a = a / 10;
	}
	while (b) {
		used[b % 10] = 1;
		b = b / 10;
	}
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += used[i];
	}
	return (sum == 10);
}

int main() {
	int n, T = 0;
	while (cin >> n&&n) {
		if (T++)
			cout << endl;
		int count = 0;
		for (int i = 1234; i < 100000; i++) {
			if (judge(i, n*i)) {
				printf_s("%05d / %05d = %d\n", i*n, i, n);
				count++;
			}
		}
		if (!count)
			cout << "There are no solutions for " << n << endl;
	}


	return 0;
}*/