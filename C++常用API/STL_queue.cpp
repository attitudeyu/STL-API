#include <iostream>
#include <queue>

using namespace std;

//��ն���
void clear_queue(queue<int> &que)
{
	queue<int> empty;
	swap(empty, que);
}
void print_queue(queue<int> que)
{
	while (!que.empty())
	{
		cout << que.front() << " ";
		que.pop();
	}
}
void main()
{
	queue<int> que;

	//����ѹ��Ԫ��
	que.push(1);
	que.push(2);
	que.push(3);
	que.push(4);
	que.push(5);

	//��������Ԫ��
	//print_queue(que);

	//��ö��е�Ԫ�ظ���
	cout << que.size() << endl;

	//��ö��е�һ��Ԫ��
	cout << que.front() << endl;

	//ɾ�����е�һ��Ԫ��
	que.pop();

	//��ն���
	clear_queue(que);
	
}