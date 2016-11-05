#ifndef CARTEBANCAIRE_HPP
#define CARTEBANCAIRE_HPP
class CarteBancaire{
	private:
		int solde_;
	public:
		CarteBancaire(int);
		void depot(int);
		bool retrait(int);
};
#endif
