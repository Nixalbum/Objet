#include "Humain.hpp"
#include "Robot.hpp"
#include "Quasar.hpp"
int main(int argc, char* argv[]){
	Quasar q;
	Jeu *jeuQ = &q; 
	if(argc == 1){
		Humain j (50);
		j.joue(jeuQ);
	}else if(argv[1]== std::string("bot")){//bot en argument lance une partie de robot pour travis
		Robot r(50, "quasar");
		r.joue(jeuQ);
	}
	
	return 0;
}
