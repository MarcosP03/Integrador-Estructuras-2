#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

typedef struct PilaEncuestas {
	int idEncuesta;
	char denominacion[50];
	int encuestaMes;
	int anio;
	int procesada;
	int cantidadPreguntas;
	struct LESPreguntas* topePreguntas;
	struct LESProcesadas* topeProcesadas;
	struct PilaEncuestas* siguiente;
} PilaEncuestas;

typedef struct LESPreguntas {
	int idEncuesta;
	int idPregunta;
	char pregunta[100];
	float ponderacion;
	struct LECRespuesta* topeRespuestas;
	struct LESPreguntas* siguiente;
} LESPreguntas;

typedef struct LECRespuesta {
	int idRespuesta;
	int idPregunta;
	int NumRespuesta;
	char respuesta[50];
	float ponderacion;
	int elegida;
	struct LECRespuesta* siguiente;
} LECRespuesta;

typedef struct LESProcesadas {
	int idEncuesta;
	long fecha;
	int idEncuestador;
	long idEncuestaRespondida;
	float ponderacion;
	struct LESProcesadas* siguiente;
} LESProcesadas;

typedef struct LESEncuestadores {
	int idEncuestador;
	char NombreEncuestador[50];
	struct LESEncuestadores* siguiente;
} LESEncuestadores;

typedef struct LESGestorIDs {
	int idGestor;
	int idEncuesta;
	int idPregunta;
	int idRespuesta;
	int idEncuestador;
	int idEncuestaProcesada;
	struct LESGestorIDs* siguiente;
} LESGestorIDs;


#endif