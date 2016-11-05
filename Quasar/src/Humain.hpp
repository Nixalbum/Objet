#ifndef HUMAIN_HPP
#define HUMAIN_HPP
#include "Joueur.hpp"
#include "Jeu.hpp"
#include <string>
#include <iostream>
class Humain : public Joueur{
	public:
		Humain(int);
		void joue(Quasar);
};
#endif
