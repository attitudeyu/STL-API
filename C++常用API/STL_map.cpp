#include <iostream>
#include <iostream>
#include <map>

using namespace std;

void print_str(string str)
{
	auto str_begin = str.begin();
	auto str_end = str.end();
	while (str_begin != str_end)
	{
		cout << *str_begin;
		str_begin++;
	}
	cout << endl;
}
void print_map(map<int, string> map_)
{
	auto map_begin = map_.begin();
	while (map_begin != map_.end())
	{
		cout << map_begin->first << " ";
		print_str(map_begin->second);
		map_begin++;
	}
}
void main()
{
	//map变量初始化
	map<int, string> map_;
	map<int, string> map_1 = { { 1, "yu" },{ 2, "yu" } };

	//map插入新的元素
	//map_1.insert(pair<int, string>(3, "yu"));
	map_1[3] = "yu";

	//map的遍历
	print_map(map_1);

	//获得指定关键字的信息
	auto map_1_find_ptr = map_1.find(2);
	cout << map_1_find_ptr->first << " ";
	print_str(map_1_find_ptr->second);

	//判断是否存在指定关键字信息 返回1(存在)、0(不存在)
	cout<< map_1.count(4)<<endl;

	//删除指定关键字
	map_1.erase(map_1_find_ptr);

	//清空容器
	map_1.clear();
}