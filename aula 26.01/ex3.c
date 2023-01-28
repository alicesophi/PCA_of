void multixescalar(int a[3][3], int escalar, int out[3][3]);

int main()
{
    int a[3][3]={{5,5,5},{4,4,4},{3,3,3,}};
    int resul[3][3];
    int fila, coluna;
    multixescalar(a,2, resul);
    for (fila=0;fila<3;fila++){
        printf ("\n");
        for (coluna=0;coluna<3; coluna++){
            printf (" %d", resul[fila][coluna]);
        }
    }
    return 0;
}

void multixescalar(int a[3][3], int escalar, int out[3][3]){
    int fila, coluna;
    for (fila=0;fila<3;fila++){
        for (coluna=0;coluna<3; coluna++){
            out[fila][coluna]= a[fila][coluna]*escalar;
        }
    }
}
