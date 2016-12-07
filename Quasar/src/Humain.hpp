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
#ifndef HUMAIN_HPP
#define HUMAIN_HPP
#include "Joueur.hpp"
#include "Jeu.hpp"
#include <string>
#include <iostream>
enum ChoixPossible{
	AUCUN = 0,
	BOUTON1 = 1,
	BOUTON2 = 2,
	QUITTER = 3,
	RETOUR = 4
};
class Humain : public Joueur{
	private:
		Jeu * jeu_;
		ChoixPossible chxAct_;
	public:
		Humain(int);
		void joue();
};
#endif
