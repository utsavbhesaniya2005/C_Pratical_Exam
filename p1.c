#include<stdio.h>
main(){
	
	int a, i, fact=1;
	
	printf("Enter Number To Find Factorial :- ");
	scanf("%d", &a);
	
	for(i=1;i<=a;i++){
		
		fact = fact*i;	
		
	}
	
	printf("\nFactorial Of Given Number Is :- %d", fact);
	
}