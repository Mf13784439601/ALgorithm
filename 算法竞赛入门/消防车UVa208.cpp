//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<math.h>
//#include<algorithm>
//#define Max 1000
////����һ��n����������ͼ�Լ�ĳ�����k�������ֵ����С����˳�������1�����k������·��
//
////˼·�����ֱ�Ӿ������ѵĻ��ǻᳬʱ�ģ����Կ��Դ��յ�����������յ���������ͨ�鱣������������dfs����ʱ���Լ�֦��һЩ���ﲻ�˵ĵ㡣
//
//using namespace std;
//const int maxn = 22;
//int n, step, route;
//int map[maxn][maxn];
//int path[maxn];
//int vis[maxn];
//int trunk[maxn];
//
//void init(int cur) {//���յ㿪ʼ�������������յ���ͨ����ͨ��
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
//		init(n);//���㱣����ͨ��
//		cout << "CASE " << ++kase << ":" << endl;
//		dfs(1, 1);
//		cout << "There are " << route << " routes from firestation to streetcorner " << n << "." << endl;
//
//	}
//
//	return 0;
//}