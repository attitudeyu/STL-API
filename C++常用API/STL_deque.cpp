#include <iostream>
#include <deque>

using namespace std;

//����deque
void print_deque(deque<int> deq)
{
	//������б���
	deque<int>::iterator ite = deq.begin();
	while (ite != deq.end())
	{
		cout << *ite << " ";
		ite++;
	}
	cout << endl;

	//������б���
	deque<int>::reverse_iterator r_ite;
	for (r_ite = deq.rbegin(); r_ite != deq.rend(); r_ite++)
	{
		cout << *r_ite << " ";
	}
	cout << endl;
}

void main()
{
	//��ʼ��
	deque<int> deq = { 1,2,3,4,5 };

	//�ж������Ƿ�Ϊ��
	if (deq.empty())
		cout << " deque is empty ." << endl;

	//��������
	print_deque(deq);

	//��������е�һ�������һ��Ԫ�ء��������Ԫ�ص�����
	cout <<"the first data is :"<< deq.front() << endl;
	cout << "the last data is :" << deq.back() << endl;
	cout << "the number of deque is:" << deq.max_size() << endl;

	//���ָ��������Ԫ��
	cout << deq.at(0) << endl;

	//operator[]�±����������
	cout << deq[0] << endl;

	//operator=��ֵ���������
	deque<int> deq_;
	deq_ = deq;
	print_deque(deq_);

	//��������е�����Ԫ��
	deq_.clear();
	print_deque(deq_);

	//����2��6��������
	deque<int> deq_1;
	deq_1.assign(2, 6);
	//deque<int> deq_1(2, 6); //�ȼ۴˳�ʼ����ʽ
	print_deque(deq_1);

	//����ָ����ַ�����Ԫ�ص�������
	deque<int> deq_2;
	deq_2.assign(deq.begin(), deq.begin() + 2);
	print_deque(deq_2);

	//��ָ��λ��(��ַ)����Ԫ��
	deq.insert(deq.end(), 7);
	deq.insert(deq.end(), 2, 7);
	//��ָ��λ��(��ַ)��������(��ַ)��Ԫ��
	deq.insert(deq.end(), deq_2.begin(), deq_2.end());
	print_deque(deq);

	//ɾ��ָ��λ��(��ַ)��ָ������(��ַ)��Ԫ��
	deq.erase(deq.begin());
	deq.erase(deq.begin(), deq.begin()+1);
	print_deque(deq);

	//��ĩβ����ͷ��ӻ�ɾ��Ԫ��
	deq.push_back(8);
	deq.pop_back();
	deq.push_front(9);
	deq.pop_front();
	print_deque(deq);

	//���¶��������Ĵ�С
	deq.resize(deq.size() + 2);
	deq.resize(deq.size() - 2);
	print_deque(deq);

	//��������
	deq.swap(deq_1);
	//swap(deq, deq_1);
	print_deque(deq);

}