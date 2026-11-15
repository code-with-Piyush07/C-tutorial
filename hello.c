/*# include<stdio.h>
# include<string.h>
void namaste(){
  printf("namaste");

}
void bonjour(){
  printf("bonjour");
}
int main(){
  char c;
printf("enter i for indian and f for french");
scanf("%c",&c);
if(c='i')
namaste();
else
bonjour();
return 0;
}*/
#include<stdio.h>
int sum(int x,int y){
  return x+y;
}
void printTable(int n){
  for(int i=1;i<=10;i++)
  {
    printf("%d\n",n*i);
  }
}
int main(){
  int a,b;
  
  printf("enter 2 numbers to add :");
  scanf("%d%d",&a,&b);
  int s=sum(a,b);
  printf("sum is : %d",s);
  
  
   printTable(5);
  
  return 0;
}
