#include <iostream>
#include <vector>

using namespace std;

//����vector
void print_vector(vector<int> vec)
{
	//����һ
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;

	//������
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
	//�����ʼ��
	vector<int> vec;
	vector<int> vec_0(5);//���峤�ȣ���ʶֵΪ0
	vector<int> vec_3(5, 3);//���峤�ȣ���ʶֵΪ3

	//����vector����
	print_vector(vec_0);

	//vector����Ԫ��
	vec.push_back(1);

	//��һ��Ԫ��֮ǰ����5��ֵΪ3��Ԫ��
	vec.insert(vec.begin(), 5, 3);

	//���һ��Ԫ��֮�����5��ֵΪ3��Ԫ��
	vec.insert(vec.end(), 5, 3);
	print_vector(vec);

	//ɾ�����һ��Ԫ��
	vec.pop_back();

	//ɾ�������Ԫ��
	vec.erase(vec.begin() + 2, vec.end());

	//���vector
	vec.clear();

	//�ж��Ƿ�Ϊ��
	bool empty_result = vec.empty();
	cout << empty_result << endl;
}