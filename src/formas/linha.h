#ifndef  LINHA_H
#define  LINHA_H

typedef void *Linha;

        /*criar linha*/
        /*a linha é composta por    
id      (identificador)
x1      (coordenadas do ponto inicial)
y1      (coordenadas do ponto inicial)
x2      (coordenadas do ponto final)
y2      (coordenadas do ponto final)
cor     (cor da linha)
g       (rotação)
*/

                /*criar linha*/
Linha criarLinha(int id, double x1, double y1, double x2, double y2, char *cor);


            /* retornos */

/*retorna o id da linha*/
int getLinhaId(Linha linha);

/*retorna a coordenada x1 da linha*/
double getLinhaX1(Linha linha);

/*retorna a coordenada y1 da linha*/
double getLinhaY1(Linha linha);

/*retorna a coordenada x2 da linha*/
double getLinhaX2(Linha linha);

/*retorna a coordenada y2 da linha*/
double getLinhaY2(Linha linha);

/*retorna a cor da linha*/
char getLinhaCor(Linha linha);

/*retorna o g*/
double getLinhaG(Linha linha);

            /* definir */

/*define o id da linha*/
void setLinhaId(Linha linha, int id);

/*define a coordenada x1 da linha*/
void setLinhaX1(Linha linha, double x1);

/*define a coordenada y1 da linha*/
void setLinhaY1(Linha linha, double y1);

/*define a coordenada x2 da linha*/
void setLinhaX2(Linha linha, double x2);

/*define a coordenada y2 da linha*/
void setLinhaY2(Linha linha, double y2);

/*define a cor da linha*/
void setLinhaCor(Linha linha, char *cor);

/*define o g*/
void setLinhaG(Linha linha, double g);

#endif