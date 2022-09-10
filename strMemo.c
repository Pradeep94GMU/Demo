#include<stdio.h>
#include<stdlib.h>

int main(){
 
 char string[30]="hello";

 for(int i = 0; string[i] != '\0'; i++){
  printf("The char is:%c and the address id : %p\n",string[i],&string[i]);


}



}
