#include <stdio.h>

void fun(int nodo, int nivel, int profundiad, int *conteo);

int main(){
    int raiz=0, inicio=0, profundidad=0;
    int conteo=0; 
    fun(raiz, inicio, profundidad, &conteo);
    return 0;
}

void fun(int nodo, int nivel, int profundiad, int *conteo){
    int e = 0;

    if (nivel == profundiad){
        return;
    }
    
    for ( e = 0; e < nivel; e++){
        printf("---");
        printf("nivel = %d  nodo = %d\n", nivel, nodo);
    }
    fun(nodo, nivel, profundiad, conteo);
    fun(2*nodo+1, nivel+1, profundiad, conteo);
    
}
