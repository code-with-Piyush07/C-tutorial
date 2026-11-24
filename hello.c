#include<stdio.h>
int main(){
  //int age = 20;
   //int *ptr= &age;
   //int _age = *ptr;
   //printf("%d",_age);
   int price=500;
   int *ptr = &price;
   int **pptr = &ptr;
   printf("%d",**pptr);
  return 0;
}