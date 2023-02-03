#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    
    int i;
    for (i = 0; i < 100000; i++){
        printf("%d", i);
        
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tempo de execução: %f", cpu_time_used);
    return 0;
}