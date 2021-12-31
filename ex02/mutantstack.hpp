#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
//	https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
public:
	using iterator = typename std::deque<T>::iterator;
	using const_iterator = typename std::deque<T>::const_iterator;
	using reverse_iterator = typename std::deque<T>::reverse_iterator;
	using const_reverse_iterator = typename std::deque<T>::const_reverse_iterator;

	 // Container https://en.cppreference.com/w/cpp/container
	iterator							begin(void) { return (this->c.begin()); }
	iterator							end(void)			{ return (this->c.end()); }
	const_iterator						cbegin(void) const	{ return (this->c.cbegin()); }
	const_iterator						cend(void) const	{ return (this->c.cend()); }
	reverse_iterator					rbegin(void)		{ return (this->c.rbegin()); }
	reverse_iterator					rend(void)			{ return (this->c.rend()); }
	const_reverse_iterator				crbegin(void) const	{ return (this->c.crbegin()); }
	const_reverse_iterator				crend(void) const	{ return (this->c.crend()); }

	MutantStack&						operator=(const MutantStack& m) = default;
	MutantStack(void) = default;
	MutantStack(const MutantStack& m) = default;
	MutantStack(MutantStack&& m) = default;
	~MutantStack(void) = default;
};

#endif