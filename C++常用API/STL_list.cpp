#include <iostream>
#include <list>

using namespace std;

//����list
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
	//list��ʼ��
	list<int> ls;
	list<int> ls1(5);//���峤�ȣ���ʶֵΪ0
	list<int> ls2(5, 3);//���峤�ȣ���ʶֵΪ3

	//����lisg
	print_list(ls1);

	//���һ��Ԫ��֮�����Ԫ��
	ls.push_back(1);
	//��һ��Ԫ��֮ǰ����Ԫ��
	ls.push_front(0);
	print_list(ls);

	//��õ�һ�������һ��Ԫ��
	int first_val = ls.front();
	int last_val = ls.back();
	cout << first_val << endl;

	//ɾ�����һ��Ԫ�ء���һ��Ԫ��
	ls.pop_back();
	ls.pop_front();

	//�ж�list�Ƿ�Ϊ��
	bool empty_result = ls.empty();

	//resize list�ĳ���
	ls.resize(5);
	ls.resize(5, 3);//ָ�����ֵ
	print_list(ls);

	//���list
	ls.clear();

	//�滻listԪ��Ϊ5��3
	ls.assign(5, 3);
	ls.assign(ls1.begin(), ls1.end());
	print_list(ls);

	//��������list
	swap(ls1, ls2);
	print_list(ls1);

	//list�ķ�ת
	reverse(ls.begin(), ls.end());

	//�ϲ�����list
	ls.merge(ls1);
	print_list(ls);

	//��ָ��λ�ò���Ԫ��
	ls.insert(ls.begin(), 2, 100); //�ڿ�ʼλ�ò���2��100
	print_list(ls);

	//ɾ������Ԫ��
	ls.erase(ls.begin(), ls.end());

	//ɾ��ָ������ֵ��Ԫ��
	ls.remove(0);



}