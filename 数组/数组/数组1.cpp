#include<iostream>
using namespace std;
int main()
{
	int arr[2][3]=
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "������ռ�ڴ�ռ��СΪ" << sizeof(arr) << endl;
	cout << "�����һ����ռ���ڴ�ռ��СΪ" << sizeof(arr[0]) << endl;
	cout << "�����һ��Ԫ����ռ���ڴ�ռ��СΪ" << sizeof(arr[0][0]) << endl;

	cout << "��������Ϊ" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "����һ���ж��ٸ�Ԫ��" << sizeof(arr) / sizeof(arr[0][0])<<endl;
	cout << "��ά������׵�ַΪ" << (int)arr << endl;
	system("pause");
	return 0;
}