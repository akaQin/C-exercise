#include <stdio.h>

#define TRUE 1
#define FALSE 0

void squeeze(char s1[], char s2[])
{
    int i, j, k;
    for (i = k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++) {

        }
        if (s2[j] == '\0') {
            s1[k++] = s1[i];
        }
        s1[k] = '\0';
    }
}

int main(int argc, char **argv)
{
    squeeze(argv[1], argv[2]);
    printf("%s\n", argv[1]);
}
