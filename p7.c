#include<stdio.h>

main(){
	
	FILE *fptr1, *fptr2;
	
	fptr1 = fopen("./source.txt", "r");
	
	if(fptr1==NULL){
		printf("Error");
	}
	
	fclose(fptr1);
	
	fptr2 = fopen("./destination.txt", "w");
	
	fputs("Hello World", fptr2);
	
	fclose(fptr2);
	
}