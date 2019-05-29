#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
 
 float d = 10.56;
 float e = 18.38;
 float* ptrtod;
 float* ptrtoe;

 ptrtod = &d;
 ptrtoe = &e;

 printf("The value of d is %f\n", ptrtod);
 printf("The address of d is %d\n",&d);
 printf("The value of e is %f\n", ptrtoe);
 printf("The address of e is %d\n",&e);

 float temp = *ptrtod;

 *ptrtod = *ptrtoe;

 *ptrtod = temp;

 printf("The value of d is %f\n", ptrtoe);
 printf("The address of d is %d\n",&e);
 printf("The value of e is %f\n", ptrtod);
 printf("The address of e is %d\n",&d);

}
