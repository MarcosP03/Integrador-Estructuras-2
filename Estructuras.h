#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

typedef struct ProcesadasLES {
	int idEncuesta;
	long fecha;
	int idEncuestador;
	long idEncuestaRespondida;
	float ponderacion;
	struct ProcesadasLES* siguiente;
};




#endif