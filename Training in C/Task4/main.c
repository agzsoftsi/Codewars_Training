#include <stdio.h>

void last_digit(int n);

/* main test suite */

int main()
{
    
    
    printf("TEST SUITE\n");
    last_digit(629438752);
    last_digit(-748255693);
    last_digit(-1052791662);
    last_digit(491506926);
    last_digit(954249937);
    last_digit(-656565);
    last_digit(652520);
    last_digit(-2520);
    last_digit(809065140);
 	return 0;
}

/* function to evaluate the last digit of a numnber n*/



void last_digit(int n)
{
	int last_d;
	
	last_d = n % 10;
    if (last_d > 5)
    	printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
    else if (last_d == 0)
        printf("Last digit of %d is %d and is 0\n", n, last_d);
    else if (last_d < 6 && last_d != 0)
    	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
 
}
