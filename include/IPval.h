#ifndef IP_H
#define IP_H

#include <stdbool.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

    bool verificarValidezIP(char const *ip);
    /*Recipe IP por parametro(string) y devuelve 
     * true si es una IP valida o false en caso de no serlo*/

#ifdef __cplusplus
}
#endif

#endif /* IP_H */
