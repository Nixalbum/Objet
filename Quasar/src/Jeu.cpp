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
#include "Jeu.hpp"


Jeu::Jeu():enCours_(false),score_(0){
	std::cout<<"Construit jeu \n";
}
/*void Jeu::commencerJeu(Jeu* j,CarteBancaire* cb){
	if(!this->getEtat()&& !j->getEtat()){//Si le jeu n'est pas en cours
		//this = j;
		j->recommencer(cb);
	}else{
		std::cout<<"Il faut d'abord finir le jeu en cours, ou on ne peut pas rejoindre un jeu en cours\n";
	}
}*/
void Jeu::voirScore(){
	std::cout<<"Score actuel :"<<score_<<"\n";
}
int Jeu::getScore(){
	return score_;
}
bool Jeu::getEtat(){
	return enCours_;
}
