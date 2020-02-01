#include <stdio.h>
#include <stdbool.h>

bool solution(const char *string, const char *ending);

/* main test suite */

int main()
{
    // expected test1 1, test2 0, test3 1, test4 1, test5 1, test6 0
    
    int v;
    
    printf("TEST SUITE STRING ENDS WITH\n");
    v = solution("abc", "bc");
    printf("Test 1: %d\n", v);
    v = solution("abc", "d");
    printf("Test 2: %d\n", v);
    v = solution("abc", "");
    printf("Test 3: %d\n", v);
    v = solution("asdfghjkl", "");
    printf("Test 4: %d\n", v);
    v = solution("carlos", "arlos");
    printf("Test 5: %d\n", v);
    v = solution("garcia", "garcias");
    printf("Test 6: %d\n", v);
 	return 0;
}

/* function to COMPARE THE END OF STRING */

#include <stddef.h>

bool solution(const char *string, const char *ending)
{
    int con1 = 0, con2 = 0, con3 = 0, temp = 0;
    
    
    if (*ending == '\0')
      {
        return true;
      }
    else
      {
      
        for (con1 = 0; string[con1] != '\0'; con1++)
             ;
        
        for (con2 = 0; ending[con2] != '\0'; con2++)
             ;    
        temp = con2;
        
        if (con2 > con1)
            {
                return false;
            }
        else
            {
                for (con2; con2 > 0; con2--, con1--)
                    {
                        if (string[con1 - 1] == ending[con2 - 1])
                            con3++;
            
                    }
                if (temp == con3)
                        return true;
                else
                        return false;
            
            }
        }
}
