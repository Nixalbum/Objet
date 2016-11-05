#include "Quasar.hpp"
Quasar::Quasar(){
	//auto super()
	score_ = 1;
}

int Quasar::getRandom(int a, int b){
	std::random_device d;
	std::default_random_engine generator(d());
	std::uniform_int_distribution<int> distribution(a,b);
	return distribution(generator);
	return 0;
}
bool Quasar::stop(){
	return score_ > 20;
}
void Quasar::bouton1(){
	if(enCours_){
		score_ += getRandom(4,7);
		enCours_ = !stop();
		
	}
}
void Quasar::bouton2(){
	if(enCours_){
		score_ += getRandom(1,8);
		enCours_ = !stop();
	}
}
bool Quasar::retirerGain(CarteBancaire* cb){
	if(enCours_ && score_ < 15){
		std::cout<<"Partie en cours et on ne peut pas arreter avec un score de "<<score_<<"\n";
		return false;
	}else if(!enCours_){
		std::cout<<"PPas de partie en cours, pas de gain a retirer \n";
		return true;
	}else{
		int gain = 0;
		switch (score_){
			case 15:
				gain = 5;
				break;
			case 16:
				gain = 10;
				break;
			case 17:
				gain = 20;
				break;
			case 18:
				gain = 25;
				break;
			case 19:
				gain = 30;
				break;
			case 20:
				gain = 40;
				break;
			default:
				gain = 0;
		}
		cb->depot(gain);
		return true;
	}
}
void Quasar::recommencer(CarteBancaire* cb){
	if(cb->retrait(20)){
		enCours_ = true;
		score_ = 1;
	}
}
