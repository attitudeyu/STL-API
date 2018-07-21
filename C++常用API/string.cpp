#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void main()
{
	string ori_str = "abcdefgh";

	//提取子字符串 从第一位开始，长度为2的字符串
	string sub_str = ori_str.substr(1, 2);
	cout << sub_str << endl;


	//在字符串末尾添加字符
	ori_str.push_back('i');
	cout << ori_str << endl;


	//插入字符串
	string insert_str="jklmn";
	ori_str.insert(9,insert_str);//从索引9的位置处插入字符串
	//cout << ori_str << endl;
	//ori_str.insert(9, insert_str, 2, 2);//从索引9的位置处插入字符串的一部分，从索引2之后的2个字符
	cout << ori_str << endl;


	//替换字符串
	ori_str.replace(9, 12, "yuyu");//从索引9的位置到索引12替换字符串
	cout << ori_str << endl;

	//删除字符串
	ori_str.erase(9, 2);//从索引9的位置处删除之后的2个字符
	cout << ori_str << endl;
	ori_str.erase(ori_str.begin() + 1, ori_str.end() - 3);
	cout << ori_str << endl;


	//正向匹配，查找指定字符串在字符串第一次出现的索引
	string find_str = "abc";
	//int find_idx_result = ori_str.find(find_str);
	//cout << find_idx_result << endl;


	//逆向匹配，查找指定字符串在字符串第一次出现的索引
	int find_idx_result = ori_str.rfind(find_str);
	cout << find_idx_result << endl;


	//拷贝从begin开始的num个字符
	string copy_part_str;
	copy_part_str.assign(ori_str, 0, 3);
	cout << copy_part_str << endl;


	//比较两个字符串 返回 0(相等)、1(大于)、-1(小于)
	//char* cmp_str1 = "abc";
	//char* cmp_str2 = "abb";
	//int cmp_result = strcmp(cmp_str1, cmp_str2);
	string cmp_str1 = "abc";
	string cmp_str2 = "abb";
	int cmp_result = cmp_str1.compare(cmp_str2);
	cout << cmp_result << endl;


	//把整数写入到字符数组中
	char num_to_char[5];
	sprintf(num_to_char, "%d", 10);
	cout << num_to_char[0] << num_to_char[1]<< endl;


	//string转化为int  标准库<cstdlib>
	string str_to_int = "10.0";
	int str_to_int_result = atoi(str_to_int.c_str());
	cout << str_to_int.c_str() << endl;
	cout << str_to_int_result << endl;
	//string转化为float
	double str_to_float_result = atof(str_to_int.c_str());
	cout << str_to_float_result << endl;


	//int转化为string  内置类型
	int int_to_str = 10;
	cout << to_string(int_to_str) << endl;
}