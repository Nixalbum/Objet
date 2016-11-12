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
#include "Robot.hpp"

Robot::Robot(int a, std::string jeu) : Joueur(a){
	//Se servir du string pour changer comportement jeu
}
void Robot::joue(Jeu* j){
	jeu_ = j;
	jeu_->recommencer(&cb_);
	bool joue = true;
	int score;
	while (joue){
		score = jeu_->getScore();
		if(score >= 15){
			jeu_->voirScore();
			jeu_->retirerGain(&cb_);
			joue = false;
			
		}else{
			jeu_->bouton2();
		}
	}
	std::cout<<"Repart avec "<<this->argent()<<"\n";
}
