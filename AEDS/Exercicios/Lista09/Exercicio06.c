/*
Escrever os dez primeiros termos Fibonacci.
*/
#include <stdio.h>

int main(){
    int primeirotermo = 0;
    int segundotermo = 1;
    int terceirotermo = 0;

    printf("%d\n", primeirotermo);
    printf("%d\n", segundotermo);

    for(int i = 3;i <= 10; i++){
        terceirotermo = primeirotermo + segundotermo;
        printf("%d\n", terceirotermo);
        primeirotermo = segundotermo;
        segundotermo = terceirotermo;
    }
    return 0;
}