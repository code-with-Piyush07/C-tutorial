// #include<stdio.h>
// #include<math.h>
// int main(){
//     int number;
//     printf("enter a number");
//     scanf("%d",&number);
//     if(number>0){
//         if (number%2==0)
//         {
//             printf("number is even and positive");
        
//         }
//         else printf("number is odd");
        
//     }
//     else if (number<0){
//         printf("number is negative");
//     }
//     else{
//         printf("number is zero");
//     }
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
// int marks;
// printf(" enter number(1-99) : ");
// scanf("%d",&marks);                      marks>=30?printf("pass"):printf("fail");
// if(marks>30 && marks<=100)
// printf("pass");
// else 
// printf("fail");
// return 0;
 #include<stdio.h>
 #include<math.h>
 int main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
      printf("lower case");
      else if (ch>='A'&& ch<='Z')
      printf("upper case");
      else
      printf("enter valid");
      return 0;
 }