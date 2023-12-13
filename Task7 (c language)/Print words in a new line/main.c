#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    printf("Enter a sentence:\n");
    fgets(s, 100, stdin);
    printf("Words of sentence are:\n");
    for(int i = 0; s[i]!='\0'; i++){
        if(s[i] == ' '){
            printf("\n");
        }
        else{
            printf("%c", s[i]);
        }
    }
    return 0;
}
