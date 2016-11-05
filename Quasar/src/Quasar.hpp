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
