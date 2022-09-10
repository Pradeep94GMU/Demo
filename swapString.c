#include<string.h>
#include<stdio.h>

int main(){

 char *str1 = "Hello";
 char *str2 = "World";

 char *temp = str1;
 
 str1 = str2;
 str2 = temp;
 
 printf("Both strings are \n1: %s\n2: %s",str1,str2);


}
