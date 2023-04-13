#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct circulo{
    int id;
    double x;
    double y;
    double r;
    double g;
    char *corb;
    char *corp;
};
                            /*criar circulo*/
Circulo criarCirculo(int id, double x, double y, double r, char *corb, char *corp){
     struct circulo *c = (struct circulo *) malloc(sizeof(struct circulo));
    c->id = id;
    c->x = x;
    c->y = y;
    c->r = r;
    c->g = 0;
    c->corb = corb;
    c->corp = corp;
    
    return c;
    }
    
    /*retornos*/

/*retorna o id do circulo*/
int getCirculoId(Circulo circulo){
    struct circulo *c = (struct circulo *) circulo;
    return c->id;
    }

/*retorna a coordenada x do circulo*/
double getCirculoX(Circulo circulo){
    struct circulo *c = (struct circulo *) circulo;
    return c->x;
    }
/*retorna a coordenada y do circulo*/
double getCirculoY(Circulo circulo){
    struct circulo *c = (struct circulo *) circulo;
    return c->y;
    }
/*retorna o raio do circulo*/
double getCirculoRaio(Circulo circulo){
    struct circulo *c = (struct circulo *) circulo;
    return c->r;
    }
/*retorna o g*/
double getCirculoG(Circulo circulo){
    struct circulo *c = (struct circulo *) circulo;
    return c->g;
    }
/*retorna a cor de borda*/
char getCirculoCorb(Circulo circulo){
    struct circulo *c = (struct circulo *) circulo;
    return c->corb;
    }
/*retorna a cor de preenchimento*/
char getCirculoCorp(Circulo circulo){
    struct circulo *c = (struct circulo *) circulo;
    return c->corp;
    }

/*difinir*/

/*define o id do circulo*/
void setCirculoId(Circulo circulo, int id){
    struct circulo *c = (struct circulo *) circulo;
    c->id = id;
    }
/*define a coordenada x do circulo*/
void setCirculoX(Circulo circulo, double x){
    struct circulo *c = (struct circulo *) circulo;
    c->x = x;
    }
/*define a coordenada y do circulo*/
void setCirculoY(Circulo circulo, double y){
    struct circulo *c = (struct circulo *) circulo;
    c->y = y;
    }
/*define o raio do circulo*/    
void setCirculoRaio(Circulo circulo, double r){
    struct circulo *c = (struct circulo *) circulo;
    c->r = r;
    }
/*define o g*/
void setCirculoG(Circulo circulo, double g){
    struct circulo *c = (struct circulo *) circulo;
    c->g = g;
    }
/*define a cor de borda*/
void setCirculoCorb(Circulo circulo, char *corb){
    struct circulo *c = (struct circulo *) circulo;
    c->corb = corb;
    }

/*define a cor de preenchimento*/
void setCirculoCorp(Circulo circulo, char *corp){
    struct circulo *c = (struct circulo *) circulo;
    c->corp = corp;
    }

/* outros */


void rotaCirculo(Circulo circulo, double g){
    struct circulo *c = (struct circulo *) circulo;
    c->g = g;
    }
