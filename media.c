# include <stdio.h>
int main () {
float nota1, nota2, nota3, media;

printf("***** Calculo da média *****\n");

printf(" Infome sua primera nota: \n");
scanf("%f", &nota1);
printf(" Infome sua segunda nota: \n");
scanf("%f", &nota2);
printf(" Infome sua terceira nota: \n");
scanf("%f", &nota3);

media = (float)(nota1 + nota2 + nota3) / 3;

printf("Sua média é: %.1f\n", media);

    return 0;
}
