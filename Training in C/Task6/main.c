#include <stdio.h>

void combin1();
void combin2();
void combin3();
void combin4();
void combin5();

/* main test suite */

int main()
{
    
    
    printf("TEST SUITE for using int and putchar\n");
    combin1();
    printf("\nTEST SUITE for using ASCII and putchar\n");
    combin2();
    printf("\nTEST SUITE while using int and putchar\n");
    combin3();
    printf("\nTEST SUITE while using ASCII and putchar\n");
    combin4();
    printf("\nTEST SUITE for using printf\n");
    combin5();
 
 	return 0;
}

/* function to evaluate the last digit of a numnber n*/



void combin1()
{
	int n;
	
	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');

 
}

void combin2()
{
	char n;
	
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');
 
}

void combin3()
{
	int n = 0;
	
	while (n <= 9)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	
	putchar('\n');
 
}

void combin4()
{
	char n = 48;
	
	while (n <= 57)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	
	putchar('\n');
 
}


void combin5()
{
	int n;
	
	for (n = 0; n <= 9; n++)
	{
		printf("%d",n);
		if (n < 9)
			printf(", ");
	
	}
	
	printf("\n");
	

}
