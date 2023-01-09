/*
3. Write a C program to add two numbers using **pass by value**

***Function declarations***

```c
int input();
int add(int a, int b);
void output(int a, int b, int sum);
```
*/


#include<stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main()
{
  printf("Enter two numbers to be added");
  int a = input();
  int b = input();
  printf("the sum is:")
  int sum = add(a,b);
  output(a,b,sum);
}

int input()
{
  int x;
  scanf("%d",&x);
  return(x);
}

int add(int a, int b)
{
  int sum = a+b;
  return(sum);
}

void output(int a, int b, int sum)
{
  printf("The sum of %d and %d is %d",&a,&b,&sum);
}



/*#include<stdio.h>
int main(void)
{
  int a,b,sum;
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("Enter the second number\n");
  scanf("%d",&b);
  sum=sum_func(a,b);
  printf("The sum of the 2 numbers is %d",sum);
  return(0);
}
sum_func(int a,int b)
{
int sum;
sum=a+b;
return sum;
}*/
