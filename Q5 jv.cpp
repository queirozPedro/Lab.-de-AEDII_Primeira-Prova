#include <stdio.h>

int fib(){
    int i=0;
    int contador = 1, num1=0, num2=1, proxNum;

    printf("Sequencia de Fibonacci: %d %d ", num1, num2);
    for (i=0; i < 8; i++){
        proxNum = num1 + num2;
        num1 = num2;
        num2 = proxNum;
        contador++;
        printf("%d ", proxNum);
    }
    
    printf("\nContador = %d", contador);
    
    return 0;
}


int main(){
    //!showMemory(start=6562)
    int i;
    
    
    fib();
}
