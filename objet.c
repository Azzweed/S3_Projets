#include "objet.h"
#include <math.h>

/**
 * Crée un Objet avc comme paramétre:
 * t : le type d'objet joueur, monstre, obstacle ...
 * x,y : la position de l'objet
 * typecarte : le type de carte qu'on va devoir dessiner foret, village ...
 **/
s_objet_t new_o(char t, int x, int y, char typecarte){
  s_objet_t o= (s_objet_t)malloc(sizeof(s_objet_t));
  o->typeobjet = t;
  
  if (t == 'J'){
    o->pv = 100;
    o->atk = 20;
  }
  if (t == 'M'){
    o->pv = 200;
    o-> atk = 50;
  }
  if (t == 'O'){
    o->pv = 0;
    o->atk = 0;
  }
  o->x = x;
  o->y = y;
  o->direction = 0;
  return o;
}

