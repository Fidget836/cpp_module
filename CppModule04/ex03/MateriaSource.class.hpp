#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP

#include <iostream>
#include <vector>
#include "IMateriaSource.class.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		std::vector<AMateria*> Materia;

	public:
		MateriaSource();
		MateriaSource( MateriaSource const &src);
		~MateriaSource();
        MateriaSource&  operator=( MateriaSource const &rhs);
		void learnMateria(AMateria* MateriaArg);
		AMateria* createMateria(std::string const & type);
};

#endif
