#include <stdio.h>
#include <stdlib.h>
#include "include/IPval.h"

#define LONG_IP 15

int main(int argc, char** argv) {

    char IP[LONG_IP+1];
    printf("Ingrese direccion IP: ");
    scanf("%s",IP);
    if ( verificarValidezIP(IP) )
        printf("%s es una IP valida.",IP);
    else
        printf("%s no es una IP valida.",IP);
    return 0;
}

