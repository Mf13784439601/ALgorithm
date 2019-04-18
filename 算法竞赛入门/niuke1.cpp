/*
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define Max 1000

int m;
int N;
int f(int i) {
	if (i % 2 == 0)
		return (3 * i*(i + 1) / 2);
	else
		return (i / 2 + 1) * 3 * i;

}
int main() {
	cin >> m;
	int sum;
	while (m--) {
		cin >> N;
		sum = f(N);
		cout << sum << endl;
	}
	return 0;
}*/