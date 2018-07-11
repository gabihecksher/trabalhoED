#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bmais.h"

TAB* leLinhas(TAB *arv, char *nome){
  FILE *arq;
  arq = fopen(nome, "r");
  int t = 2;
  char linha[256], *token;
  while (fgets(linha, sizeof(linha), arq)){
        Info *infos = (Info *) malloc(sizeof(Info));
        if(linha[1]=='\0') break; //string vazia

	token = strtok(linha, "/");
        
	strcpy(infos->cantor, token);
        token = strtok(NULL, "/");
        char chave[200];
        strcpy(chave, infos->cantor);
        strcat(chave, token);
        
	infos->ano = atoi(token);
        token = strtok(NULL, "/");
        infos->nMusicas = atoi(token);
        token = strtok(NULL, "/");
        infos->minutos = atoi(token);
        token = strtok(NULL, "/");
        
	strcpy(infos->nmAlbum, token);
        arv = Insere(arv, chave, infos, t);

      }
      return arv;
  }
