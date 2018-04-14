#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void whatever(struct Book a);

struct Book
{
	char title[50];
	char author[51];
	float price;
	int year;
}lotr,hp;

int main()
{
	strcpy(lotr.author, "J.R.R.Tolkien");
	strcpy(lotr.title, "The Two Towers");
	lotr.price = 40.99;
	lotr.year = 1950;
	printf("\n");
	strcpy(hp.author, "Rowlin");
	strcpy(hp.title, "Harry Potter");
	hp.price = 19.3;
	hp.year = 2000;
	
	whatever(lotr);
	whatever(hp);
}

void whatever(struct Book a)
{
	printf("Title : %s\n", a.title);
	printf("Author : %s\n", a.author);
	printf("Price : %.1f\n", a.price);
	printf("Year : %d\n", a.year);
}
