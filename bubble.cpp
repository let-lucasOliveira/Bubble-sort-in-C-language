/*
	Name: Bubble.c
	Author: Lucas Oliveira
	Date: 16/10/24 10:10
	Description: Implementação do método de ordenação chamado bubble sort
*/

#include <stdio.h>

main()
{
	int vet [] = {15,98,19,24,98,75,77,31,19,14,25,98,2,173};
	//int vet [] = {15,19,24,98,173};//,98,75,77,31,173,14};
	int i, fim, aux, comp, trocas;
	int n = sizeof(vet)/sizeof(int); // Retorna quantos elementos ha neste vetor
	fim = n-1; aux = 0;
	trocas = 0;
	comp = 0;

	printf("Tamanho do vetor: %d", n);

	printf("\n\nVetor DESORDENADO:\n");
	for(i = 0; i < n; i++){
		printf("%d|", vet[i]);
	}
	do
	{
		for(i = 0; i < fim; i++)
		{
			comp++;
			if(vet[i] < vet[i+1]) // Define se o algoritmo é crescente ou decrescente
			{
				aux = vet[i];
				vet[i] = vet[i+1]; // A posição anterior que estava com o valor maior que o valor do seu sucessor recebe o maior valor
				vet[i+1] = aux;
				trocas++;
			}
		}
		fim--; // Redução da quantidade de posições de array que o algoritmo deverá investigar
	} while (fim != 0);

	
	printf("\n\nVetor ORDENADO pelo Bubble sort:\n");
	for(i = 0; i < n; i++){
		printf("%d|", vet[i]);
	}

	printf("\n\n=======> Qtde de Comparacoes: %d", comp);
	printf("\n\n=======> Qtde de Trocas: %d", trocas);
}
