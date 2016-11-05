#include "CarteBancaire.hpp"
#include <iostream>
CarteBancaire::CarteBancaire(int a) : solde_(a){}

void CarteBancaire::depot(int a){
	std::cout<<a;
	solde_+= a;
}
bool CarteBancaire::retrait(int a){
	if(a>solde_){
		return false;
	}else{
		solde_= solde_ - a;
		return true;
	}
}
int CarteBancaire::getSolde(){
	return solde_;
}
