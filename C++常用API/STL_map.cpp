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
	//map������ʼ��
	map<int, string> map_;
	map<int, string> map_1 = { { 1, "yu" },{ 2, "yu" } };

	//map�����µ�Ԫ��
	//map_1.insert(pair<int, string>(3, "yu"));
	map_1[3] = "yu";

	//map�ı���
	print_map(map_1);

	//���ָ���ؼ��ֵ���Ϣ
	auto map_1_find_ptr = map_1.find(2);
	cout << map_1_find_ptr->first << " ";
	print_str(map_1_find_ptr->second);

	//�ж��Ƿ����ָ���ؼ�����Ϣ ����1(����)��0(������)
	cout<< map_1.count(4)<<endl;

	//ɾ��ָ���ؼ���
	map_1.erase(map_1_find_ptr);

	//�������
	map_1.clear();
}