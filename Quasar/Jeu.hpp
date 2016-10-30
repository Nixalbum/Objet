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
		virtual void recommencer(CarteBancaire){}
		virtual void bouton1(){}
		virtual void bouton2(){}
		virtual bool retirerGain(CarteBancaire){}
		void voirScore();
};
#endif
