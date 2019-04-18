//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<math.h>
//#include<algorithm>
//#define Max 1000
////给出一个n个结点的无向图以及某个结点k，按照字典序从小到大顺序输出从1到结点k的所有路径
//
////思路：如果直接矩阵深搜的话是会超时的，所以可以从终点出发，将与终点相连的连通块保存起来，这样dfs深搜时可以剪枝掉一些到达不了的点。
//
//using namespace std;
//const int maxn = 22;
//int n, step, route;
//int map[maxn][maxn];
//int path[maxn];
//int vis[maxn];
//int trunk[maxn];
//
//void init(int cur) {//从终点开始遍历，保存与终点连通的连通块
//	trunk[cur] = 1;
//	for (int i = 1; i < maxn; i++) {
//		if (map[cur][i] && !trunk[i]) {
//			init(i);
//		}
//	}
//
//}
//void dfs(int cur, int step) {
//	if (cur == n) {
//		cout << "1";
//		for (int i = 1; i < step; i++) {
//			cout << " " << path[i];
//		}
//		cout << endl;
//		memset(path, 0, sizeof(path));
//		route++;
//	}
//	for (int i = 0; i < maxn; i++) {
//		if (map[cur][i] && !vis[i] && trunk[i]) {
//			vis[i] = 1;
//			path[step] = i;
//			dfs(i, step + 1);
//			vis[i] = 0;
//		}
//	}
//	return;
//}
//int main() {
//	int a, b, kase = 0;
//	while (cin >> n&&n) {
//		memset(vis,0,sizeof(vis));
//		memset(map,0,sizeof(map));
//		memset(path, 0, sizeof(path));
//		memset(trunk, 0, sizeof(trunk));
//		while (cin >> a >> b) {
//			if (!a && !b)
//				break;
//			map[a][b] = map[b][a] = 1;
//		}
//		vis[1] = 1;
//		step = 1;
//		route = 0;
//		init(n);//计算保存连通块
//		cout << "CASE " << ++kase << ":" << endl;
//		dfs(1, 1);
//		cout << "There are " << route << " routes from firestation to streetcorner " << n << "." << endl;
//
//	}
//
//	return 0;
//}