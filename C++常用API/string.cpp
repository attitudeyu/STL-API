#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void main()
{
	string ori_str = "abcdefgh";

	//��ȡ���ַ��� �ӵ�һλ��ʼ������Ϊ2���ַ���
	string sub_str = ori_str.substr(1, 2);
	cout << sub_str << endl;


	//���ַ���ĩβ����ַ�
	ori_str.push_back('i');
	cout << ori_str << endl;


	//�����ַ���
	string insert_str="jklmn";
	ori_str.insert(9,insert_str);//������9��λ�ô������ַ���
	//cout << ori_str << endl;
	//ori_str.insert(9, insert_str, 2, 2);//������9��λ�ô������ַ�����һ���֣�������2֮���2���ַ�
	cout << ori_str << endl;


	//�滻�ַ���
	ori_str.replace(9, 12, "yuyu");//������9��λ�õ�����12�滻�ַ���
	cout << ori_str << endl;

	//ɾ���ַ���
	ori_str.erase(9, 2);//������9��λ�ô�ɾ��֮���2���ַ�
	cout << ori_str << endl;
	ori_str.erase(ori_str.begin() + 1, ori_str.end() - 3);
	cout << ori_str << endl;


	//����ƥ�䣬����ָ���ַ������ַ�����һ�γ��ֵ�����
	string find_str = "abc";
	//int find_idx_result = ori_str.find(find_str);
	//cout << find_idx_result << endl;


	//����ƥ�䣬����ָ���ַ������ַ�����һ�γ��ֵ�����
	int find_idx_result = ori_str.rfind(find_str);
	cout << find_idx_result << endl;


	//������begin��ʼ��num���ַ�
	string copy_part_str;
	copy_part_str.assign(ori_str, 0, 3);
	cout << copy_part_str << endl;


	//�Ƚ������ַ��� ���� 0(���)��1(����)��-1(С��)
	//char* cmp_str1 = "abc";
	//char* cmp_str2 = "abb";
	//int cmp_result = strcmp(cmp_str1, cmp_str2);
	string cmp_str1 = "abc";
	string cmp_str2 = "abb";
	int cmp_result = cmp_str1.compare(cmp_str2);
	cout << cmp_result << endl;


	//������д�뵽�ַ�������
	char num_to_char[5];
	sprintf(num_to_char, "%d", 10);
	cout << num_to_char[0] << num_to_char[1]<< endl;


	//stringת��Ϊint  ��׼��<cstdlib>
	string str_to_int = "10.0";
	int str_to_int_result = atoi(str_to_int.c_str());
	cout << str_to_int.c_str() << endl;
	cout << str_to_int_result << endl;
	//stringת��Ϊfloat
	double str_to_float_result = atof(str_to_int.c_str());
	cout << str_to_float_result << endl;


	//intת��Ϊstring  ��������
	int int_to_str = 10;
	cout << to_string(int_to_str) << endl;
}