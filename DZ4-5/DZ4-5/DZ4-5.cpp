//Дана строка символов. Удалить из нее все слова нечетной длины. Слова отделяются друг от друга одним пробелом.

#include <stdio.h>
#include <string.h>


int main(void) 
{
    const int SIZE = 40;
    char str[SIZE];
    char newstr[SIZE];
    char* tr = NULL;
    fgets(str, SIZE, stdin);
    newstr[0] = '\0';
    tr = strtok(str, " ");
    while (tr)
    {
        if (strlen(tr) % 2 == 0) 
        {
            strcat(newstr, tr);
            strcat(newstr, " ");
        }
        tr = strtok(NULL, " ");
    }
    puts(newstr);
    return 0;
}