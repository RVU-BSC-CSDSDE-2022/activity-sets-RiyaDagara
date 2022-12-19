/*Write a C program to add two numbers using **pass by reference**

***Function Declarations***

```c
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
```//*/
#include<stdio.h>
int input();
void add(int a, int b, int *sum);
output(int a, int b, int sum);

int main()
  {
    int a,b,sum;
    a = input();
    b = input();
    add(a,b,&sum);
    output(a,b,sum);
    return(0);
  }

int input()
  {
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    return(x);
  }

void add int(int a, int b, int *sum)
{
  *sum = a+b;
}

void output(int a, int b, int sum)
{
  printf("the sum of the two numbers is %d",a,b,sum);
  
}
//int main(void)
//{
  //int a,b,sum;
 // printf("Enter the first number\n");
 // scanf("%d",&a);
 // printf("Enter the second number\n");
  //scanf("%d",&b);
  //sum=sum_func(&a,&b);
  //printf("The sum of the 2 numbers is %d",sum);
  //return(0);
//}
//sum_func(int *a,int *b)
//{
//int sum=*a+*b;
//return sum;
//}
