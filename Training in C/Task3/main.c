#include <stdio.h>

void nature_of_number(int n);

/* main test suite */

int main()
{
    
    
    printf("TEST SUITE\n");
    nature_of_number(123654789);
    nature_of_number(-96523478);
    nature_of_number(0);
    nature_of_number(65);
    nature_of_number(-0);
    nature_of_number(-656565);
    nature_of_number(0);
    nature_of_number(852);
 	return 0;
}

/* function to evaluate a numnber n is es positive, negative or zero */



void nature_of_number(int n)
{
    if (n > 0)
    	printf("%d is Positive\n", n);
    if (n == 0)
        printf("%d is Zero\n", n);
    else if (n < 0)
    	printf("%d is Negative\n", n);
 
}
