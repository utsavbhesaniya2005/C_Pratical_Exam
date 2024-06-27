#include<stdio.h>

struct movie{
	
	char title[100];
	char genre[100];
	char language[50];
	
};

main(){
	
	struct movie movie1 = {"Simba", "Action", "Hindi"};
	
	struct movie movie2 = {"Bahubali", "Action, Thriller", "Hindi,Tamil"};
	
	printf("Movie1 Description:\n");
	printf("Movie1 Title :- %s\nMovie1 Genre :- %s\nMovie1 Language :- %s", movie1.title, movie1.genre, movie1.language);

	printf("\n\nMovie2 Description:\n");
	printf("Movie2 Title :- %s\nMovie2 Genre :- %s\nMovie2 Language :- %s", movie2.title, movie2.genre, movie2.language);	
}