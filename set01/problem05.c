/*Write a C program to compare three numbers using **pass by value**

***Function Declarations***

```c
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
```*/


#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);


int main()
{
  int a,b,c,largest;
  a = input();
  b = input();
  c = input();
  largest = compare(a,b,c);
  output(a,b,c,largest);
  return(0);
}


int input()
{
  int x;
  printf("Enter a number");
  scanf("%d",&x);
  return(x);
}


int compare(int a, int b, int c)
{
  if((a>=b)&&(a>=c))
  {
    return(a);
  }
  else if((b>=a)&&(b>=c))
  {
    return(b);
  }
  else if((c>=a)&&(c>=b))
  {
    return(c);
  }
}

void output(int a, int b, int c, int largest)
{
  printf("the largest number is: %f",&largest);
}
/*int main(void)
{
  int a,b,c,result;
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("Enter the second number\n");
  scanf("%d",&b);
  printf("Enter the third number\n");
  scanf("%d",&c);
  result=comp_func(a,b,c);
  printf("The greatest of the 3 numbers is %d",result);
  return(0);
}
int comp_func(int a,int b,int c)
{
  int temp;
  if((a>b)&(a>c))
  {
    temp=a;
  }
  else if((b>a)&(b>c))
  {
    temp=b;
  }
  else
  {
    temp=c;
  }

return temp;
}*/
