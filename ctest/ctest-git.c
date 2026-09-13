#include <stdio.h>
int main()
{
    char word[1000];
    printf("Hello world!");
    printf("\nEnter your favorite word: ");
    gets(word);
    printf("Your favorite word is %s.", word);
    return 0;
}