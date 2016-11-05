#ifndef JOUEUR_HPP
#define JOUEUR_HPP
#include "Quasar.hpp"
#include "CarteBancaire.hpp"
class Joueur{
	protected:
		CarteBancaire cb_;
		Jeu * jeu_;
	public:
		Joueur(int);
		virtual void joue(Jeu *){}
		void recoit(int);
		void donner(int);
		int argent();
};


#endif
