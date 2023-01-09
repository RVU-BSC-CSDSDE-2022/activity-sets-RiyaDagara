/*
8. Write a C program to find sum of _n_ different numbers entered by the user.

***Function Declarations***

```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
```
*/

#include<stdio.h>
int input_array_size();
void sum_n_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main()
{
    
}

int input_array_size()
{
    int n;
    scanf("%d",&n);
    printf("Enter the number: ",n);
    int x[n];
    for(int i=0; i<=n; i++)
      {
          scanf("%d",a[i]);
      }
    return(0);
}

void sum_n_array(int n, int a[n])
{
    int sum=0;
    for(int i=0; i<=n; i++)
      {
          sum = sum + a[i];
      }
}


int sum_n_array(int n, int a[n])
{
    int sum=0;
    for(int i=0; i<=n; i++)
      {
          sum = sum + a[i];
      }
    return(0);
}

void output(int n, int a[n], int sum)
{
    printf("The sum of the numbers: ",sum);
}



/*
#include<stdio.h>
int main(void)
{
  int n,i,sum=0;
  int a[n];
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the numbers\n");
  for (int i=0;i<n;i++)
    {
    scanf("%d",&a[n]);
    sum=sum+a[n];
    }
printf("The sum of the numbers is %d",sum);
}
*/