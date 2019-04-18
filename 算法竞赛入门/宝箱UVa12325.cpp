//#include<iostream>
//#include<cstdio>
//#include<string>
//#include<cstdlib>
//#include<math.h>
//#include<algorithm>
//#define Max 1000
//typedef long long Long;
//using namespace std;
//int n, N, s1, v1, s2, v2;
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> N >> s1 >> v1 >> s2 >> v2;
//		//输入体积为N的箱子，和宝物1的体积s1、价值v1，宝物2的体积s2、价值v2
//		if (s1 > s2) {//性价比=价/量
//			swap(s1, s2);
//			swap(v1, v2);
//		}//此时s2 肯定比s1大的，但若如此 n/s2都大于65536的话，说明不管不管是枚举宝物1还是宝物2的时间复杂度都是很大的的
//		cout << "Case #" << i << ": ";
//		Long value = 0;
//		if (N / s2 >= 65536) {//当N/s1 和N/s2 都非常大的时候
//			for (Long j = 0; j <= s1; j++) {
//				value = max(value,(Long) v2*i + (N - i*s2) / s1*v1);
//			}
//			for (Long j = 0; j <= s2; j++) {
//				value = max(value, (Long)v1*i + (N - i*s1) / s2*v2);
//			}
//		}
//		else {//因为数据交换的原因，s2要大些，所以N/s2要小些，此时枚举宝物2的个数
//			for (Long j = 0; s2*j <= N; j++) {
//				value = max(value, (Long)v2*i + (N - s2*i) / s1*v1);
//			}
//
//		}
//		printf_s("%lld\n", value);
//
//
//	}
//	return 0;
//}