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

bool octetoValido(char const *ip)
{
    char octeto[4];
    int n = 0;
    int i = 0;
    bool octetoInvalido = false;
    while (*ip && !octetoInvalido)
    {
        if (*ip != '.' && i <= 3)
        {
            * ( octeto + i ) = *ip;
            i++;
        }
        else if (*ip == '.' && i <= 3)
        {
            *( octeto + i ) = '\0';
            n = atoi(octeto);
            octetoInvalido = (n >= 0 && n < 256) ? false: true;
            i = 0;
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
    
    if (noHay3Puntos(ip) || contieneLetras(ip) || octetoValido(ip))
    {
        ipValida = false;
    }
    return ipValida;
}