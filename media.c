# include <stdio.h>
int main () {
    int opcao;
    float nota1, nota2, nota3, media;

printf("***** MENU GERENCIAMENTO DO ESTUDANTE *****\n\n");
printf("1. Calcular a média: \n");
printf("2. Determinar Status: \n");
printf("3. Sair\n ");
printf("Escolha uma opção: ");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("### CALCULAR A MÉDIA ###\n");
    printf(" Infome sua primera nota: \n");
    scanf("%f", &nota1);
    printf(" Infome sua segunda nota: \n");
    scanf("%f", &nota2);
    printf(" Infome sua terceira nota: \n");
    scanf("%f", &nota3);
    // Valitando notas entre 0 a 10
        if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) && (nota3 >= 0 && nota3 <= 10)){
        media = (nota1 + nota2 + nota3) / 3;
        printf("A média é %.2f\n", media);
    } else {
        printf("Valores Invalidos!\n");
    }
    break;
case 2:
    printf("\n### Determinar Status do Aluno ###\n");
    printf("Informe a média: ");
    scanf("%f", &media);
    media >= 5 ? printf("APROVADO!!!\n") : printf("REPROVADO!!!\n");
    break;
case 3:
    printf("\nSaindo do Programa\n");
    break;
default:
    printf("\nOpção inválida\n");
    break;
}

    return 0;
}
