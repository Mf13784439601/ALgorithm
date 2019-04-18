//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<math.h>
//#include<algorithm>
//#define Max 1000
//
//using namespace std;
//
//const int MAX = 250;
//const int limit = 105;
//const int N = 50;
//int dir[4][2] = { {1,0},{0,1},{0,-1},{-1,0} };
//char face[4] = { 'e','n','s','w' };
//int step[N], ans, n, m;
//int sum[25];
//int g[MAX][MAX];
//
//bool judge(int x, int y, int len, int direction) {
//	for (int i = 1; i <= len; i++) {
//		x += dir[direction][0];
//		y += dir[direction][1];
//		if (abs(x) > limit || abs(y) > limit)
//			return true;
//		if (g[x + limit][y + limit] == -1)
//			return true;
//	}
//	if (abs(x) + abs(y) > sum[n] - sum[len])
//		return true;
//	return false;
//
//}
//
//void dfs(int x, int y, int len, int direction) {
//	if (len > n) {
//		if (x == 0 && y == 0) {
//			for (int i = 1; i <= n; i++) {
//				printf_s("%c", face[step[i]]);
//			}
//			cout << endl;
//			ans++;
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		if (i == direction || i + direction == 3)
//			continue;
//		int xx = x + dir[i][0] * len;
//		int yy = y + dir[i][1] * len;
//		if (judge(x, y, len, direction))
//			continue;
//		if (g[xx + limit][yy + limit])
//			continue;
//		g[xx + limit][yy + limit] = 1;
//		step[len] = i;
//		dfs(xx, yy, len + 1, i);
//		g[xx + limit][yy + limit] = 0;
//	}
//}
//
//
//int main() {
//	sum[0] = 0;
//	for (int i = 1; i <= 20; i++) {
//		sum[i] = i + sum[i - 1];
//	}
//	int t;
//	cin >> t;
//	while (t--) {
//		cin >> n >> m;
//		memset(g, 0, sizeof(g));
//		ans = 0;
//		int a, b;
//		for (int i = 0; i < m; i++) {
//			cin >> a >> b;
//			if (abs(a) > limit || abs(b) > limit) {
//				continue;
//			}
//			g[a + limit][b + limit] = -1;
//		}
//		dfs(0, 0, 1, -1);
//		printf_s("Found %d golygon(s).\n\n", ans);
//	}
//	
//	return 0;
//}