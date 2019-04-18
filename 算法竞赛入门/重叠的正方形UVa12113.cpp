//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<math.h>
//#include<algorithm>
//#include<queue>
//#include<stack>
//#include<vector>
//#include<set>
//#define Long long long
//#define INF 0x3f3f3f3f
//#define mod 10000000007
//using namespace std;
//
//const int maxn = 1000000 + 5;
//char s[10][10];
//int ans[10][10];
//int maps[10][10];
//
//void putmap(int op) {
//	int row = op / 3;
//	int col = 2 * (op %3);
//	maps[row][col + 1] = maps[row][col + 3] = 2;
//	maps[row + 2][col + 1] = maps[row + 2][col + 3] = 2;
//	maps[row + 1][col] = maps[row + 1][col + 4] = 1;
//	maps[row + 2][col + 2] = 0;
//	maps[row + 1][col + 1] = maps[row + 1][col + 2] = maps[row + 1][col + 3] = 0;
//}
//bool judge() {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 9; j++) {
//			if (ans[i][j] != maps[i][j])
//				return false;
//		}
//	}
//}
//
//bool dfs(int step) {
//	if (step > 6)
//		return false;
//	for (int i = 0; i < 9; i++) {
//		int remaps[5][10];
//		for (int k = 0; k < 5; k++) {
//			for (int j = 0; j < 9; j++) {
//				remaps[k][j] = maps[k][j];
//			}
//		}
//		putmap(i);
//		if (judge())
//			return  true;
//		if (dfs(step + 1))
//			return true;
//		for (int k = 0; k < 5; k++) {
//			for (int j = 0; j < 9; j++) {
//				maps[k][j] = remaps[k][j];
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	int kase = 1;
//	while (gets_s(s[0])) {
//		memset(ans, 0, sizeof(ans));
//		memset(maps, 0, sizeof(maps));
//		if (s[0][0] == '0')
//			break;
//		for (int i = 1; i < 5; i++) {
//			gets_s(s[i]);
//		}
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 9; j++) {
//				if (s[i][j] == '|')
//					ans[i][j] = 1;
//				else if (s[i][j] == '_')
//					ans[i][j] = 2;
//			}
//		}
//		cout << "Case " << kase++ << ":";
//		if (dfs(1))
//			cout << "Yes" << endl;
//		else {
//			cout << "No" << endl;
//		}
//	}
//	return 0;
//}