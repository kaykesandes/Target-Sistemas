#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str)
{
    unsigned int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

void invString(char str[])
{
    int x = 0;
    int y = ft_strlen(str) - 1;
    char temp;

    while (x < y)
    {
        temp = str[x];
        str[x] = str[y];
        str[y] = temp;
        x++;
        y--;
    }
}

int main(int argc, char const *argv[])
{
    char str[100];
    printf("Escreva uma str: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    invString(str);
    printf("String invertida: %s\n", str);

    return 0;
}
