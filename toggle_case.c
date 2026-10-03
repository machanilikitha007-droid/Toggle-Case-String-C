#include <stdio.h>

int main()
{
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] + 32;
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 32;
        }
    }

    printf("After toggling case: %s", text);

    return 0;
}
