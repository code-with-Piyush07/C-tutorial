/*#include<stdio.h>
int main(){
    int age;
    printf("Enter age");
    scanf("%d",&age);
    if(age>=18){
        printf("adult \n");
    }
    else if(age>=13 && age<18){
        printf("teenager \n");
    }
    else{
        printf("child");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int age;
    printf("enter age : ");
    scanf("%d",&age);
    age>=18?printf("adult"):printf("child");
    return 0;}*/
    //switch statement 
 #include<stdio.h>
int main(){
    int day;
    printf("enter day(1-7) : ");
    scanf("%d",&day);
    switch(day){
        case 1 : 
        printf("monday");
        break;
        case 2 : 
        printf("tuesday");
        break;
        case 3 : 
        printf("wednesday");
        break;
        case 4 : 
        printf("thursday");
        break;
        case 5 : 
        printf("friday");
        break;
        case 6 : 
        printf("saturday");
        break;
        case 7 : 
        printf("sunday");
        break;
        default: printf("enter valid");
    }
    return 0;}