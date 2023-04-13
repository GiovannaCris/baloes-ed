#ifndef  TEXTO_H
#define  TEXTO_H
 

 typedef void* Texto;

            /*criar texto*/
            /*o texto é composto por    
            
            x       (coordenadas do centro)
            y       (coordenadas do centro)
            a       (ancora)
            g       (rotação)
            id      (identificador)
            corb    (cor da borda)
            corp    (cor de preenchimento)
            conteudo(conteudo do texto)

             */

           /*criar texto*/

           Texto criarTexto(int id, double x, double y, char *a,char *corb, char *corp, char *conteudo);
            
            /* retornos */

            /*retorna o id do texto*/
            int getTextoId(Texto texto);

            /*retorna a coordenada x do texto*/
            double getTextoX(Texto texto);

            /*retorna a coordenada y do texto*/
            double getTextoY(Texto texto);  

            /*retorna a cor da borda do texto*/
            char getTextoCorb(Texto texto);

            /*retorna a cor de preenchimento do texto*/
            char getTextoCorp(Texto texto);

            /*retorna o g*/
            double getTextoG(Texto texto);

            /*retorna a ancora do texto*/
            char getTextoAncora(Texto texto);

            /*retorna o conteudo do texto*/
            char getTextoConteudo(Texto texto);

            /* definir */

            /*define o id do texto*/
            void setTextoId(Texto texto, int id);

            /*define a coordenada x do texto*/
            void setTextoX(Texto texto, double x);

            /*define a coordenada y do texto*/
            void setTextoY(Texto texto, double y);

            /*define a cor da borda do texto*/
            void setTextoCorb(Texto texto, char *corb);

            /*define a cor de preenchimento do texto*/
            void setTextoCorp(Texto texto, char *corp);

            /*define o g do texto*/
            void setTextoG(Texto texto, double g);

            /*define a ancora do texto*/
            void setTextoAncora(Texto texto, char *a);

            /*define o conteudo do texto*/
            void setTextoConteudo(Texto texto, char *conteudo);

         #endif
