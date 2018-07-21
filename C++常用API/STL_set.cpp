#include <iostream>
#include <set>

using namespace std;
void print_set(set<int> set_)
{
	// �������
	set<int>::iterator ite;
	for (ite = set_.begin(); ite != set_.end(); ite++)
	{
		cout << *ite << " ";
	}
	cout << endl;
	//�������
	set<int>::reverse_iterator r_ite;
	for (r_ite = set_.rbegin(); r_ite != set_.rend(); r_ite++)
	{
		cout << *r_ite << " ";
	}
	cout << endl;
}

void main()
{
	//��ʼ��
	set<int> set_ = { 1,2,3,4,5 };

	//��������
	print_set(set_);

	//����ָ������Ԫ��
	set<int>::iterator ite;
	ite = set_.find(1);
	cout << *ite << endl;

	//����ָ�������ֵĴ��� 0����1
	cout << set_.count(5) << endl;

	//��õ�һ�����ڵ���ָ��ֵ��Ԫ��
	pair<set<int>::const_iterator, set<int>::const_iterator>pr;
	pr = set_.equal_range(4);
	//��õ�һ������ָ��ֵ��Ԫ��
	cout << *pr.first << endl;
	cout << *pr.second << endl;

	//ɾ��ָ��λ��(��ַ���)��Ԫ��
	//set_.erase(set_.begin());
	//set_.erase(set_.begin(), ++set_.begin());
	set_.erase(1);
	print_set(set_);

	//���ص�һ�����ڵ���key_value�Ķ�λ��
	cout << *set_.lower_bound(4) << endl;
	//�������һ�����ڵ���key_value�Ķ�λ��
	cout << *set_.upper_bound(4) << endl;
}