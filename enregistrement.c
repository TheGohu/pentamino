INCLUDE <stdbool.h>

typedef 
struct piece
{
  char nom;
  int largeur;
  int hauteur;
  bool pos_n;
  bool pos_e;
  int piece[5][5]; // tableau pour la forme des pieces
}

typedef 
struct grille
{
  char nom;
  int nb_l;  // nb de lignes
  int nb_c;  // nb de colonnes
  int x;     //coord x 
  int y;     // coord y 
  bool remplie;  // bool vrai si remplie 
}
