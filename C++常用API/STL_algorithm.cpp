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
	//��������Ԫ��
	int swap_num1 = 5, swap_num2 = 10;
	swap(swap_num1, swap_num2);
	cout << swap_num1 << " " << swap_num2 << endl;

	//��ת�ַ���
	string reverse_str = "abcdef";
	//reverse(reverse_str.begin(), reverse_str.end());//��ת�����ַ���
	reverse(reverse_str.begin()+2, reverse_str.end());//��תָ���ַ���
	cout << reverse_str[2] << endl;

	//������������ѡ�������㷨  
	int sort_arr[5] = { 3,5,2,7,1 };
	//sort(sort_arr, sort_arr + 5);//Ĭ����������
	sort(sort_arr, sort_arr + 5,cmp_num);//��������
	cout << sort_arr[0] << endl;

	//����������н�С����
	int max_min_num1 = 5, max_min_num2 = 10;
	int min_result = min(max_min_num1, max_min_num2);
	int max_result = max(max_min_num1, max_min_num2);
	cout << max_result << endl;

	//����ַ���������������� Ĭ����������
	string permutation_str = "abc";
	while (next_permutation(permutation_str.begin(), permutation_str.end()))
	{
		print_str(permutation_str);
	}

}