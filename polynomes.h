/******************************************************************************/
/* POLYNOMES_H                                                                */
/******************************************************************************/

#ifndef POLYNOMES_H
#define POLYNOMES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXMONOME 50




/******************************************************************************/
/* STRUCTURES                                                                 */
/******************************************************************************/
typedef struct monome {
	int coeff;
	int degre;
	} Monome;

typedef struct polynome {
	Monome	tab_monomes[MAXMONOME];
	int	nb_monomes;
	} Polynome;

/******************************************************************************/
/* PROTOTYPES                                                                 */
/******************************************************************************/

void initPolynome(Polynome *);
void affichePolynome(Polynome);
void standardiseDescription(char *s, char *d);
void str2Polynome(char *str,Polynome *p);
void multiplieMonomePolynome(Polynome p, Monome m, Polynome *resultat);
void ajouteMonomePolynome(Polynome p, Monome m, Polynome *resultat);
void ajoutePolynomePolynome1(Polynome p1, Polynome p2, Polynome *resultat);
void ajoutePolynomePolynome2(Polynome p1, Polynome p2, Polynome *resultat);
void multipliePolynomePolynome(Polynome p1, Polynome p2, Polynome *resultat);
void puissancePolynome(Polynome p1, int puissance, Polynome *resultat);
void triPolynome(Polynome *p1);
void reduitPolynomeTrie(Polynome p1, Polynome *resultat);

/******************************************************************************/
/* PROTOTYPES  DE L'INTERFACE                                                 */
/******************************************************************************/

void Main_Menu();
void Demonstrations();
void Calculatrice_Menu();
void Entree_Polynome(int i, Polynome *res, int tri);
void Entree_Monome(Monome *mon);
void Wait_For_Enter();
void Calcul_Fin(int *i);
void viderBuffer();
















#endif

