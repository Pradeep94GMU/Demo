#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

 char allString[100];
 char firstStr[18]={'P','R','A','D','E','E','P','\0'};
 char secStr[] = {'R','A','N','J','A','N'};

 printf("Length of first String is:%lu and String name is:%s\n",strlen(firstStr),firstStr);
 printf("length of 2nd string is : %lu and String name is:%s\n",strlen(secStr),secStr);

 strcpy(allString,firstStr);
 strcat(allString,secStr);

 printf("The new String size is %lu and string is:%s\n",strlen(allString),allString);
 
 //now i have to take input from user which can be added later into the all string
 char userString[30]; 
printf("Enter a string:");
 fgets(userString,sizeof(userString),stdin);
 
//Now i will compy the string into allString
 strcat(allString,userString);

 printf("The final new String size is %lu and string is : %s",strlen(allString),allString);
 

 
}
