#ifndef CARTE_H
#define CARTE_H
#include "objet.h"
#include "string.h"

struct s_carte{
int lvl;
string code;
*s_Objet_t[][] carte;
};
typedef struct s_carte s_carte_t;

s_carte_t new_carte(string T);
