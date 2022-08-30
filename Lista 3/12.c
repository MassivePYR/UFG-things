#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[6001];
    char *att,*ant,l;
    int size,reps;

    while (fgets(str, 6001, stdin)) {
        reps=0,size=0;
        l='\0';
        att=str;
        ant=NULL;
        while(*att!='\n') {
            if(!ant||*ant==' '&&*att!=' '){
                if (l==tolower(*att))
                    ++size;
                else{
                    if(size>1)
                    ++reps;
                    size=1;
                    l=tolower(*att);
                }
            }
            ant=att;
            ++att;
        }
        if (size>1)
        ++reps;
        printf("%d\n", reps);
    }
    return 0;
}