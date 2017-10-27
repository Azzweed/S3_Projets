#ifndef CARTE_H
#define CARTE_H
#include "objet.h"
#include "string.h"

struct s_carte{
char typecarte; // type de carte F = Foret D = Dongeon V = Village 
string code;
s_Objet_t **carte;
};
typedef struct s_carte *s_carte_t;

s_carte_t new_carte(string T);
