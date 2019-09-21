#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//#include<string.h>
struct employe
{
	int age;
	char name[100];
	float salary;
	int id
};

int main()
{
	
	struct employe e;
	e.age =10;
	printf("%d %d\n",e.age,e);
	printf("size\n",sizeof(e));
	printf("s=",sizeof(struct employe));
	return 0;
}
