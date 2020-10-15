#include <stdio.h>
#include <cs50.h> // run in ide.cs50.io or download cs50 lib
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");//MUST IMPORT CS50 TO USE THESE.
    printf("After: ");
    for (int i=0; n = strlen(s); i < n; i++){
        if (s[i] >= 'a' s[i] <= 'z'){
            printf("%c", s[i] -32);
        }
        else {
            printf("%c", s[i]);
        }
    }
    printf("\n")
}