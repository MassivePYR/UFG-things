#include<stdio.h>
#include<string.h>
 
int main(){
    int n,leds=0,i=0;
    scanf("%d", &n);
        char s1[1000000];
        while(n--){
        scanf("%s", s1);
        i=strlen(s1);
        for(i=0;i<strlen(s1);i++){
        switch (s1[i]){
            case '0':
                leds+=6;
                break;
            case '1':
                leds+=2;
                break;
            case '2':
                leds+=5;
                break;
            case '3':
                leds+=5;
                break;
            case '4':
                leds+=4;
                break;
            case '5':
                leds+=5;
                break;
            case '6':
                leds+=6;
                break;
            case '7':
                leds+=3;
                break;
            case '8':
                leds+=7;
                break;
            case '9':
                leds+=6;
                break;
            default:
                leds+=0;
                break;
            }
        }
        printf("%d leds\n", leds);
        leds=0;
    }
}