#include<stdio.h>
#include<math.h>

main(){

    float salarioAtual, salarioNovo;
    int tempoServico;

    printf("Digite seu salario: ");
    scanf("%f", &salarioAtual);

    printf("Digite seu tempo de servico em anos: ");
    scanf("%d", &tempoServico);

    if (salarioAtual <= 500 && tempoServico < 1) {

        salarioNovo = salarioAtual + (salarioAtual * 0.25);
        printf("Seu novo salario e: %.2f", salarioNovo);

    } else if (salarioAtual <= 1000 && tempoServico >= 1 && tempoServico <= 3) {

        salarioNovo = salarioAtual + (salarioAtual * 0.2) + 100;
        printf("Seu novo salario e: %.2f", salarioNovo);

    } else if (salarioAtual <= 1500 && tempoServico >= 4 && tempoServico <= 6) {

        salarioNovo = salarioAtual + (salarioAtual * 0.15) + 200;
        printf("Seu novo salario e: %.2f", salarioNovo);

    } else if (salarioAtual <= 2000 && tempoServico >= 7 && tempoServico <= 10) {

        salarioNovo = salarioAtual + (salarioAtual * 0.1) + 300;
        printf("Seu novo salario e: %.2f", salarioNovo);
    
    } else if (salarioAtual > 2000 && tempoServico >= 10) {

        salarioNovo = salarioAtual + 500;
        printf("Seu novo salario e: %.2f", salarioNovo);

    } else {

        printf("Voce nao tem direito a reajuste");
        
    }


}
    



