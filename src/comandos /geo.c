#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void lerGeo (char *fullPath){
    FILE *arq = fopen(fullPath, "r");
    char linha[100];
    char *aux = (char *) malloc(100 * sizeof(char));
    while (!(feof(arq))) {
        fgets(linha, 100, arq);
        aux = linha[0];
        if (strcmp(aux, "t") == 0) {
            int i;
            double x, y;
            char *a = malloc(sizeof(char));
            char *corb = malloc(sizeof(char));
            char *corp = malloc(sizeof(char));
            char *value = malloc(sizeof(char));
            sscanf(linha, "%s %d %lf %lf %s %s %s %s", aux, &i, &x, &y, a, corb, corp, value);
            printf("%s %d %lf %lf %s %s %s %s", aux, i, x, y, a, corb, corp, value);
        } 
        
    
    
    }


}
