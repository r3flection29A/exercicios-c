#include <stdio.h>
#include <stdlib.h>

int main() {
	char paises[100];
	
	while(1) {
		
		printf("Digite um pais: ");
		fgets(paises);
		
		if(paises == '\0')
			break
		else
			printf("The country is >>> %s\n", paises);
	}
}

