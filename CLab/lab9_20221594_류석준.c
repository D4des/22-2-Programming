/*
#include <stdio.h>
int main(void) 
{
  int number = 10;
  int* p; //pointer 변수다! 선언

  p = &number;

  printf("변수 number의 주소 = %p \n", &number);
  printf("포인터의 값 = %p \n", p);
  printf("변수 number의 값 = %d \n", number);
  printf("포인터가 가리키는 값 = %d \n", *p);

  return 0;
}
*/
/*
#include <stdio.h>

int main(void)
{
  int number = 10;
  int* p; //pointer 변수다! 선언

  p = &number;
  printf("변수 number의 값 = %d \n", number);

  *p = 20;// number를 바꾸는 역할을 해준다!!!
  printf("변수 number의 값 = %d \n", number);

  return 0;
}
*/
/*
#include <stdio.h>

int main(void)
{
  char *pc;
  int *pi;
  double *pd;

  pc = (char*)10000;
  pi = (int*)10000;
  pd = (double*)10000;

  printf("증가 전  pc=%d, pi=%d, pd=%d \n", pc, pi, pd);

  printf("증가 후 pc+2=%d, pi+2=%d, pd+2=%d \n", pc+2, pi+2, pd+2);

  return 0;
}
*/
/*
#include <stdio.h>

int main(void)
{
  int number = 10;
  int *p;
  int v = 0;

  p = &number;

  printf("number = %d \n", number);
  printf("변수 number의 주소 = %d \n", &number);
  printf("p = %d \n", p);

  //v = *p++; // *p값을 v에 넣고, *p는 증가 (int이므로 +4)
  //v = (*p)++; // *p값을 v에 넣고, *p(=number 값)를 ++ 
  //v = *++p; //p를 증가시키고(int이므로 +4), 증가된 p가 가리키는 값을 v에 대입
  v = ++ *p; // *p(=number값)를 가져와서, 그 값을 증가해서 v에 대입
  printf("v = %u \n", v);
  printf("p = %u \n", p);
  printf("number = %u \n", number);

  return 0;
}
*/
/*
#include <stdio.h>

void modify(int value)
{
  value = 99;
}

void modify_cbr(int* ptr)
{
  *ptr = 99;
}

int main(void)
{
  int number = 1;

  modify_cbr(&number);
  printf("number = %d \n", number);

  return 0;
}
*/
/*
#include <stdio.h>

void swap(int *px, int *py)
{
  int temp;

  temp = *px;
  *px = *py;
  *py = temp;
}

void swap_cbv(int px, int py)
{
  int temp;

  temp = px;
  px = py;
  py = temp;
}

int main(void)
{
  int a = 100, b = 200;

  printf("swap()호출 전 a= %d, b= %d\n", a, b);

  //swap(&a, &b);
  swap_cbv(a, b);
  
  printf("swap()호출 후 a= %d, b= %d\n", a, b);

  return 0;
}
*/

//int* p = NULL;

#include <stdio.h>

void sub(int* ptr)
{
  printf("%d \n", ptr[10]);
}

int main(void)
{
  int large_data[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

  sub(large_data);
  return 0;
}