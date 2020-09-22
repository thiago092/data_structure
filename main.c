#include <stdio.h>
#include<stdlib.h>


typedef struct lista Lista;

struct lista{

  int info;
  int l;
  struct lista* prox;

};

Lista* criar_lista(){

  return NULL;
}

Lista* inserir_lista(Lista* l, int i,int j)
{
  Lista* novo = (Lista*)malloc(sizeof(Lista));
  novo->info=i;
  novo->l=j;
  novo->prox=l;
  return novo; 
}

void imprimir_lista(Lista* l){

  Lista* p;
  for ( p= l ; p !=NULL ; p =p->prox)
    printf("%d %d \n",p->info,p->l);

}

int vazia(Lista* l){


  if(l==NULL)
    return 1;
return 0;

}

int main(void) {
  
  Lista *lista;
  lista = criar_lista();
  
  
  if(vazia(lista)){
    printf("lista vazia");
  }else 
    printf("lista não vazia");


  lista=inserir_lista(lista, 10,22);
  lista=inserir_lista(lista, 20,32);

  imprimir_lista(lista);

  if(vazia(lista)){
    printf("lista vazia");
  }else 
    printf("lista não vazia");

}