#include <stdio.h>

void main(void){
    int target, source, *m;
   
    source = 10;
    m = &source;
    target  = *m;
   
    printf("%d", target);
}