#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


struct Stu
{
	//��Ա
	char name[20];
	int age;
	char sex[10];
	char num[12];

};

void print(struct Stu* ps)
{
	//printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).num);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->num);
	//->�ṹ��ָ�����->��Ա��
}


int main()
{
	struct Stu s = { "����",20,"��","13558744554" };

	//printf("%s %d %s %s\n",s.name,s.age,s.sex,s.num);
	print(&s);

	return 0;
}

