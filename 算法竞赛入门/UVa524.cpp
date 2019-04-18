//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<math.h>
//#include<string.h>
//#define Max 1000
//
//using namespace std;
//
//int n;
//int A[Max], isp[Max], vis[Max];
//int is_prime(int t) {
//	int temp = (int)sqrt(t);
//	for (int i = 2; i <= temp; i++) {
//		if (t%i == 0)
//			return 0;
//	}
//	return 1;
//}
//void dfs(int cur) {
//	if (cur == n&&isp[A[0] + A[cur - 1]]) {
//		for (int i = 0; i < n; i++) {
//			cout << A[i] << " ";
//		}
//		cout << endl;
//	}
//	else {
//		for (int i = 2; i <= n; i++) {
//			if (!vis[i] && isp[i + A[cur - 1]]) {
//				vis[i] = 1;
//				A[cur] = i;
//				dfs(cur + 1);
//				vis[i] = 0;
//			}
//		}
//	}
//
//}
//
//
//int main() {
//
//	while (cin >> n&&n > 0) {
//
//		for (int i = 2; i <= 2 * n; i++) {
//			isp[i] = is_prime(i);
//		}
//		memset(vis, 0, sizeof(vis));
//		A[0] = 1;
//		dfs(1);
//
//
//	}
//	return 0;
//
//}