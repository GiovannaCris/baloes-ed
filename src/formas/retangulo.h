#ifndef  RETANGULO_H
#define  RETANGULO_H

typedef void *Retangulo;

         /*criar retangulo*/ 
        /*o retangulo é composto por
x       (coordenadas do centro)
y       (coordenadas do centro)
w       (largura)
h       (altura)
g       (rotação)
id      (identificador)
corp    (cor de preenchimento)
corb    (cor da borda)

*/

             /*criar retangulo*/
Retangulo criarRetangulo(int id, double x, double y, double w, double h, char *corb, char *corp);
           
            /* retornos */

/*retorna o id do retangulo*/
int getRetanguloId(Retangulo retangulo);

/*retorna a coordenada x do retangulo*/
double getRetanguloX(Retangulo retangulo);

/*retorna a coordenada y do retangulo*/
double getRetanguloY(Retangulo retangulo);

/*retorna a largura do retangulo*/
double getRetanguloW(Retangulo retangulo);

/*retorna a altura do retangulo*/
double getRetanguloH(Retangulo retangulo);

/*retorna a cor de preenchimento do retangulo*/

char *get_retangulo_corb(Retangulo retangulo);

/*retorna a cor da borda do retangulo*/

char *get_retangulo_corp(Retangulo retangulo);


            /* definir */

void set_retangulo_x(Retangulo retangulo, double x);

void set_retangulo_y(Retangulo retangulo, double y);

void set_retangulo_w(Retangulo retangulo, double w);

void set_retangulo_h(Retangulo retangulo, double h);

void set_retangulo_corb(Retangulo retangulo, char *corb);

void set_retangulo_corp(Retangulo retangulo, char *corp);

#endif