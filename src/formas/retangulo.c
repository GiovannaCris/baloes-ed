#include "retangulo.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct retangulo{
    int id;
    double x;
    double y;
    double w;
    double h;
    double g;
    char *corb;
    char *corp;
};

                                    /*criar retangulo*/  
Retangulo criarRetangulo(int id, double x, double y, double w, double h, char *corb, char *corp){
    struct retangulo *r = (struct retangulo *) malloc(sizeof(struct retangulo));
    r->id = id;
    r->x = x;
    r->y = y;
    r->w = w;
    r->h = h;
    r->g = 0;
    r->corb = corb;
    r->corp = corp;
    
    return r;
    }
    
    /*retornos*/

/*retorna o id do retangulo*/
int getRetanguloId(Retangulo retangulo){
    struct retangulo *r = (struct retangulo *) retangulo;
    return r->id;
    }

/*retorna a coordenada x do retangulo*/
double getRetanguloX(Retangulo retangulo){
    struct retangulo *r = (struct retangulo *) retangulo;
    return r->x;
    }
/*retorna a coordenada y do retangulo*/
double getRetanguloY(Retangulo retangulo){
    struct retangulo *r = (struct retangulo *) retangulo;
    return r->y;
    }
/*retorna a largura do retangulo*/
double getRetanguloW(Retangulo retangulo){
    struct retangulo *r = (struct retangulo *) retangulo;
    return r->w;
    }
/*retorna a altura do retangulo*/
double getRetanguloH(Retangulo retangulo){
    struct retangulo *r = (struct retangulo *) retangulo;
    return r->h;
    }
/*retorna a cor de preenchimento do retangulo*/
char *get_retangulo_corb(Retangulo retangulo){
    struct retangulo *r = (struct retangulo *) retangulo;
    return r->corb;
    }
/*retorna a cor da borda do retangulo*/
char *get_retangulo_corp(Retangulo retangulo){
    struct retangulo *r = (struct retangulo *) retangulo;
    return r->corp;
    }
/*retorna a rotação do retangulo*/
double get_retangulo_g(Retangulo retangulo){
    struct retangulo *r = (struct retangulo *) retangulo;
    return r->g;
    }
    
    /* definir */

/*define o id do retangulo*/
void set_retangulo_x(Retangulo retangulo, double x){
    struct retangulo *r = (struct retangulo *) retangulo;
    r->x = x;
    }

/*define a coordenada x do retangulo*/  
void set_retangulo_y(Retangulo retangulo, double y){
    struct retangulo *r = (struct retangulo *) retangulo;
    r->y = y;
    }

/*define a coordenada y do retangulo*/
void set_retangulo_w(Retangulo retangulo, double w){
    struct retangulo *r = (struct retangulo *) retangulo;
    r->w = w;
    }

/*define a largura do retangulo*/   
void set_retangulo_h(Retangulo retangulo, double h){
    struct retangulo *r = (struct retangulo *) retangulo;
    r->h = h;
    }

/*define a altura do retangulo*/   
void set_retangulo_corb(Retangulo retangulo, char *corb){
    struct retangulo *r = (struct retangulo *) retangulo;
    r->corb = corb;
    }