#ifndef OBJET_H
#define OBJET_H
#include <SDL.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct s_objet{
  char typeobjet; //J=Joueur M=Monstres O=Obstacles P= Porte                                                                                                                                                                                                                                                                                                                            
  int pv;
  int atk;
  int x; //l'abscisse
  int y; //l'ordonnée
  int direction; //Direction de l'objet
  bool act; // variable d'etat
  SDL_Surface sp1;
  SDL_Surface sp2;
  
};

typedef struct s_objet *s_objet_t;

s_objet_t new_o(char t, int x, int y, char typecarte);


#endif