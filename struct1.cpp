#include <stdio.h>

struct endereco {
	char rua[100];
	char num[5];
	char cep[9];
};

struct pessoa {
	char nome[100];
	int idade[100];
	struct endereco end;
};

int main() {

	struct pessoa person;
	
	printf("Digite seu nome: \n");
	scanf("%s", person.nome);
	
	printf("Digite sua idade: \n");
	scanf("%s", person.idade);
	
	printf("Digite sua rua: \n");
	scanf("%s", person.end.rua);
	
	printf("Digite o numero da sua casa: \n");
	scanf("%s", person.end.num);
	
	printf("Digite seu CEP: \n");
	scanf("%s", person.end.cep);
	
	printf("\n\n|DADOS|\n"
		   "Nome: %s\n"
		   "Idade: %s\n"
		   "Rua: %s\n"
		   "Numero da casa: %s\n"
		   "CEP: %s\n", person.nome, person.idade, person.end.rua, person.end.num, person.end.cep);
	return 0;
}
