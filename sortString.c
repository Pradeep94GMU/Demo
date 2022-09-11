#include<stdio.h>
#include<string.h>

int main(){

 char string[30][100] = {"Hello", "world", "Pradeep"};
 int length = sizeof(string)/sizeof *(string); 
	char temp[length];
 for(int i = 0; i < length; i++){
    for(int j = 0; j < length; j++){
      if(strcmp(string[i],string[j]) < 0){
	strcpy(temp,string[j]);
         strcpy(string[j],string[i]);
	strcpy(string[i],temp);

}



}


}

 printf("The sorted array : ");
 for(int i = 0; i < length; i++){
     printf("%s ",string[i]);


}



}
