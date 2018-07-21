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
	//��Ԫ��ѹ��ջ
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);

	// ��һ��ջ������ջ
	//stack<int> st_1(st);
	stack<int> st_1;
	st_1 = st;

	//����ջ
	print_stack(st_1);
}