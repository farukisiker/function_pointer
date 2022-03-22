
// A simple C program to show function pointers as parameter
#include <stdio.h>

int multiply(int a, int b){
    printf("x = %d y = %d \t x*y = ",a,b);
    return a*b;
}
int add(int a, int b){
    printf("x = %d y = %d \t x+y = ",a,b);
    return a+b;
}
int substract(int a, int b){
    printf("x = %d y = %d \t x-y = ",a,b);
    return a-b;
}

void calculater(int (*fun)(),int a, int b)
{
    printf("%d\n",(fun)(a,b));
}

// A function that receives a simple function
// as parameter and calls the function
  
int main()
{
    int x = 4, y = 2;
    calculater(substract,x,y);
    calculater(add,x,y);
    calculater(multiply,x,y);
    
    return 0;
}