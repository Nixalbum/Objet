#ifndef ROBOT_HPP
#define ROBOT_HPP
#include "Joueur.hpp"
#include "Jeu.hpp"
#include <string>
#include <iostream>
class Robot : public Joueur{
	public:
		Robot(int, std::string);
		void joue(Jeu*);
};
#endif
