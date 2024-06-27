#include<stdio.h>
#include<string.h>

vowelCount(char ch){
	
	int i, count=0;
	
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
		
		count++;
	}
	
	printf("\nVowels Is :- %d", count);
}

main(){

	char str;
	
	printf("Enter any String To find its vowel Character :- ");
	scanf("%s", &str);
	
	vowelCount(str); 
	
}