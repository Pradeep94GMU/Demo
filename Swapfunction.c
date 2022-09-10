#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void swap(char str1[],char str2[]){

 char *temp = (char *)malloc(strlen(str1) *sizeof(char));
 strcpy(temp,str1);
 

 strcpy(str1,str2);
 strcpy(str2,temp);
 


}

int main(){

 char str1[30] = "Hello";
 char str2[30] = "world";
 
 swap(str1,str2);
 
 printf("The value of both the string is : %s and %s",str1,str2);


}

