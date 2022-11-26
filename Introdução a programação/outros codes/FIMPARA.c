#include<stdio.h>
#include<math.h>

int main(){
    int Matriz[3][2]={{5,-3},{1,-3},{3,10}};
    int SL[3]={0};
    int i,j,x=0;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            SL[i]+=Matriz[i][j];
        }
        x=+SL[i];
    }
    printf("%d",x);
}