#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[256] = {0};
    fgets(input, sizeof(input), stdin);

    int cetnost[26] = {0};

    for(int i = 0; i < 256; i++)
    {
        cetnost[input[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if (cetnost[i])
            printf("Cetnost znaku %c je %d.\n", i + 'a', cetnost[i]);
    }

    return 0;
}
