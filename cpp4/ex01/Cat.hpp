#ifndef Cat_H
# define Cat_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public :
		Cat();
		Cat(Cat const & src);
		~Cat();
		Cat &		operator=( Cat const & rhs );
		void makeSound(void) const;
		Cat & operator=(Cat & rhs);
		Brain *getBrain() const;
	private :
		Brain *_brain;
};

#endif
