#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void splitPath (char *fullPath, char *path, int lenPath, char *nomeArq, int lenNomeArq, char *extArq, int lenExtArq) {
extArq = strrchr(fullPath, '.');
nomeArq = strrchr(fullPath, '/');
strncpy(path, fullPath, nomeArq - fullPath + 1);
strncpy(nomeArq, nomeArq + 1, extArq - nomeArq - 1);
lenExtArq = strlen(extArq);
lenNomeArq = strlen(nomeArq);
lenPath = strlen(path);
    
}

void joinFilePath (char *path, char *nomeArq, char *extArq, char *fullPath) {
    strcat(fullPath, path);
    strcat(fullPath, nomeArq);
   
}

void joinAll (char *path, char *nomeArq, char *extArq, char *fullPath, int lenFullPath) {
    strcat(fullPath, path);
    strcat(fullPath, nomeArq);
    strcat(fullPath, extArq);


}

void getFileName (char *fullPath, char *nomeArq, int lenNomeArq) {
    nomeArq = strrchr(fullPath, '/');
    lenNomeArq = strlen(nomeArq);
}

void getPath (char *fullPath, char *path, int lenPath) {
    char *aux = strrchr(fullPath, '/');
    strncpy(path, fullPath, aux - fullPath + 1);
    lenPath = strlen(path);
} 

 void normalizePath (char *path, char *normPath, int lenPath) {
    char *aux = strrchr(path, '/');
    if (aux != NULL) {
        strncpy(path, path, aux - path + 1);
        lenPath = strlen(path);
    }
    strncpy(normPath, path, lenPath - 1);

}