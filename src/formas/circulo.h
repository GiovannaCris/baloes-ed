#ifndef CIRCULO_H
#define CIRCULO_H

typedef void *Circulo;

        /*criar circulo*/
        /*o circulo é composto por 
x       (coordenadas do centro)
y       (coordenadas do centro)
r       (raio) 
g       (rotação)
id      (identificador) 
corb    (cor da borda)
corp    (cor de preenchimento)   

                                        */
                /*criar circulo*/
Circulo criarCirculo(int id, double x, double y, double r, char *corb, char *corp);

            /* retornos */

/*retorna o id do circulo*/
int getCirculoId(Circulo circulo);

/*retorna a coordenada x do circulo*/
double getCirculoX(Circulo circulo);

/*retorna a coordenada y do circulo*/
double getCirculoY(Circulo circulo);

/*retorna o raio do circulo*/
double getCirculoRaio(Circulo circulo);

/*retornar g*/
double getCirculoG(Circulo circulo);

/*retorna a cor da borda do circulo*/
char getCirculoCorb(Circulo circulo);

/*retorna a cor de preenchimento do circulo*/
char getCirculoCorp(Circulo circulo);


            /*difinir*/

/*define o id do circulo*/
void setCirculoId(Circulo circulo, int id);

/*define a coordenada x do circulo*/
void setCirculoX(Circulo circulo, double x);

/*define a coordenada y do circulo*/
void setCirculoY(Circulo circulo, double y);

/*define o raio do circulo*/
void setCirculoRaio(Circulo circulo, double r);

/*define o g*/
void setCirculoG(Circulo circulo, double g);

/*define a cor da borda do circulo*/
void setCirculoCorb(Circulo circulo, char *corb);

/*define a cor de preenchimento do circulo*/
void setCirculoCorp(Circulo circulo, char *corp);

/* outros */   

/*rotação*/
void rotacionarCirculo(Circulo circulo, double angulo);

/*definir o valor de pi*/
#define PI 3.14159265358979323846

#endif

