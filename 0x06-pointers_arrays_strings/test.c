#include <stdio.h>
#include "main.h"
#include "3-strcmp.c"
void test_strcmp(char *s1, char *s2)
{
    int result = _strcmp(s1, s2);

    if (result < 0)
    {
        printf("'%s' comes before '%s' alphabetically\n", s1, s2);
    }
    else if (result > 0)
    {
        printf("'%s' comes after '%s' alphabetically\n", s1, s2);
    }
    else
    {
        printf("'%s' and '%s' are the same\n", s1, s2);
    }
}

int main()
{
    test_strcmp("abc", "def");  // Outputs: 'abc' comes before 'def' alphabetically
    test_strcmp("def", "abc");  // Outputs: 'def' comes after 'abc' alphabetically
    test_strcmp("abc", "abc");  // Outputs: 'abc' and 'abc' are the same
    test_strcmp("abc", "ABC");  // Outputs: 'abc' comes after 'ABC' alphabetically
    test_strcmp("abc", "abcd");  // Expected output: 'abc' comes before 'abcd' alphabetically
    test_strcmp("abc!", "abc@");  // Expected output: 'abc!' comes before 'abc@' alphabetically
test_strcmp("a b c", "a  b  c");  // Expected output: 'a b c' comes before 'a  b  c' alphabetically
test_strcmp("abc1", "abc2");  // Expected output: 'abc1' comes before 'abc2' alphabetically
test_strcmp("a1b2c3", "a1b2c3d");  // Expected output: 'a1b2c3' comes before 'a1b2c3d' alphabetically

    return 0;
}

