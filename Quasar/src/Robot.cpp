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
