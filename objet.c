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
  
  if (t == "J"){
    o->pv = 100;
    o->atk = 20;
  }
  if (t == "M"){
    o->pv = 200;
    o-> atk = 50;
  }
  if (t == "O"){
    o->pv = 0;
    o->atk = 0;
  }
  o->x = x;
  o->y = y;
  o->direction = 0;
  return o;
}

s_objet_t write_type_o(int t, s_objet_t o){
  o->typecomete = t;
  return c;
}

s_objet_t write_pos_o(double x, double y, s_objet_t o){
  o->x = x;
  o->y = y;
  return o;
}

int get_type_o(s_objet_t o){
  return o->typecomete;
}

int get_anim_o(s_objet_t o){
  return o->anim;
}

void add_anim_o(s_objet_t o){
  if (o->anim >= 31){
    o->anim = 0;}
  (o->anim)++;
}

double get_ob_pos_x(s_objet_t o){
  return o->x;
}

double get_ob_pos_y(s_objet_t o){
  return o->y;
}

double get_direction_o(s_objet_t o){
  return o->direction;
}
