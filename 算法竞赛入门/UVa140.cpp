//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<vector>
//#define Max 1000
//
//using namespace std;
////在求最优解的问题中，应尽量考虑最优性剪枝。这往往需要记录下当前最优解，并且想办法“预测”一下从当前结点出发是否可以扩展到更好地方案。具体来说，
////先计算一下最理想情况可以得到怎样的解，如果连理想情况都无法得到比当前最优解更好的方案，则剪枝。
//
//const int maxn = 10,inf=0x7fffffff;
//char letter[maxn], s[100];//字母，输入序列
//int id[256];//字母的编号
//int p[maxn];//全排列的遍历数组，存储的是每个字母的编号
//int pos[maxn];//记录每个字母的位置，避免频繁使用strchr
//
//int main() {
//	while (scanf_s(" %s", &s) && s[0] != '#') {
//		int len = strlen(s);
//		int n = 0;
//		for (char ch = 'A'; ch <= 'Z'; ch++) {
//			if (strchr(s, ch) != NULL) {
//				letter[n] = ch;
//				id[ch] = n++;
//			}
//		}
//		vector<int>u, v;
//		for (int i = 0; i < len; i++) {
//			int t = i;//记录起始结点
//			i += 2;
//			while (i < len&&s[i] != ';') {
//				u.push_back(id[s[t]]);//加入起始结点
//				v.push_back(id[s[i]]);//加入起始结点的相邻结点
//				i++;
//			}
//		}
//		//遍历+ 剪枝
//		int bandwidth = 0, res = inf;
//		int bestP[maxn];//存储最终结果
//		for (int i = 0; i < n; i++)
//			p[i] = i;
//		do {
//			bandwidth = 0;//初始化别忘了
//			for (int i = 0; i < n; i++)
//				pos[p[i]] = i;//记录编号为pi的结点的位置
//			for (int i = 0; i < u.size(); i++) {
//				bandwidth = max(bandwidth, abs(pos[u[i]] - pos[v[i]]));
//				if (bandwidth >= res)
//					break;//剪枝
//			}
//			if (bandwidth < res) {
//				memcpy(bestP, p, sizeof(p));//memcpy 比较快
//				res = bandwidth;
//			}
//		} while (next_permutation(p,p+n));
//		for (int i = 0; i < n; i++)
//			printf_s("%c  ", letter[bestP[i]]);
//		printf_s("-> %d\n", res);
//	}
//
//
//
//}