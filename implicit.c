#include <stdio.h>

int add(int a, int b)
{
	printf("x = %d y = %d \t x+y = %d\n",a,b,a+b);
	return a+b;
}
int subtract(int a, int b)
{
	printf("x = %d y = %d \t x-y = %d\n",a,b,a-b);
	return a-b;
}
int multiply(int a, int b)
{
	printf("x = %d y = %d \t x*y = %d\n",a,b,a*b);
	return a*b;
}

int main()
{
	// fun_ptr_arr is an array of function pointers
	int (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	int a = 15, b = 10;
    unsigned int c;
	int x = (*fun_ptr_arr[0])(a, b);
	x = (*fun_ptr_arr[1])(a, b);
	x = (*fun_ptr_arr[2])(a, b);
    scanf("%d",&c);
    x = (*fun_ptr_arr[c])(a, b);
	return 0;
}
