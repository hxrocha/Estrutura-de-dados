#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 7

struct aluno{
	int cod;
	char nome[50];
	float peso;
};

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

void ordenacaoSelecaoPorCodigo(struct aluno *vet){
	int i,j;
	struct aluno aux;

	for(i=0;i<TAM;i++){
		int Pmenor = i;
		for(j=i+1;j<TAM;j++)
			if(vet[j].cod < vet[Pmenor].cod){
				Pmenor = j;
			}
			aux = vet[Pmenor];
			vet[Pmenor] = vet[i];
			vet[i] = aux;
	}
}

void ordenacaoSelecaoPorNome(struct aluno *vet){
	int i,j;
	struct aluno aux;

	for(i=0;i<TAM-1;i++){
		
		int Pmenor = i;
		for(j=i+1;j<TAM;j++)
			if(strcmp(vet[j].nome,vet[Pmenor].nome)<0){
				Pmenor = j;
			}
			aux = vet[Pmenor];
			vet[Pmenor] = vet[i];
			vet[i] = aux;
	}
}

void ordenacaoSelecaoPorPeso(struct aluno *vet){
	int i,j;
	struct aluno aux;

	for(i=0;i<TAM-1;i++){
		int Pmenor = i;
		for(j=i+1;j<TAM;j++)
			if(vet[j].peso < vet[Pmenor].peso){
				Pmenor = j;
			}
			aux = vet[Pmenor];
			vet[Pmenor] = vet[i];
			vet[i] = aux;
	}
}


int main(){

	struct aluno vetor[TAM]={{18,"Hugo",93.6},{27,"Mario",80.5},
					{9,"Joao",65},{6,"Maria",68.9},
					{28,"Pedro",60.6},{20,"Aparecida",67.9},
					{15,"Bruno",100.8}};
	int vetT[TAM]={18,27,9,6,28,20,15};
	ordenacaoTroca(vetT);
	for(int i=0;i<TAM;i++)
		printf("%d ",vetT[i]);
	
	
	//ordenacaoSelecaoPorPeso(vetor);
	//for(int i=0;i<TAM;i++)
	//	printf("\n %d %s %.2f",vetor[i].cod,vetor[i].nome,vetor[i].peso);
}
