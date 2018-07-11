#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//const int t = 2;
typedef struct info{
  char cantor[100];
  int ano;
  int nMusicas;
  int minutos;
  char nmAlbum[100];
}Info;

typedef struct ArvB{
  int nchaves, folha;
  char **chave;
  Info **adic;
  struct ArvB **filho, *prox;
}TAB;

/* como era com inteiro antes
typedef struct ArvB{ com inteiro
  int nchaves, folha;
  int *chave;
  struct ArvB **filho, *prox;
}TAB;
*/

//funcoes do arquivo.c
TAB *leLinhas(TAB *arv, char *nome);
TAB *RemoveInfosIntermediarias(TAB *arv);
void BuscaObras(TAB* a, char *cantor, char *final);
TAB *UltimoNo(TAB* a);

TAB *Cria(int t);
TAB *Libera(TAB *a);
void Imprime(TAB *a, int andar);
TAB *Inicializa();
TAB *Divisao(TAB *x, int i, TAB* y, int t);
TAB *Insere_Nao_Completo(TAB *arv, char *chave, Info *adic, int t);
TAB *Insere(TAB *T, char *chave, Info *adic, int t);
TAB *remover(TAB* arv, char *chave, int t);
TAB *retira(TAB* arv, char *chave, int t);
void testeFolhas(TAB *t);

//funcoes de busca
TAB *Busca(TAB* arv, char *ch);
Info *BuscaInfos(char *chave, TAB *arv);

void AlteraUmaInfo(char *chave, TAB *arv);
void ImprimeInfos(TAB *a, int andar);

void menu();
void espera(unsigned int secs);
