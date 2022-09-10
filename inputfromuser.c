#include<stdio.h>
#include<stdlib.h>

int main(){

int year;
char xy,yz,za;

printf("Enter the input as Your year of birth\n");
scanf("%d",&year);

printf("Please enter your intials\n");
scanf(" %c %c %c",&xy,&yz,&za);

printf("Hello %c %c %c an year: %d",xy,yz,za,year);

return 0;




}
