/**
Copyright 2016 Nixalbum
This file is part of Quasar.

    Quasar is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Quasar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Quasar.  If not, see <http://www.gnu.org/licenses/>.
**/
#include "Humain.hpp"

Humain::Humain(int a) : Joueur(a),chxAct_(AUCUN){}
void Humain::joue(){
	std::string choix;
	std::cout<<"q pour Quitter, 1 pour bouton 1, 2 pour bouton 2\n";
	std::cin>>choix;
	if(choix == "q"){
		if(!jeu_->retirerGain(&cb_)){
			std::cout<<"Vous devez continuer a jouer\n";
		}
	}else if(choix == "1"){
		jeu_->bouton1();
	}else if(choix == "2"){
		jeu_->bouton2();
	}else{
		std::cout<<"Votre entree : "<<choix<<" ne fait pas parti des choix\n";
	}
	jeu_->voirScore();
}
