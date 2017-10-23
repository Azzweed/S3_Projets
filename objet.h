#ifndef OBJET_H
#define OBJET_H
#include <SDL.h>
#include <stdlib.h>
#include <string.h>

struct s_objet{
  char typeobjet; //J=Joueur M=Monstres O=Obstacles 
  double x; //l'abscisse
  double y; //l'ordonnée
  double direction; //Direction de l'objet
  SDL_Surface sp1;
  SDL_Surface sp2;
};

typedef struct s_objet *s_objet_t;

s_objet_t new_o(int t);

s_objet_t write_type_o(int t, s_objet_t o);

s_objet_t write_pos_o(double x, double y, s_objet_t o);

int get_type_o(s_objet_t o);

void add_anim_o(s_objet_t o);

double get_ob_pos_x(s_objet_t o);

double get_ob_pos_y(s_objet_t o);

double get_direction_c(s_objet_t o);

#endif