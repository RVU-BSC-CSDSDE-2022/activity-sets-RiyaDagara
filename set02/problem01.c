/* 01.  Write a program to find the area of a triangle.

***Function Declarations***
```c
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
```
*/

#include<stdio.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

void main()
{

float base;
float height;
float *area;
input(base,height);
find_area(base,height,*area);
output(base,height,area)  
  
}

void input(float base, float height)
{
  
  printf("Enter the base and height of the triangle:")
  scanf("%f",&base);
  scanf("%f",&height);
  
}

void find_area(float base , float height, float *area)
{

*area = 0.5*base*height;
  
}

void output(float base, float height, float area)
{

printf("The area of the traingle with base %f and height %f is %f",base,height,area);
  
}