//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<vector>
//#define Max 1000
//
//using namespace std;
////�������Ž�������У�Ӧ�������������Լ�֦����������Ҫ��¼�µ�ǰ���Ž⣬������취��Ԥ�⡱һ�´ӵ�ǰ�������Ƿ������չ�����õط�����������˵��
////�ȼ���һ��������������Եõ������Ľ⣬���������������޷��õ��ȵ�ǰ���Ž���õķ��������֦��
//
//const int maxn = 10,inf=0x7fffffff;
//char letter[maxn], s[100];//��ĸ����������
//int id[256];//��ĸ�ı��
//int p[maxn];//ȫ���еı������飬�洢����ÿ����ĸ�ı��
//int pos[maxn];//��¼ÿ����ĸ��λ�ã�����Ƶ��ʹ��strchr
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
//			int t = i;//��¼��ʼ���
//			i += 2;
//			while (i < len&&s[i] != ';') {
//				u.push_back(id[s[t]]);//������ʼ���
//				v.push_back(id[s[i]]);//������ʼ�������ڽ��
//				i++;
//			}
//		}
//		//����+ ��֦
//		int bandwidth = 0, res = inf;
//		int bestP[maxn];//�洢���ս��
//		for (int i = 0; i < n; i++)
//			p[i] = i;
//		do {
//			bandwidth = 0;//��ʼ��������
//			for (int i = 0; i < n; i++)
//				pos[p[i]] = i;//��¼���Ϊpi�Ľ���λ��
//			for (int i = 0; i < u.size(); i++) {
//				bandwidth = max(bandwidth, abs(pos[u[i]] - pos[v[i]]));
//				if (bandwidth >= res)
//					break;//��֦
//			}
//			if (bandwidth < res) {
//				memcpy(bestP, p, sizeof(p));//memcpy �ȽϿ�
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