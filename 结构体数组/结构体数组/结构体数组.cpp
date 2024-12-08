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
		{"张三",18,100},
		{"李四",19,99},
		{"王五",20,98}
	};
	for(int i=0;i<3;i++)
	{
		cout << "姓名：" << s1[i].name <<"  年龄:"<<s1[i].age<<"  成绩："<<s1[i].score << endl;
	
	}
	system("pause");
	return 0;
}