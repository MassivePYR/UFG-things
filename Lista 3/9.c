#include<stdio.h>
#include<string.h>
int i,j;

int main(){
    int cases, start, finish;
    char str[500];
    scanf("%d", &cases);
    while(cases--){
        scanf("%d %d", &start, &finish);
        for(i=start;i<finish;i++){
            strcat(i, str);
            }
            printf("%s", str);
            for(j=finish;j<start;j--){
                printf("%c", str[j]);
            }
            printf("\n");
        }
    }
