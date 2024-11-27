#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


struct Stu
{
	//成员
	char name[20];
	int age;
	char sex[10];
	char num[12];

};

void print(struct Stu* ps)
{
	//printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).num);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->num);
	//->结构体指针变量->成员名
}


int main()
{
	struct Stu s = { "张三",20,"男","13558744554" };

	//printf("%s %d %s %s\n",s.name,s.age,s.sex,s.num);
	print(&s);

	return 0;
}

