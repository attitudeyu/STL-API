#include <iostream>
#include <stack>

using namespace std;

void print_stack(stack<int> st)
{
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
}
void main()
{
	stack<int> st;
	//将元素压入栈
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);

	// 用一个栈创建新栈
	//stack<int> st_1(st);
	stack<int> st_1;
	st_1 = st;

	//遍历栈
	print_stack(st_1);
}