#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h>
#include<sys/types.h>
#include<stdint.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>

struct s_cursos{
    unsigned int curso_id;
    double v_p_credito;
    char n_curso[300];
    };

int main(){
    
    struct s_cursos curso;
    int fd;

    while(scanf("%d %lf %s",&curso.curso_id, &curso.v_p_credito, curso.n_curso) != EOF){
        fd = open("cursos.dat", O_WRONLY | O_CREAT | O_APPEND, 0666);
        write(fd, &curso, sizeof(curso));
    }
    close(fd);
    return 0;
}
/*
    fd = open("cursos.dat", O_RDWR);
    if(fd == -1){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }
    lseek(fd, 0, SEEK_SET);
    read(fd, &curso, t_cursos);
    printf("%d\n", curso.curso_id);
    printf("%f\n", curso.v_p_credito);
    printf("%s\n", curso.n_curso);
    close(fd);

}
*/