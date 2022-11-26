#include <stdio.h>
int main(){
  int n, grau, ano, sala, andar, bloco;
  char inicial;
  scanf("%d", &n);
  while (n != 0){
    scanf("%d %d %c", &grau, &ano, &inicial);
    if (grau == 1 && ano <= 6){
      bloco = 1;
      switch (ano){
      case 1:
        andar = 1;
        if (inicial <= 'M'){sala = 1;}else{sala = 2;}
        break;
      case 2:
        andar = 1;
        if(inicial <= 'M'){sala = 3;}else{sala = 4;}
        break;
      case 3:
        andar = 2;
        if(inicial <= 'M'){sala = 1;}else{sala = 2;}
        break;
      case 4:
        andar = 2;
        if(inicial <= 'M'){sala = 3;}else{sala = 4;}
        break;
      case 5:
        andar = 3;
        if(inicial <= 'M'){sala = 1;}else{sala = 2;}
        break;
      case 6:
        andar = 3;
        if(inicial <= 'M'){sala = 3;}else{sala = 4;}
        break;
      }
    }else{
      bloco = 2;
      switch (ano){
      case 7:
        andar = 1;
        if(inicial <= 'M'){sala = 1;}else{sala = 2;}
        break;
      case 8:
        andar = 1;
        if (inicial <= 'M'){sala = 3;}else{sala = 4;}
        break;
      case 9:
        andar = 2;
        if(inicial <= 'M'){sala = 1;}else{sala = 2;}
        break;
      case 1:
        andar = 2;
        if (inicial <= 'M'){sala = 3;}else{sala = 4;}
        break;
      case 2:
        andar = 3;
        if(inicial <= 'M'){sala = 1;}else{sala = 2;}
        break;
      case 3:
        andar = 3;
        if(inicial <= 'M'){sala = 3;}else{sala = 4;}
        break;
      }
    }
    printf("Bem vindo(a) a Escola! Suas aulas serao na sala %d do andar %d do bloco %d.\n", sala, andar, bloco);
    n--;
  }
}