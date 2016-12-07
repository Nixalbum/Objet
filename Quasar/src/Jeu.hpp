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
#ifndef JEU_HPP
#define JEU_HPP
#include <iostream>
#include "CarteBancaire.hpp"
class Jeu{
	protected:
		bool enCours_;
		int score_;
	public:
		Jeu();
		virtual void recommencer(CarteBancaire*){}
		virtual void bouton1(){}
		virtual void bouton2(){}
		virtual bool retirerGain(CarteBancaire*){return false;}
		//void commencerJeu(Jeu* j);
		void voirScore();
		int getScore();
		bool getEtat();
};
#endif
