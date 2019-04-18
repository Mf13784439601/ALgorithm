//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string.h>
//#include<math.h>
//#include<algorithm>
//using namespace std;
//#define Max 1000
//int n;
//int is_prime(int t) {
//	int s = (int)sqrt(t);
//	for (int i = 2; i <= s; i++) {
//		if (t%i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int isp[Max];
//int A[Max],vis[Max];
//void dfs(int cur) {
//	if (cur == n&&isp[A[0] + A[n - 1]]) {
//		//递归边界，别忘了测试第一个数和最后一个数
//		for (int i = 0; i < n; i++) {
//			cout << A[i] << " ";
//		}
//		cout << endl;
//	}
//	else {
//		for (int i = 2; i <= n; i++) {
//			//尝试放置每个数 i
//			if (!vis[i] && isp[i + A[cur - 1]]) {
//				//如果i没有用过，并且 与前一个数之和为素数
//				A[cur] = i;
//				vis[i] = 1;//设置使用标志
//				dfs(cur + 1);
//				vis[i] = 0;//清除标志
//			}
//		}
//	}
//}
//int main() {//回溯法
//	int kase = 0;
//	while (cin >> n&&n > 0) {
//		kase++;
//		cout << "Case " << kase << endl;
//		for (int i = 2; i <= n * 2; i++) {
//			isp[i] = is_prime(i);
//			
//		}
//		memset(vis, 0, sizeof(vis));
//		A[0] = 1;
//		dfs(1);
//	}
//	return 0;
//}