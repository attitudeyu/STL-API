#include <iostream>
#include <algorithm>

using namespace std;
bool cmp_num(int num1, int num2)
{
	return num1 > num2;
}
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
void main()
{
	//交换两个元素
	int swap_num1 = 5, swap_num2 = 10;
	swap(swap_num1, swap_num2);
	cout << swap_num1 << " " << swap_num2 << endl;

	//翻转字符串
	string reverse_str = "abcdef";
	//reverse(reverse_str.begin(), reverse_str.end());//翻转整个字符串
	reverse(reverse_str.begin()+2, reverse_str.end());//翻转指定字符串
	cout << reverse_str[2] << endl;

	//根据数据智能选择排序算法  
	int sort_arr[5] = { 3,5,2,7,1 };
	//sort(sort_arr, sort_arr + 5);//默认升序排序
	sort(sort_arr, sort_arr + 5,cmp_num);//降序排序
	cout << sort_arr[0] << endl;

	//获得两个数中较小的数
	int max_min_num1 = 5, max_min_num2 = 10;
	int min_result = min(max_min_num1, max_min_num2);
	int max_result = max(max_min_num1, max_min_num2);
	cout << max_result << endl;

	//获得字符串的所有排列组合 默认升序排列
	string permutation_str = "abc";
	while (next_permutation(permutation_str.begin(), permutation_str.end()))
	{
		print_str(permutation_str);
	}

}