#include<stdio.h>

leap(int leap){
	
	if(leap % 4==0){
		
		printf("\nYear Is Leap Year.");
	}else{
		
		printf("\nYear Is Not a Leap Year.");
	}
	
}

main(){
	
	int year;
	
	printf("Enter Year to Find It is Leap Year Or Not :- ");
	scanf("%d", &year);
	
	leap(year);
	
}