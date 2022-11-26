#include <stdio.h>
#include <string.h>
#include <math.h>

int i, j;
void vs (char *, char*);
void vvog (char*, int *);
int main (){

    char s[2001];
    char s1[1001]={'\0'}, s2[1001]={'\0'};
    int con = 0, ipv;
    int indexs2 = 0;
    scanf("%[^\n]", s);
    for(i=0; i<strlen(s); i++){
        if(s[i]==';'){
            con++;
            ipv=i;
        }
    }
    if(con>1||con==0){
        printf("FORMATO INVALIDO!");
        return 0;
    }
    for(i=0; i<ipv; i++){
        s1[i] = s[i];
    }
    for(i=ipv+1; i<strlen(s); i++){
        s2[indexs2++] = s[i];
    }
    vs(s1, s2);
}

void vs(char *s1, char *s2){
    int v1[5], v2[5];
    double v3[5], valor = 0;
    for(i=0; i<5; i++){
        v1[i] = 0;
        v2[i] = 0;
    }
    vvog(s1, v1);
    vvog(s2, v2);
    for(i=0; i<5; i++){
        v3[i] = pow(((double)v1[i]-(double)v2[i]), 2);
    }
    for(i=0; i<5; i++){
        valor+=v3[i];
    }
    printf("%.2lf", sqrt(valor));
}

void vvog (char *S, int *V){
    for(i=0; i<strlen(S); i++){
        switch(S[i]){
            case 97:   V[0]++;
            break;
            case 65:   V[0]++;
            break;

            case 101:   V[1]++;
            break;   
            case 69:   V[1]++;
            break; 

            case 105:   V[2]++;
            break;
            case 73:   V[2]++;
            break;

            case 111:   V[3]++;
            break;
            case 79:   V[3]++;
            break;

            case 117:   V[4]++;
            break;
            case 85:   V[4]++;
            break;
        }
    }
    printf("(");
    for(i=0; i<5; i++){
        printf("%d", V[i]);
        if(i<4){
            printf(",");
        }
    }
    printf(")\n");
}