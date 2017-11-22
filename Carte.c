#include "Carte.h"

s_carte_t new_carte(string T){
  s_carte_t c = (s_carte_t)malloc(sizeof(s_carte_t));
  c.code = T;
  
  c.carte = malloc(15 * sizeof(s_objet_t*));       //On alloue '15' pointeurs.
  for(i=0 ; i < taille1 ; i++){
     c.carte[i] = malloc(20 * sizeof(s_objet_t));       //On alloue des tableaux de '20' variables.    
     }
 return c;    
}


s_objet_t get_objet(int x, int y, s_carte_t c){
 return  c.carte[x][y];
}
