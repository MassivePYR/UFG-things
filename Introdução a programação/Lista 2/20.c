#include <stdio.h> 

int main(){
    int n,i=0;
    double diff, diffmax, adiff, cont=0, a[3]={0}, b[3]={0};
    scanf("%d", &n);
    while(n--){
        if(cont>0){
            a[0] = b[0];
            a[1] = b[1];
            a[2] = b[2];
            scanf("%lf %lf %lf", &b[0], &b[1], &b[2]);
            for(i=0;i<3;i++){
                adiff=(b[i]-a[i]);
                diff=fabs(adiff);
                if(diff>diffmax){
                    diffmax=diff;
                }
            }i=0;
        }
        if(cont==0){
        scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);
        scanf("%lf %lf %lf", &b[0], &b[1], &b[2]);
        for(i=0;i<3;i++){
                adiff=(a[i]-b[i]);
                diff=fabs(adiff);
                if(diff>diffmax){
                    diffmax=diff;
                }
            }
            cont++;
            i=0;
            n--;
        }
        printf("%.2lf\n", diffmax);
        diffmax=0;
    }
}