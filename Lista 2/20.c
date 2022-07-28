#include <stdio.h> 

int main(){
    int n,diff,diffmax,i;
    scanf("%d", &n);
    while(n--){
        int a[3] = {0}, cont = 0;
        int d[3] = {0};
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        if(cont%2==0){
            d[0] = a[0];
            d[1] = a[1];
            d[2] = a[2];
        }else if(cont%2!=0){
           for(i=0; i<3; i++){
               d[i] = a[i];
            diff= d[0]-a[0];
            if(diffmax<diff){
                diffmax=diff;
            }
        }
    }   
}
}