#include<stdio.h>

extern void (*fptr)();
int main(){

	  fptr();
	return 0;
}
