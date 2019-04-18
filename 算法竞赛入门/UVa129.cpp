//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//
//#define Max 1000
//
//using namespace std;
//
//int n, L,cnt;
//int res[Max];
//int  dfs(int cur) {
//	if (cnt++ == n) {
//		for (int i = 0; i < cur; i++) {
//			printf_s("%c", 'A' + res[i]);
//		}
//		cout << endl;
//		return 0;
//	}
//	for (int i = 0; i < L; i++) {
//		res[cur] = i;
//		int ok = 1;
//		for (int j = 1; j * 2 < cur + 1; j++) {
//			int equal = 1;
//			for (int k = 0; k <j; k++) {
//				if (res[cur - k] != res[cur - k - j]) {
//					equal = 0;
//					break;
//				}
//			}
//			if (equal) {
//				ok = 0;
//				break;
//			}
//		}
//
//		if (ok&&!dfs(cur + 1))
//			return 0;
//
//	}
//	return 1;
//}
//
//int main() {
//	while (cin >> n&&cin >> L) {
//		cnt = 0;
//		dfs(1);
//	}
//	return 0;
//}