
/*#include<stdio.h>
float farenheit(float temp){
  int far = (temp *9/5)+32;
  return far;
}
int main(){
  float far =farenheit(0);
  printf("%f",far);
}*/
#include<stdio.h>
int fib(int n){
 if(n==0)
return 0;
if(n==1)
return 1;
int fibi = fib(n-1)+fib(n-2);
return fibi;
}
int main(){
  
 for(int i=1;i<=3;i++){
  printf("%d",fib(i));
 }
  return 0;
}