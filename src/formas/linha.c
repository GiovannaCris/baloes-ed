#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <math.h>
#include  "linha.h"


struct linha{
    int id;
    double x;
    double y;
    double x2;
    double y2;
    double g;
    char *cor;
};

                                /*criar linha*/
Linha criarLinha(int id, double x, double y, double x2, double y2,  char *cor){
    struct linha *l = (struct linha *) malloc(sizeof(struct linha));
    l->id = id;
    l->x = x;
    l->y = y;
    l->x2 = x2;
    l->y2 = y2;
    l->g = 0;
    l->cor = cor;
    return l;
    }
    
    /*retornos*/    

/*retorna o id da linha*/
int getLinhaId(Linha linha){
    struct linha *l = (struct linha *) linha;
    return l->id;   
    }
/*retorna a coordenada x da linha*/
double getLinhaX(Linha linha){
    struct linha *l = (struct linha *) linha;
    return l->x;
    }
/*retorna a coordenada y da linha*/
double getLinhaY(Linha linha){
    struct linha *l = (struct linha *) linha;
    return l->y;
    }
/*retorna a coordenada x2 da linha*/
double getLinhaX2(Linha linha){
    struct linha *l = (struct linha *) linha;
    return l->x2;
    }
/*retorna a coordenada y2 da linha*/
double getLinhaY2(Linha linha){
    struct linha *l = (struct linha *) linha;
    return l->y2;
    }
/*retorna o g*/
double getLinhaG(Linha linha){
    struct linha *l = (struct linha *) linha;
    return l->g;
    }
/*retorna a cor da linha*/
char getLinhaCor(Linha linha){
    struct linha *l = (struct linha *) linha;
    return l->cor;
    }

/*definir*/

/*define o id da linha*/
void setLinhaX(Linha linha, double x){  
    struct linha *l = (struct linha *) linha;
    l->x = x;
    }
/*define a coordenada x da linha*/
void setLinhaY(Linha linha, double y){
    struct linha *l = (struct linha *) linha;
    l->y = y;
    }
/*define a coordenada x2 da linha*/
void setLinhaX2(Linha linha, double x2){
    struct linha *l = (struct linha *) linha;
    l->x2 = x2;
    }
/*define a coordenada y2 da linha*/
void setLinhaY2(Linha linha, double y2){
    struct linha *l = (struct linha *) linha;
    l->y2 = y2;
    }
/*define o g*/
void setLinhaG(Linha linha, double g){
    struct linha *l = (struct linha *) linha;
    l->g = g;
    }
/*define a cor da linha*/
void setLinhaCor(Linha linha, char *cor){
    struct linha *l = (struct linha *) linha;
    l->cor = cor;
}