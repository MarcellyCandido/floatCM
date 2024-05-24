#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	float n1,n2, resultado;
	char operador;
        printf("\t\tCALCULADORA\t\t");
	printf("\n Digite um numero") 
		scanf("%f",&n1)

		printf("\n Digite outro numero")
		scanf("%f",&n2)

		printf("\n Digite um operador")
		scanf("%s", &operador)

	 	if (operador='*')
			resultado=n1*n2;
	printf("\n O resultado é: %f", resultado)

		else{
			if(operador='+')
				resultado=n1+n2;
			printf("\n O resultado é: %f", resultado)

		}

	else{
		if(operador='-')
			resultado=n1-n2;
		printf("\n O resultado é: %f", resultado)
	}
	else{
		if(operador='/')
			resultado=n1/n2;
		prinft("\n O resultado é: %f", resultado)


}
