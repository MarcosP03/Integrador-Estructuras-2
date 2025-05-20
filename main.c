#include <stdio.h>
#include <windows.h>

#include "Estructuras.h"
#include "Funciones.h"

int main() {
	int opc;
	long clave;
	
	system("cls");
	printf("\t-- Bienvenido --\t\n \nIntroduza su clave de ingreso: ");
	scanf("%ld", &clave);

	do {
		system("cls");
		printf("Seleccione la seccion en que desea trabajar: \n");
		printf("1. Encuestadores\n");
		printf("2. Encuestas\n");
		printf("3. Procesar Encuestas\n");
		printf("4. Salir\n");
		printf("Opcion: ");
		scanf("%d", &opc);
		switch(opc) {
			case 1:
				opc = 4;
				break;
			case 2:
				opc = 4;
				break;
			case 3:
				opc = 4;
				break;
			case 4:
				printf("\nSaliendo....");
				Sleep(1500);
				break;
			default: 
				printf("\nOpcion Invalida\n");
				break;
		}
	} while(opc != 4);
	
	return 0;
}