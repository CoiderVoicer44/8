#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char word[15];
    int count[256] = {0};
    long long result = 1;

    printf("Введіть слово: ");
    scanf("%14s", word);
    int length = (int)strlen(word);

    for (int i = 0; i < length; i++) {
        count[tolower((unsigned char)word[i])]++;
        
        result *= i + 1;
    }

    for (int i = 0; i < 256; i++) {
        long long factorial = 1;
        for (int j = 2; j <= count[i]; j++) {
            factorial *= j;
        }
          result /= factorial;
    }

    printf("Кількість анаграм: %lld", result);
    return 0;
}
