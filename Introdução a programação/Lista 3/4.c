#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char numb[1001];
    while(n--){
        int charge = 0;
        scanf("%s", numb);
        getchar();
        if(strlen(numb)==5){
            if(numb[0]=='t'){charge++;}
            if(numb[1]=='h'){charge++;}
            if(numb[2]=='r'){charge++;}
            if(numb[3]=='e'){charge++;}
            if(numb[4]=='e'){charge++;}
            if(charge==4){printf("3\n");}
        }else if(strlen(numb)==3){
            if(numb[0]=='o'&&numb[1]=='n'||numb[0]=='o'&&numb[2]=='e'||numb[1]=='n'&&numb[2]=='e'){
                printf("1\n");
            }
            if(numb[0]=='t'&&numb[1]=='w'||numb[0]=='t'&&numb[2]=='o'||numb[1]=='w'&&numb[2]=='o'){
                printf("2\n");
            }
        }
        charge = 0;
    }
}