#include<stdio.h>

static void fun(){

	printf("harsha\n");
}

void (*fptr)() = fun;
