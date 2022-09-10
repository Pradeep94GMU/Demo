#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

 char string[30];
 int length;

 printf("enter the string which want to see on the screen: ");
 fgets(string,sizeof(string),stdin);
 length = strlen(string);

 printf("The length of the string is: %d and the string is: %s",length,string);

}
