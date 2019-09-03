#include "../include/IPval.h"

bool noHay3Puntos(char const *ip)
{
    int contador=0;
    while (* ip )
    {
        contador += (*ip=='.') ? 1 : 0 ;
        ip++;
    }
    bool trespuntos = contador != 3? true : false;
    return trespuntos;
}

bool contieneLetras(char const *ip)
{
    bool HayLetras = false;
    while (* ip && !HayLetras)
    {
        HayLetras = ((*ip < 48 || *ip > 57) && *ip !='.') ? true : false;
        ip++;
    }
    return HayLetras;
}

bool octetoInvalido(char const *ip)
{
    char octeto[4];
    int contDigitos = 0;
    bool octetoInvalido = false;
    while (*ip && !octetoInvalido)
    {
        if (*ip != '.' && contDigitos <= 3)
        {
            octeto[cantDigitos] = *ip;
            contDigitos++;
        }
        else if (*ip == '.' && contDigitos <= 3)
        {
            octeto[contDigitos] = '\0';
            int numero = atoi(octeto);
            octetoInvalido = (numero >= 0 && numero < 256) ? false: true;
            contDigitos = 0;
        }
        else 
        {
            octetoInvalido = true;
        }
        ip++;
    }
    return octetoInvalido;
}

bool verificarValidezIP(char const *ip)
{
    bool ipValida=true;
    
    if (noHay3Puntos(ip) || contieneLetras(ip) || octetoInvalido(ip))
    {
        ipValida = false;
    }
    return ipValida;
}
