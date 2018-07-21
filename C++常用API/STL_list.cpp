#include <iostream>
#include <list>

using namespace std;

//遍历list
void print_list(list<int> ls)
{	
	list<int>::iterator ite = ls.begin();
	while (ite != ls.end())
	{
		cout << *ite << " ";
		ite++;
	}
	cout << endl;
}
void main()
{
	//list初始化
	list<int> ls;
	list<int> ls1(5);//定义长度，初识值为0
	list<int> ls2(5, 3);//定义长度，初识值为3

	//遍历lisg
	print_list(ls1);

	//最后一个元素之后插入元素
	ls.push_back(1);
	//第一个元素之前插入元素
	ls.push_front(0);
	print_list(ls);

	//获得第一个、最后一个元素
	int first_val = ls.front();
	int last_val = ls.back();
	cout << first_val << endl;

	//删除最后一个元素、第一个元素
	ls.pop_back();
	ls.pop_front();

	//判断list是否为空
	bool empty_result = ls.empty();

	//resize list的长度
	ls.resize(5);
	ls.resize(5, 3);//指定填充值
	print_list(ls);

	//清空list
	ls.clear();

	//替换list元素为5个3
	ls.assign(5, 3);
	ls.assign(ls1.begin(), ls1.end());
	print_list(ls);

	//交换两个list
	swap(ls1, ls2);
	print_list(ls1);

	//list的翻转
	reverse(ls.begin(), ls.end());

	//合并两个list
	ls.merge(ls1);
	print_list(ls);

	//在指定位置插入元素
	ls.insert(ls.begin(), 2, 100); //在开始位置插入2个100
	print_list(ls);

	//删除区间元素
	ls.erase(ls.begin(), ls.end());

	//删除指定所有值得元素
	ls.remove(0);



}