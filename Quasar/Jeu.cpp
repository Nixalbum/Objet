#include "Jeu.hpp"


Jeu::Jeu(){
	enCours_ = true;
	score_ = 0;
}
void Jeu::voirScore(){
	std::cout<<"Score actuel :"<<score_<<"\n";
}
