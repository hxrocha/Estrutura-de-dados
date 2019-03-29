#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100000


void ordenacaoTroca(int *vet){
	int i,aux,troca;
	do{
	troca=0;
	for(i=0;i<TAM-1;i++){
		if(vet[i]>vet[i+1]){
			aux = vet[i];
			vet[i]=vet[i+1];
			vet[i+1]=aux;
			troca = 1;
		}
	}
	}while(troca);	
}

void ordenacaoSelecao(int *vet){
	int i,j,aux;
	for(i=0;i<TAM-1;i++){
		
		int Pmenor = i;
		for(j=i+1;j<TAM;j++)
			if(vet[j] < vet[Pmenor]){
				Pmenor = j;
			}
			aux = vet[Pmenor];
			vet[Pmenor] = vet[i];
			vet[i] = aux;
	}
}


void quicksort(int *vet,int ivet,int fvet){
	int i,j,aux,pivo;
	i = ivet;
	j = fvet;
	pivo = vet[(ivet+fvet)/2];
	while(i<=j){
		while(vet[i]<pivo)
			i++;
		while(vet[j]>pivo)
			j--;
		if(i<=j){
			aux = vet[i];
			vet[i]=vet[j];
			vet[j]=aux;
			i++;
			j--;	
		}

	}
	if(j>ivet)
		quicksort(vet,ivet,j);
	if(i<fvet)
		quicksort(vet,i,fvet);

}


int main(){


	int vetor[TAM];
	//srand(time(NULL));
	for(int i=0;i<TAM;i++)
		vetor[i] = rand();
	clock_t begin = clock();
	//ordenacaoSelecao(vetor);
		quicksort(vetor,0,TAM-1);
	clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Tempo de execucao : %f\n",time_spent);
	
	
	
}
