#include <stdio.h>
#include <stdbool.h>
bool is_prime(int num);

/* main test suite */
int main()
{
    printf("TEST SUITE <1> if is Prime - <0> if isn't\n");
    printf("0 is Prime: %d\n", is_prime(0));
    printf("-1 is Prime: %d\n", is_prime(-1));
    printf("5 is Prime: %d\n",is_prime(5));
    printf("1 is Prime: %d\n",is_prime(1));
    printf("3 is Prime: %d\n",is_prime(3));

    return (0);
}

/* function to evaluate if is or not isn't a prime number */

bool is_prime(int num)
{
    int con = 0;
    int i = 0;
    if (num > 0)
    {
        for(i = 1; i <= num; i++)
        {
          if(num%i==0)
            con++;
        }
    }
    else
    {
      return false;
    }
    
    if(con == 2)
      return true;
    else
      return false;
}
