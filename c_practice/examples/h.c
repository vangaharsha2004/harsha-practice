#include<stdio.h>

struct __attribute__((packed)) stu{

	char a;
	
	int b;
	char d;
	float c;
};
struct den{
	char b;
	int f;
	char g;
};
int main(){

	printf("%ld %ld",sizeof(struct stu),sizeof(struct den));
	return 0;
}
