#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int freq[10] = {0};
    int count = 0;
    char c = '0';
    printf("Enter a sentence:\n");
    fgets(s, 100, stdin);
    printf("Frequency of digits is:\n");
    for(int i = 0; i<10; i++){
        for (int j = 0; j < 10; j++){
            if (s[j] == c){
                count++;
            }
        }
        printf("%d ", count);
        count = 0;
        c++;
    }

    return 0;
}
