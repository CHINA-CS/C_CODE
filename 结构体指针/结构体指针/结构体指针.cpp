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
	student s1 = { "����",18,100 };
	student* p = &s1;
	cout << "����:  " << p->name << "���䣺 " << p->age << "�ɼ��� " << p->score << endl;


	system("pause");
	return 0;
}