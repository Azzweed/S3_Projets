#include "objet.h"
#include <math.h>

s_objet_t new_o(int t){
  s_objet_t c= (s_objet_t)malloc(sizeof(s_objet_t));
  o->typecomete = t;
  o->x = 0.;
  o->y = 0.;
  o->direction = 0.0;
  return c;
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
