#include <stdio.h>

int main (void)
{
    //redefinição do tipo float como nota
    typedef float nota;

    //declarando as variáveis usando o tipo de dados renomeado
    nota prova1 = 0, prova2 = 0, media = 0;

    printf ("Informe a nota da primeira prova: ");
      scanf ("%f", &prova1);

    printf ("Informe a nota da segunda prova: ");
      scanf ("%f", &prova2);

    media = (prova1 + prova2) / 2;

    printf ("Media do aluno: %.2f\n", media);

    return 0;
}
