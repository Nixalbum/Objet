#ifndef QUASAR_HPP
#define QUASAR_HPP
#include <random>
#include <iostream>
#include "Jeu.hpp"
#include "CarteBancaire.hpp"
class Quasar : public Jeu{
	private:
		int getRandom(int, int);
		bool stop();
	public:
		Quasar();
		void bouton1();
		void bouton2();
		bool retirerGain(CarteBancaire);
		void recommencer(CarteBancaire);
		
};


#endif
