#include<stdio.h>
#include<string.h>
void alternador(char *c1, char *c2, char *c3){
    int i,j,k;
    i=j=k=0;
    while(c1[i]!='\0' && c2[j]!='\0'){
        c3[k++]=c1[i++];
        c3[k++]=c2[j++];
    }
    if(c1[i]!='\0'){
        while(c2[j]!='\0'){
            c3[k++]=c2[i++];
        }
    }else{
        while(c1[i]!='\0'){
            c3[k++]=c1[i++];
        }
    }
    c3[k]='\0';
}

int main(){
    int i, j, qnts,maior;
    char str[51], str2[51], str3[101];
    scanf("%d", qnts);
    getchar();
    while(qnts--){
    scanf("%s", str);
    scanf("%s", str2);
    alternador(str, str2, str3);
    printf("%s\n", str3);
    }
    return 0;
}