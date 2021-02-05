#include <stdio.h>

int main()
{
    printf("Vowel OR Consonant ?\n\n");
    char alpha;
    printf("Enter a alphabet: ");
    scanf("%c",&alpha);
    switch (alpha)
    {
        case 'a':
            printf("Given alphabet is a VOWEL");
            break;
        case 'A':
            printf("Given alphabet is a VOWEL");
            break;
        case 'e':
            printf("Given alphabet is a VOWEL");
            break;
        case'E':
            printf("Given alphabet is a VOWEL");
            break;
        case 'i':
            printf("Given alphabet is a VOWEL");
            break;
        case 'I':
            printf("Given alphabet is a VOWEL");
            break;
        case 'o':
            printf("Given alphabet is a VOWEL");
            break;
        case 'O':
            printf("Given alphabet is a VOWEL");
            break;
        case 'u':
            printf("Given alphabet is a VOWEL");
            break;
        case 'U':
            printf("Given alphabet is a VOWEL");
            break;
        default:
            printf("Given alphabet is a CONSONANT");
            break;
    }
    return 0;
}