/*7. Write a C program to find sum of all natural numbers until _n_

***Function Declarations***

```c
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
```*/

#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
  int n, sum;
  n = input_n();
  int sum_n_nos(n);
  void output(n, sum);
  return(0);
}

int input_n()
{
  int x;
  printf("Enter a natural number: ");
  scanf("%d",&x);
  return(x);
}

int sum_n_nos(int n)
{
  int sum = 0;
  for(int i=1;i<=n;i++)
    {
      sum = sum+i;
    }
  return(sum);
}

void output(int n, int sum)
{
  printf("The sum of %d natural numbers is %d",n,sum);
}

/*#include<stdio.h>
int main(void)
{
  int a,sum;
  printf("Enter the number\n");
  scanf("%d",&a);
  sum=sum_func(a);
  printf("The sum of all the numbers till %d is %d",a,sum);
  return(0);
}
int sum_func(int a)
{
  int sum;
  sum=(a*(a+1))/2;
  return sum;
}
*/