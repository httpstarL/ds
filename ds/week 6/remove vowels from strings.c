#include <stdio.h>
int main()
{
    char str[100], result[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        int isVowel = 0;
        switch (str[i])
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                isVowel = 1;
                break;
        }
        if (!isVowel)
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("String without vowels: %s\n", result);
    return 0;
}