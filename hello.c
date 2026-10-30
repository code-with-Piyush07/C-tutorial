/*#include<stdio.h>
int main(){
  for(int i = 1;i<=5;i++){
  printf("%d \n",i);
}
return 0;
}

#include<stdio.h>
int main(){
  int i = 1;
  while(i<=5){
    printf("%d",i);
    i++;
}
return 0;
}
#include<stdio.h>
int main(){
  int n,i=0;
  printf("Enter a value");
  scanf("%d",&n);
  while(i<=n){
    printf("%d \n",i);
    i++;
  } 
  return 0;
}
#include<stdio.h>
int main(){
  
  int sum=0;
  int n;
  printf("Enter a number :");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    sum = sum + i;
  }
  
  printf(" the number  is %d ",sum);
  for(int i=n;i>=1;i--){
    printf("%d",i);

  }

}*/
#include<stdio.h>
int main(){
  int n;
  printf("enter a number ");
  scanf("%d",&n);
  for(int i =1;i<=10;i++)
 {
  printf("%d \n",i*n);
 } 
 return 0;
}