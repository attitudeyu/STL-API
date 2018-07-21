#include <iostream>
#include <set>

using namespace std;
void print_set(set<int> set_)
{
	// 正向遍历
	set<int>::iterator ite;
	for (ite = set_.begin(); ite != set_.end(); ite++)
	{
		cout << *ite << " ";
	}
	cout << endl;
	//反向遍历
	set<int>::reverse_iterator r_ite;
	for (r_ite = set_.rbegin(); r_ite != set_.rend(); r_ite++)
	{
		cout << *r_ite << " ";
	}
	cout << endl;
}

void main()
{
	//初始化
	set<int> set_ = { 1,2,3,4,5 };

	//遍历容器
	print_set(set_);

	//查找指定键的元素
	set<int>::iterator ite;
	ite = set_.find(1);
	cout << *ite << endl;

	//查找指定键出现的次数 0或者1
	cout << set_.count(5) << endl;

	//获得第一个大于等于指定值得元素
	pair<set<int>::const_iterator, set<int>::const_iterator>pr;
	pr = set_.equal_range(4);
	//获得第一个大于指定值得元素
	cout << *pr.first << endl;
	cout << *pr.second << endl;

	//删除指定位置(地址或键)的元素
	//set_.erase(set_.begin());
	//set_.erase(set_.begin(), ++set_.begin());
	set_.erase(1);
	print_set(set_);

	//返回第一个大于等于key_value的定位器
	cout << *set_.lower_bound(4) << endl;
	//返回最后一个大于等于key_value的定位器
	cout << *set_.upper_bound(4) << endl;
}