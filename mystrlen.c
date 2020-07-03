#include<stdio.h>
#define size 35

//Write a function in C to calculate the length of the string using a pointer and test that function in a program. 

int main(){
	
	 char array[size];
	 printf("Enter a word:");
	 scanf("%s",array);
	 
	 my_strlen(array);
	 
	
	return 0;
}

void my_strlen(char *p){
	
	int i,count=0;
	
	for(i=0;p[i]!='\0';i++){
		count++;
	}
	
	printf("Strlen:%d",count);
	

}
