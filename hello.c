/* #include<stdio.h>
int main(){
  int n;
  do{
  printf("Enter a num :");
  scanf("%d",&n);
  printf("%d",n);
if(n%2!=0){
  break;
}
  }while(1);
  return 0;
}
#include<stdio.h>
int main(){
  for(int i=1;i<=10;i++){
    if(i==6){
      continue;
    }
    printf("%d \n",i);
  }
  return 0;
}
#include<stdio.h>
int main(){
  int n,d;
  printf("Enter a num :");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
     d=n(n-i);
    

     printf("%d",d);
    
  }
  return 0;
}*/

#include<stdio.h>
int main(){
  int sum=5;
  for(int i=6;i<=50;i++){
    sum=sum+i;
    
  }
  printf("sum is %d",sum);
  return 0;
}