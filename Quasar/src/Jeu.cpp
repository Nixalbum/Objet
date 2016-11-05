#include "Jeu.hpp"


Jeu::Jeu(){
	enCours_ = false;
	score_ = 0;
	std::cout<<"Construit jeu \n";
}
void Jeu::voirScore(){
	std::cout<<"Score actuel :"<<score_<<"\n";
}
int Jeu::getScore(){
	return score_;
}
