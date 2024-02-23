#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
		int	i;

		i = 0;
		while (Materia[i] != NULL)
		{
			delete (Materia[i]);
			i++;
		}
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=( MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            Materia[i] = rhs.Materia[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* MateriaArg)
{
	int	i;

	i = 0;
	while (Materia[i] != NULL)
		i++;
	if (i < 4)
		Materia.push_back(MateriaArg);
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (type == type)
			return (Materia[i]);
	}
	return (NULL);
}
