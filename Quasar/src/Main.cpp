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
