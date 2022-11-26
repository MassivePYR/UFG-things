#include<stdio.h>
#include<stdlib.h>
#define valido 0
#define invalido 1
int i,j,aux;

int main(){
    int sudoku[9][9];
    int somaAll=0, somaLinha=0, somaColuna=0, somaQuadrado=0,trust=0;
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            scanf("%d", &sudoku[i][j]);
        }
    }
    //Teste na força bruta
    int l1=0, l2=0, l3=0, l4=0, l5=0, l6=0, l7=0, l8=0, l9=0;
    int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
    int q1=0, q2=0, q3=0, q4=0, q5=0, q6=0, q7=0, q8=0, q9=0;
    l1=sudoku[0][0]+sudoku[0][1]+sudoku[0][2]+sudoku[0][3]+sudoku[0][4]+sudoku[0][5]+sudoku[0][6]+sudoku[0][7]+sudoku[0][8];
    l2=sudoku[1][0]+sudoku[1][1]+sudoku[1][2]+sudoku[1][3]+sudoku[1][4]+sudoku[1][5]+sudoku[1][6]+sudoku[1][7]+sudoku[1][8];
    l3=sudoku[2][0]+sudoku[2][1]+sudoku[2][2]+sudoku[2][3]+sudoku[2][4]+sudoku[2][5]+sudoku[2][6]+sudoku[2][7]+sudoku[2][8];
    l4=sudoku[3][0]+sudoku[3][1]+sudoku[3][2]+sudoku[3][3]+sudoku[3][4]+sudoku[3][5]+sudoku[3][6]+sudoku[3][7]+sudoku[3][8];
    l5=sudoku[4][0]+sudoku[4][1]+sudoku[4][2]+sudoku[4][3]+sudoku[4][4]+sudoku[4][5]+sudoku[4][6]+sudoku[4][7]+sudoku[4][8];
    l6=sudoku[5][0]+sudoku[5][1]+sudoku[5][2]+sudoku[5][3]+sudoku[5][4]+sudoku[5][5]+sudoku[5][6]+sudoku[5][7]+sudoku[5][8];
    l7=sudoku[6][0]+sudoku[6][1]+sudoku[6][2]+sudoku[6][3]+sudoku[6][4]+sudoku[6][5]+sudoku[6][6]+sudoku[6][7]+sudoku[6][8];
    l8=sudoku[7][0]+sudoku[7][1]+sudoku[7][2]+sudoku[7][3]+sudoku[7][4]+sudoku[7][5]+sudoku[7][6]+sudoku[7][7]+sudoku[7][8];
    l9=sudoku[8][0]+sudoku[8][1]+sudoku[8][2]+sudoku[8][3]+sudoku[8][4]+sudoku[8][5]+sudoku[8][6]+sudoku[8][7]+sudoku[8][8];
    c1=sudoku[0][0]+sudoku[1][0]+sudoku[2][0]+sudoku[3][0]+sudoku[4][0]+sudoku[5][0]+sudoku[6][0]+sudoku[7][0]+sudoku[8][0];
    c2=sudoku[0][1]+sudoku[1][1]+sudoku[2][1]+sudoku[3][1]+sudoku[4][1]+sudoku[5][1]+sudoku[6][1]+sudoku[7][1]+sudoku[8][1];
    c3=sudoku[0][2]+sudoku[1][2]+sudoku[2][2]+sudoku[3][2]+sudoku[4][2]+sudoku[5][2]+sudoku[6][2]+sudoku[7][2]+sudoku[8][2];
    c4=sudoku[0][3]+sudoku[1][3]+sudoku[2][3]+sudoku[3][3]+sudoku[4][3]+sudoku[5][3]+sudoku[6][3]+sudoku[7][3]+sudoku[8][3];
    c5=sudoku[0][4]+sudoku[1][4]+sudoku[2][4]+sudoku[3][4]+sudoku[4][4]+sudoku[5][4]+sudoku[6][4]+sudoku[7][4]+sudoku[8][4];
    c6=sudoku[0][5]+sudoku[1][5]+sudoku[2][5]+sudoku[3][5]+sudoku[4][5]+sudoku[5][5]+sudoku[6][5]+sudoku[7][5]+sudoku[8][5];
    c7=sudoku[0][6]+sudoku[1][6]+sudoku[2][6]+sudoku[3][6]+sudoku[4][6]+sudoku[5][6]+sudoku[6][6]+sudoku[7][6]+sudoku[8][6];
    c8=sudoku[0][7]+sudoku[1][7]+sudoku[2][7]+sudoku[3][7]+sudoku[4][7]+sudoku[5][7]+sudoku[6][7]+sudoku[7][7]+sudoku[8][7];
    c9=sudoku[0][8]+sudoku[1][8]+sudoku[2][8]+sudoku[3][8]+sudoku[4][8]+sudoku[5][8]+sudoku[6][8]+sudoku[7][8]+sudoku[8][8];
    q1=sudoku[0][0]+sudoku[0][1]+sudoku[0][2]+sudoku[1][0]+sudoku[1][1]+sudoku[1][2]+sudoku[2][0]+sudoku[2][1]+sudoku[2][2];
    q2=sudoku[0][3]+sudoku[0][4]+sudoku[0][5]+sudoku[1][3]+sudoku[1][4]+sudoku[1][5]+sudoku[2][3]+sudoku[2][4]+sudoku[2][5];
    q3=sudoku[0][6]+sudoku[0][7]+sudoku[0][8]+sudoku[1][6]+sudoku[1][7]+sudoku[1][8]+sudoku[2][6]+sudoku[2][7]+sudoku[2][8];
    q4=sudoku[3][0]+sudoku[3][1]+sudoku[3][2]+sudoku[4][0]+sudoku[4][1]+sudoku[4][2]+sudoku[5][0]+sudoku[5][1]+sudoku[5][2];
    q5=sudoku[3][3]+sudoku[3][4]+sudoku[3][5]+sudoku[4][3]+sudoku[4][4]+sudoku[4][5]+sudoku[5][3]+sudoku[5][4]+sudoku[5][5];
    q6=sudoku[3][6]+sudoku[3][7]+sudoku[3][8]+sudoku[4][6]+sudoku[4][7]+sudoku[4][8]+sudoku[5][6]+sudoku[5][7]+sudoku[5][8];
    q7=sudoku[6][0]+sudoku[6][1]+sudoku[6][2]+sudoku[7][0]+sudoku[7][1]+sudoku[7][2]+sudoku[8][0]+sudoku[8][1]+sudoku[8][2];
    q8=sudoku[6][3]+sudoku[6][4]+sudoku[6][5]+sudoku[7][3]+sudoku[7][4]+sudoku[7][5]+sudoku[8][3]+sudoku[8][4]+sudoku[8][5];
    q9=sudoku[6][6]+sudoku[6][7]+sudoku[6][8]+sudoku[7][6]+sudoku[7][7]+sudoku[7][8]+sudoku[8][6]+sudoku[8][7]+sudoku[8][8];
    if(l1!=45||l2!=45||l3!=45||l4!=45||l5!=45||l6!=45||l7!=45||l8!=45||l9!=45||c1!=45||c2!=45||c3!=45||c4!=45||c5!=45||c6!=45||c7!=45||c8!=45||c9!=45||q1!=45||q2!=45||q3!=45||q4!=45||q5!=45||q6!=45||q7!=45||q8!=45||q9!=45)
    {
        printf("invalido");
    }else{
        printf("valido");
    }
}