#include "Humain.hpp"

Humain::Humain(int a) : Joueur(a){}
void Humain::joue(Quasar j){
	jeu_ = j;
	bool joue = true;
	std::string choix;
	while (joue){
		std::cout<<"q pour Quitter, 1 pour bouton 1, 2 pour bouton 2, s pour score, r retry\n";
		std::cin>>choix;
		if(choix == "q"){
			if(jeu_.retirerGain(cb_)){
				joue = false;
			}else{
				std::cout<<"Vous devez continuer a jouer\n";
			}
		}else if(choix == "1"){
			jeu_.bouton1();
		}else if(choix == "2"){
			jeu_.bouton2();
		}else if(choix == "s"){
			jeu_.voirScore();
		}else if(choix == "r"){
			jeu_.recommencer(cb_);
		}else{
			std::cout<<"Votre entree : "<<choix<<" ne fait pas parti des choix\n";
		}
	}
}

#include "Quasar.hpp"
int main(){
	Humain j (50);
	Quasar q;
	j.joue(q);
	return 0;
}
