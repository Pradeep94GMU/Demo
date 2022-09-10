#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

 char string[30];
 char preDef[] = "hello";
 
 strcpy(string,preDef);

 printf("we have already given a string in file: %s:",preDef);
 printf("The new data: %s ",string);

 strcat(string," World");
 printf("\nThe new data: %s ",string);

}
