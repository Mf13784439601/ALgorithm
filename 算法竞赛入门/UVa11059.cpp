/*
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>

#define Max 1000

using namespace std;

int n;



int MaxSubIndex(int A[],int start,int end) {
	int max = -99999;
	int label1 = 0,label2=0;
	for (int i = start; i < end; i++) {
		int sum = 1;
		for (int j = i; j < end; j++) {
			sum *= A[j];
			if (sum > max) {
				max = sum;
				label1 = i;
				label2 = j;
			}
		}
	}
	//cout << "start: " << label1 << "  end: " << label2;
	return max;
}

int main() {
   
	while (cin >> n&&n) {
		int num[Max];
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}
		int res = MaxSubIndex(num, 0, n);
		if (res < 0)
			cout << 0;
		else
			cout <<  res ;
		cout << endl;

	}

	return 0;
}*/