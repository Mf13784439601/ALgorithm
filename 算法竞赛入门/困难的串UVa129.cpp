//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//
//#define Max 1000
//using namespace std;
//int n, L,cnt;
//int S[Max];
//int dfs(int cur) {//����0 ��ʾ�Ѿ��õ��⣬�����������
//	if (cnt++ == n) {
//		for (int i = 0; i < cur; i++) {
//			printf_s("%c", 'A'+ S[i]);//�������
//		}
//		cout << endl;
//		return 0;
//	}
//	for (int i = 0; i < L; i++) {
//		S[cur] = i;
//		int ok = 1;
//		for (int j = 1; j * 2 <= cur + 1; j++) {
//			//���Գ���Ϊ j*2 �ĺ�׺
//			int equal = 1;
//			for (int k = 0; k < j; k++) {
//				//����һ���Ƿ����ǰһ��
//				if (S[cur - k] != S[cur - k - j]) {
//					equal = 0;
//					break;
//				}
//			}
//			if (equal) {
//				ok = 0;
//				break;//��һ�����ǰһ�룬�������Ϸ�
//			}
//		}
//		if (ok && !dfs(cur + 1))
//			return 0;//�ݹ�����������Ѿ��ҵ��⣬��ֱ���˳�
//	}
//	return 1;
//}
//int main() {
//	while (cin >> n&&cin >> L) {
//		cnt = 0;
//		dfs(1);
//	}
//	return 0;
//}