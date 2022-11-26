#include <stdio.h>
#include <math.h>

int main(){
    int n, h=1, c1=1, c2, i, k;
    scanf("%d", &n);
    for (k=0; k<n; k++){
        for (i=0; i<h; i++){
            c2 = sqrt(h*h - c1*c1);
            if (h*h == c1*c1 + c2*c2 && c2!=0 && c1<c2){
                printf("hipotenusa = %d, catetos %d e %d\n", h, c1, c2);}
            c1++;}
        h++;
        c1=1;
    }
    return 0;
}