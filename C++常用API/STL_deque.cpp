#include <iostream>
#include <deque>

using namespace std;

//遍历deque
void print_deque(deque<int> deq)
{
	//正向队列遍历
	deque<int>::iterator ite = deq.begin();
	while (ite != deq.end())
	{
		cout << *ite << " ";
		ite++;
	}
	cout << endl;

	//反向队列遍历
	deque<int>::reverse_iterator r_ite;
	for (r_ite = deq.rbegin(); r_ite != deq.rend(); r_ite++)
	{
		cout << *r_ite << " ";
	}
	cout << endl;
}

void main()
{
	//初始化
	deque<int> deq = { 1,2,3,4,5 };

	//判断容器是否为空
	if (deq.empty())
		cout << " deque is empty ." << endl;

	//遍历容器
	print_deque(deq);

	//获得容器中第一个、最后一个元素、最大允许元素的数量
	cout <<"the first data is :"<< deq.front() << endl;
	cout << "the last data is :" << deq.back() << endl;
	cout << "the number of deque is:" << deq.max_size() << endl;

	//获得指定索引的元素
	cout << deq.at(0) << endl;

	//operator[]下标运算符重载
	cout << deq[0] << endl;

	//operator=赋值运算符重载
	deque<int> deq_;
	deq_ = deq;
	print_deque(deq_);

	//清除容器中的所有元素
	deq_.clear();
	print_deque(deq_);

	//复制2个6到容器中
	deque<int> deq_1;
	deq_1.assign(2, 6);
	//deque<int> deq_1(2, 6); //等价此初始化方式
	print_deque(deq_1);

	//复制指定地址区间的元素到容器中
	deque<int> deq_2;
	deq_2.assign(deq.begin(), deq.begin() + 2);
	print_deque(deq_2);

	//在指定位置(地址)插入元素
	deq.insert(deq.end(), 7);
	deq.insert(deq.end(), 2, 7);
	//在指定位置(地址)插入区间(地址)的元素
	deq.insert(deq.end(), deq_2.begin(), deq_2.end());
	print_deque(deq);

	//删除指定位置(地址)、指定区间(地址)的元素
	deq.erase(deq.begin());
	deq.erase(deq.begin(), deq.begin()+1);
	print_deque(deq);

	//在末尾、开头添加或删除元素
	deq.push_back(8);
	deq.pop_back();
	deq.push_front(9);
	deq.pop_front();
	print_deque(deq);

	//重新定义容器的大小
	deq.resize(deq.size() + 2);
	deq.resize(deq.size() - 2);
	print_deque(deq);

	//交换容器
	deq.swap(deq_1);
	//swap(deq, deq_1);
	print_deque(deq);

}