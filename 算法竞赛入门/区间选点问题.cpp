//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<algorithm>
//#include<iterator>
//#include<deque>
//#include<sstream>
//using namespace std;
//
//
//int main() {
//	
//	//ѭ�����������ÿ���ַ�����ÿ��ѭ��һ��Ҫ�������0 �ͻ���
//	for (string strLine; getline(cin, strLine); cout << '0' << endl) {
//		//��Ҫ���Ӧ������ַ�����
//		cout << strLine << endl;
//		//�����ַ��������Ա黻Ϊ����
//		istringstream iss(strLine);
//		//���ַ���תΪ���֣�������׵�����ǰ�棩�洢��Stack��
//		deque<int>Stack;
//		for (int nDiam; iss >> nDiam; Stack.push_front(nDiam));
//		
//		//�ӵ��������Ͻ��з�ת������i����Ķ���iС
//		for (deque<int>::iterator i = Stack.begin(); i != Stack.end(); ++i) {
//			//չ��i���棨����i�������Ԫ��
//			deque<int>::iterator iMax = max_element(i, Stack.end());
//			//������Ԫ�ؾ���i ���������iָ������һ����
//			if (iMax != i) {
//				//������Ҫ���з�ת����
//				//������Ĳ��������棬����Ҫ�ȷ�ת��������
//				if (iMax != Stack.end() - 1) {
//					reverse(iMax, Stack.end());
//					//�����ת�����
//					cout << distance(Stack.begin(), iMax) + 1 << ' ';
//				}
//				//�����Ĵ������淭ת��i��λ����
//				reverse(i, Stack.end());
//				//�����ת�����
//				cout << distance(Stack.begin(), i) + 1 << ' ';
//			}
//		}
//	}
//	return 0;
//}
