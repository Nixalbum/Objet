#include "CarteBancaire.hpp"
CarteBancaire::CarteBancaire(int a) : solde_(a){}

void CarteBancaire::depot(int a){
	solde_+= a;
}
bool CarteBancaire::retrait(int a){
	if(a>solde_){
		return false;
	}else{
		solde_-= a;
		return true;
	}
}
