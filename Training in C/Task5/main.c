#include <stdio.h>

void alphabet1();
void alphabet2();
void alphabet3();
void alphabet4();
void alphabet5();
void alphabet6();

/* main test suite */

int main()
{
    
    
    printf("TEST SUITE for using char\n");
    alphabet1();
    printf("\nTEST SUITE for using ASCII\n");
    alphabet2();
    printf("\nTEST SUITE while using char\n");
    alphabet3();
    printf("\nTEST SUITE while using ASCII\n");
    alphabet4();
    printf("\nTEST SUITE for using printf\n");
    alphabet5();
    printf("\nTEST SUITE while using printf\n");
    alphabet6();
 	return 0;
}

/* function to evaluate the last digit of a numnber n*/



void alphabet1()
{
	char lettre;
	
	for (lettre = 'a'; lettre <= 'z'; lettre++)
		putchar(lettre);
	putchar('\n');
	for (lettre = 'A'; lettre <= 'Z'; lettre++)
		putchar(lettre);
	putchar('\n');
 
}

void alphabet2()
{
	char lettre;
	
	for (lettre = 97; lettre <= 122; lettre++)
		putchar(lettre);
	putchar('\n');
		for (lettre = 65; lettre <= 90; lettre++)
		putchar(lettre);
	putchar('\n');
 
}

void alphabet3()
{
	char lettre = 'a';
	
	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;	
	}
	putchar('\n');
	
	lettre = 'A';
	while (lettre <= 'Z')
	{
		putchar(lettre);
		lettre++;	
	}
	putchar('\n');
 
}

void alphabet4()
{
	char lettre = 97;
	
	while (lettre <= 122)
	{
		putchar(lettre);
		lettre++;	
	}
	putchar('\n');
	
	lettre = 65;
	while (lettre <= 90)
	{
		putchar(lettre);
		lettre++;	
	}
	putchar('\n');
 
}

void alphabet5()
{
	char lettre = 97;
	
	while (lettre <= 122)
	{
		printf("%c",lettre);
		lettre++;	
	}
	printf("\n");
	
	lettre = 65;
	while (lettre <= 90)
	{
		printf("%c",lettre);
		lettre++;	
	}
	printf("\n");
 
}

void alphabet6()
{
	char lettre;
	
	for (lettre = 97; lettre <= 122; lettre++)
		printf("%c",lettre);
	printf("\n");
	
	for (lettre = 65; lettre <= 90; lettre++)
		printf("%c",lettre);
	printf("\n");
 
}
