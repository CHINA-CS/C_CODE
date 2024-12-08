#include<iostream>
using namespace std;
int main()
{
	int arr[2][3]=
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "数组所占内存空间大小为" << sizeof(arr) << endl;
	cout << "数组第一行所占用内存空间大小为" << sizeof(arr[0]) << endl;
	cout << "数组第一个元素所占用内存空间大小为" << sizeof(arr[0][0]) << endl;

	cout << "数组行数为" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "数组一共有多少个元素" << sizeof(arr) / sizeof(arr[0][0])<<endl;
	cout << "二维数组的首地址为" << (int)arr << endl;
	system("pause");
	return 0;
}