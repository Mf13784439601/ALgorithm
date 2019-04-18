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
//	//循环处理输入的每组字符串。每次循环一轮要输出最后的0 和换行
//	for (string strLine; getline(cin, strLine); cout << '0' << endl) {
//		//按要求回应输入的字符串行
//		cout << strLine << endl;
//		//构造字符串流，以遍换为数字
//		istringstream iss(strLine);
//		//将字符串转为数字，逆序（最底的在最前面）存储在Stack里
//		deque<int>Stack;
//		for (int nDiam; iss >> nDiam; Stack.push_front(nDiam));
//		
//		//从底依次向上进行翻转，保持i上面的都比i小
//		for (deque<int>::iterator i = Stack.begin(); i != Stack.end(); ++i) {
//			//展出i上面（包括i）的最大元素
//			deque<int>::iterator iMax = max_element(i, Stack.end());
//			//如果最大元素就是i 则继续（将i指向上面一个）
//			if (iMax != i) {
//				//否则需要进行翻转操作
//				//如果最大的不在最上面，则需要先翻转到最上面
//				if (iMax != Stack.end() - 1) {
//					reverse(iMax, Stack.end());
//					//输出翻转的起点
//					cout << distance(Stack.begin(), iMax) + 1 << ' ';
//				}
//				//将最大的从最上面翻转到i的位置上
//				reverse(i, Stack.end());
//				//输出翻转的起点
//				cout << distance(Stack.begin(), i) + 1 << ' ';
//			}
//		}
//	}
//	return 0;
//}
