*/ Practica#12						Cruz Martinez Jesus Alberto
    Fecha de entrega: 15 de enero 
*/

//Problema 1 



#include <stdio.h>

//Funcion a utilizar


void ahorros_DelAno();

//Funcion principal
int main(){


//Bloque de instrucciones


	#define LIMITE 12 //12 meses del ano
	float ahorros=0, deposito=0;
	char op='n';
	unsigned int meses=1;


    void ahorros_DelAno();{
	do {


        for (meses=1; meses<=LIMITE; meses++){

            printf("\nBienvenido al programa que genera tus ahorros en 12 meses");
			printf("\nEste deposito es el numero %d", meses);
			printf("\nCuanto dinero depositaras este mes? ");
			scanf("%f", &deposito);
			ahorros+=deposito;
			printf("\nTus ahorros en lo que va de los meses es  %f pesos", ahorros);


            }

		printf("\nSus ahorros totales son: %f ", ahorros);


		printf("\nDesea reiniciar el programa? S/N\n");

		setbuf(stdin, NULL);
		op=getchar();


	} while (op == 'S' || op == 's');
	return 0;
}
}


// ………………………………………………………

//Problema 2 

#include <stdio.h>
//funciona usar
void clasificacion_numeros();

// funcion principal
int main(){




//Declaracion de variables
	char re='n';
    int Mn=0, My=0;
	float np=0;


	void clasificacion_numeros();{

        printf("Bienvenido al programa que genera numeros pares");
// Bloque de instrucciones
	do {
		printf("\nIngrese el numero que deseaclasificar: ");
		scanf("%f", &np);
		np<=0; Mn++ ; My++;

		if (np<=0) {
			printf("\nEl numero es menor o igual a cero");

			printf("\nHasta ahora las cantidades iguales o menores a cero son: %o", Mn);
			printf("\nHasta ahora las cantidades mayores a cero son: %o", My);
		}
		else {
			printf("\nEl numero ingresado es mayor a cero");

			printf("\nHasta ahora las cantidades mayores a cero son: %o", My);
			printf("\nHasta ahora las cantidades iguales o menores a cero son: %o", Mn);
		}

		printf("\nDesea agregar y clasificar otro numero? s/n\n");
		setbuf(stdin, NULL);

		re=getchar();
}
	 while (re == 'n', re == 'm');



	printf("\nLas cantidades menores o iguales a cero totales son: %o", Mn);
	printf("\nLas cantidades mayores a cero totales son: %o", My);

	return 0;

}
}

// …………………………………

//Problema3

#include <stdio.h>


// Funcion a usar


void clasificacion_numeros();

//funcion principal

int main(){


//llamar funcion
	unsigned int cont;
    void clasificacion_numeros();{

	printf("\nEstos son los numeros pares que hay hasta el numero cien");
	printf("\n[ ");


	for (cont=0; cont<100; cont++){


		if (cont%2 == 0){
			printf("%d, ", cont);
			continue;
		}

	}
	if (cont==100)
		printf("%d ", cont);


	printf(" ]\n\n");

	return 0;


}

}
