#include "strucit_type.h"

char *generate_name(char* var, char* name, int *cpt);

void init_cpt_var();
char *new_var(char *str);

void init_cpt_label();
char *new_label(char *str);

int hash(char *nom);
table_t *nouvelle_table();
void supprimer_table();
symbole_t *ajouter( table_t *table, char *nom);

pile_t *init_pile();
table_t *top();
pile_t *push(table_t *table);
pile_t *pop();

pile_t *init_pile_type();
table_t *top_type();
pile_t *push_type(table_t *table);
pile_t *pop_type();

symbole_t *rechercher( table_t *table, char *nom );
symbole_t *find( char *nom);
symbole_t *find_type(char *nom);
symbole_t *find_in_pile(pile_t *pile, char *nom);

char *add_declaration(char* var, arbre_t *type, char* declarations);

void afficher_pile();
void afficher_pile_t(pile_t *pile);
void afficher_pile_type();
void afficher_table();
