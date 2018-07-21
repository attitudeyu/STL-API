#include <iostream>
#include <queue>

using namespace std;

//清空队列
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

	//队列压入元素
	que.push(1);
	que.push(2);
	que.push(3);
	que.push(4);
	que.push(5);

	//遍历队列元素
	//print_queue(que);

	//获得队列的元素个数
	cout << que.size() << endl;

	//获得队列第一个元素
	cout << que.front() << endl;

	//删除队列第一个元素
	que.pop();

	//清空队列
	clear_queue(que);
	
}