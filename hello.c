/*#include <stdio.h>
void calculatePrice(float price ){
   float value= price + (0.18)*price;
   printf("value is  %f\n",value);
}
int main(){
  float price = 100;
  calculatePrice(price);
  printf("%f",price);
  return 0;
}
#include <stdio.h>
#include<math.h>
// int main(){
//   int n =10;
//   printf("%f",pow(n,2));
//   return 0;
// }
void areasq(float a){
  float area = pow(a,2);
  printf("area of square is %f \n",area);

}
void arearec(int a ,int  b){
  int area = a*b;
  printf("area of rectangle %d \n",area);

}
void areacircle(int radius){
  float area = 3.14*radius*radius;
  printf("area of circle is %f \n",area);

}
int main(){
  areasq(4);
  arearec(3,4);
  areacircle(2);
  return 0;
}
#include<stdio.h>
void printHW(int count){
  if(count==0){
    return;

  }
  printf("hello world");
  printHW(count - 1);
}
int main(){
  printHW(5);
  return 0;
}
#include<stdio.h>
int sum(int n){
 if(n==1){
  return 1;
 }
 int sumn1 =sum(n-1);
  int sumn = sumn1 + n;
  return sumn;
  
  
}
int main (){
 printf("sum is %d",sum(5));
  return 0;
}*/
#include<stdio.h>
int factorial(int n){
  if(n == 1){
    return 1;
  }
 int factorial1= factorial(n-1);
int factorial2 = factorial1*n;
return factorial2;

}
int main(){
  printf("%d",factorial(5));
  return 0;
}