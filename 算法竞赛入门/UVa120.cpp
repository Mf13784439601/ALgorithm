//#include<iostream>
//#include<cstdio>
//#include<string>
//#include<deque>
//#include<stack>
//#include<iterator>
//#include<sstream>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	for (string strLine; getline(cin, strLine); cout << '0' << endl) {
//		cout << strLine<<endl;
//		istringstream iss(strLine);
//		deque<int>Stack;
//		for (int nDiam; iss >> nDiam; Stack.push_front(nDiam));
//		for (deque<int>::iterator i = Stack.begin(); i != Stack.end(); ++i) {
//			deque<int>::iterator iMax = max_element(i, Stack.end());
//			if (iMax != i) {
//				if (iMax != Stack.end() - 1) {
//					reverse(iMax, Stack.end());
//					cout << distance(Stack.begin(), iMax) + 1 << ' ';
//				}
//				reverse(i, Stack.end());
//				cout << distance(Stack.begin(), i) + 1 << ' ';
//			}
//		}
//	}
//	return 0;
//}