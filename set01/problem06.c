/*Write a C program to compare three numbers using **pass by reference**

***Function Declarations***

```c
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
```*/

#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output();

int main()
{
  int a,b,c,largest;
  a = input();
  b = input();
  c = input();
  compare(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}


int input()
{
  int x;
  printf("Enter a number\n");
  scanf("%d",&x);
  return(x);
}


void compare(int a, int b, int c, int *largest)
{
  if((a>=b)&&(a>=c))
  {
    *largest = a;
  }
  else if((b>=a)&&(b>=c))
  {
    *largest = b;
  }
  else if((c>=a)&&(c>=b))
  {
    *largest = c;
  }
}


void output(int a, int b, int c, int largest)
{
  printf("the largest number of %d, %d and %d is %d",&a,&b,&c,&largest);
}


/*#include<stdio.h>
int main(void)
{
  int a,b,c,result;
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("Enter the second number\n");
  scanf("%d",&b);
  printf("Enter the third number\n");
  scanf("%d",&c);
  result=comp_func(&a,&b,&c);
  printf("The greatest of the 3 numbers is %d",result);
  return(0);
}
comp_func(int *a,int *b,int *c)
{
  int temp;
  if((*a>*b)&(*a>*c))
  {
    temp=*a;
  }
  else if((*b>*a)&(*b>*c))
  {
    temp=*b;
  }
  else
  {
    temp=*c;
  }

return temp;
}*/