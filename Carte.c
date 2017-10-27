#include "Carte.c"

s_carte_t new_carte(string T){
  s_carte_t c = (s_carte_t)malloc(sizeof(s_carte_t));
  c.code = T;
  c.carte = malloc(15 * sizeof(*c.carte));       //On alloue '15' pointeurs.
  for(i=0 ; i < taille1 ; i++){
     c.carte[i] = malloc(20 * sizeof(**c.carte));       //On alloue des tableaux de '20' variables.    
     }
}



