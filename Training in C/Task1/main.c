#include <stdio.h>
#include <stddef.h>

size_t get_count(const char *s);

/* main test suite */

int main()
{
    printf("TEST SUITE HOW MANY VOWELS ARE IN THE STRING\n");
    printf("abracadabra has: %lu vowel(s)\n", get_count("abracadabra"));
    printf("\" \" has: %lu vowel(s)\n", get_count(""));
    printf("AbrAcAdAbrA has: %lu vowel(s)\n", get_count("AbrAcAdAbrA"));
    printf("1234adabra has: %lu vowel(s)\n", get_count("1234adabra"));
   
    return (0);
}

/* function to count vowel of string */

#include <stddef.h>

size_t get_count(const char *s)
{
    int i = 0;
    int con = 0;
    
    for (i = 0; s[i] != '\0'; i++)
    {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
          con++;
    }
    return (con);
}
