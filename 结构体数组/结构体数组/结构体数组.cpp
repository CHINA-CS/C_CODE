#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	student s1[3] =
	{
		{"����",18,100},
		{"����",19,99},
		{"����",20,98}
	};
	for(int i=0;i<3;i++)
	{
		cout << "������" << s1[i].name <<"  ����:"<<s1[i].age<<"  �ɼ���"<<s1[i].score << endl;
	
	}
	system("pause");
	return 0;
}