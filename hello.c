#include <stdio.h>
int main(){
  char c='*';
  int n;
  printf("enter the number");
  scanf("%d",&n);
  for (int i=0;i<=n;i++){
    for (int j=i;j>=1;j--){
    printf("%c",c);
    }
    printf("\n");
  }

return 0;
}