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
#ifndef QUASAR_HPP
#define QUASAR_HPP
#include <random>
#include <iostream>
#include "Jeu.hpp"
#include "CarteBancaire.hpp"
class Quasar : public Jeu{
	private:
		std::default_random_engine generator;
		std::uniform_int_distribution<int> dist18;
		std::uniform_int_distribution<int> dist47;
		int getRandom(int, int);
		bool stop();
	public:
		Quasar();
		void bouton1();
		void bouton2();
		bool retirerGain(CarteBancaire*);
		void recommencer(CarteBancaire*);
		
};


#endif
