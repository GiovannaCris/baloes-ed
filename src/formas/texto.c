#include  "texto.h"
#include  <string.h>
#include  <math.h>
#include  <stdlib.h>

struct texto{
    int id;
    double x;
    double y;
    char *a;
    char *corb;
    char *corp;
    char *conteudo;
};



/*criar texto*/
Texto criarTexto(int id, double x, double y, char *a, char *corb, char *corp, char *conteudo){
    struct texto *t = (struct texto *) malloc(sizeof(struct texto));
    t->id = id;
    t->x = x;
    t->y = y;
    t->a = a;
    t->corb = corb;
    t->corp = corp;
    t->conteudo= conteudo;
    
    return t;
    }
    
    /*retornos*/

/*retorna o id do texto*/
int getTextoId(Texto texto){
    struct texto *t = (struct texto *) texto;
    return t->id;
    }

/*retorna a coordenada x do texto*/
double getTextoX(Texto texto){
    struct texto *t = (struct texto *) texto;
    return t->x;
    }

/*retorna a coordenada y do texto*/
double getTextoY(Texto texto){
    struct texto *t = (struct texto *) texto;
    return t->y;
    }

/*retorna o texto*/
char getTextoA(Texto texto){
    struct texto *t = (struct texto *) texto;
    return t->a;
    }

/*retorna a cor de borda do texto*/
char getTextoCorb(Texto texto){
    struct texto *t = (struct texto *) texto;
    return t->corb;
    }

/*retorna a cor de preenchimento do texto*/
char getTextoCorp(Texto texto){
    struct texto *t = (struct texto *) texto;
    return t->corp;
    }

/*retorna o conteudo do texto*/
char getTextoConteudo(Texto texto){
    struct texto *t = (struct texto *) texto;
    return t->conteudo;
    }

/* definir */

/*define o id do texto*/
void setTextoId(Texto texto, int id){
    struct texto *t = (struct texto *) texto;
    t->id = id;
    }

/*define a coordenada x do texto*/
void setTextoX(Texto texto, double x){
    struct texto *t = (struct texto *) texto;
    t->x = x;
    }

/*define a coordenada y do texto*/
void setTextoY(Texto texto, double y){
    struct texto *t = (struct texto *) texto;
    t->y = y;
    }

/*define o texto*/  
void setTextoA(Texto texto, char *a){
    struct texto *t = (struct texto *) texto;
    t->a = a;
    }

/*define a cor de borda do texto*/
void setTextoCorb(Texto texto, char *corb){
    struct texto *t = (struct texto *) texto;
    t->corb = corb;
    }

/*define a cor de preenchimento do texto*/

void setTextoCorp(Texto texto, char *corp){
    struct texto *t = (struct texto *) texto;
    t->corp = corp;
    }

    /*define o conteudo do texto */
void setTextoConteudo(Texto texto, char *conteudo){
