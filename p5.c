#include<stdio.h>

swap(int *p, int *q){
	
	int temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
	
	printf("\nAfter Swapping Value Of A :- %d", *p);
	
	printf("\nAfter Swapping Value Of B :- %d", *q);
	
}

main(){
	
	int a, b;
	
	printf("Enter Value Of A To Swap :- ");
	scanf("%d", &a);
	
	printf("\nEnter Value Of B To Swap :- ");
	scanf("%d", &b);
	
	swap(&a,&b);
	
}