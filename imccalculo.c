#include <stdio.h>

float calculaimc(){
	float peso, altura, imc;
	
	printf("\nPeso: ");
	scanf("%f", &peso);
	
	printf("\nAltura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	return imc;
}

int main (){
	float imcideal = calculaimc();
	
if (imcideal < 18.5) printf("\nIMC = %.2f, esta abaixo do peso.", imcideal);
else if	(imcideal < 24.9) printf("\nIMC = %.2f, esta com o peso ideal.", imcideal);
else printf("\nIMC = %.2f, esta acima do peso.");

return 0;
	
	
}
