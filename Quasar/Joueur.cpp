#include "Joueur.hpp"

Joueur::Joueur(int a): cb_(a){}
void Joueur::recoit(int a){
	cb_.depot(a);
}
void Joueur::donner(int a){
	cb_.retrait(a);
}
