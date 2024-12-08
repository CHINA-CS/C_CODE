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
	student s1 = { "张三",18,100 };
	student* p = &s1;
	cout << "姓名:  " << p->name << "年龄： " << p->age << "成绩： " << p->score << endl;


	system("pause");
	return 0;
}