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
//		//�������ΪN�����ӣ��ͱ���1�����s1����ֵv1������2�����s2����ֵv2
//		if (s1 > s2) {//�Լ۱�=��/��
//			swap(s1, s2);
//			swap(v1, v2);
//		}//��ʱs2 �϶���s1��ģ�������� n/s2������65536�Ļ���˵�����ܲ�����ö�ٱ���1���Ǳ���2��ʱ�临�Ӷȶ��Ǻܴ�ĵ�
//		cout << "Case #" << i << ": ";
//		Long value = 0;
//		if (N / s2 >= 65536) {//��N/s1 ��N/s2 ���ǳ����ʱ��
//			for (Long j = 0; j <= s1; j++) {
//				value = max(value,(Long) v2*i + (N - i*s2) / s1*v1);
//			}
//			for (Long j = 0; j <= s2; j++) {
//				value = max(value, (Long)v1*i + (N - i*s1) / s2*v2);
//			}
//		}
//		else {//��Ϊ���ݽ�����ԭ��s2Ҫ��Щ������N/s2ҪСЩ����ʱö�ٱ���2�ĸ���
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