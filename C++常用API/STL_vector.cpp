#include <iostream>
#include <vector>

using namespace std;

//遍历vector
void print_vector(vector<int> vec)
{
	//方法一
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;

	//方法二
	vector<int>::iterator ite = vec.begin();
	while (ite != vec.end())
	{
		cout << *ite << " ";
		ite++;
	}
	cout << endl;
}
void main()
{
	//对象初始化
	vector<int> vec;
	vector<int> vec_0(5);//定义长度，初识值为0
	vector<int> vec_3(5, 3);//定义长度，初识值为3

	//遍历vector容器
	print_vector(vec_0);

	//vector推入元素
	vec.push_back(1);

	//第一个元素之前插入5个值为3的元素
	vec.insert(vec.begin(), 5, 3);

	//最后一个元素之后插入5个值为3的元素
	vec.insert(vec.end(), 5, 3);
	print_vector(vec);

	//删除最后一个元素
	vec.pop_back();

	//删除区间的元素
	vec.erase(vec.begin() + 2, vec.end());

	//清空vector
	vec.clear();

	//判断是否为空
	bool empty_result = vec.empty();
	cout << empty_result << endl;
}