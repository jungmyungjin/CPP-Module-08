/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 16:42:20 by mjung             #+#    #+#             */
/*   Updated: 2022/01/01 17:13:28 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) {};
	virtual ~MutantStack(void) {};
	MutantStack& operator=(const MutantStack& target) {*this = target; return *this;};
	MutantStack(const MutantStack& target) {*this = target;};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	// 컨테이너 멤버 함수 테이블
	// > https://en.cppreference.com/w/cpp/container
	// 참고자료
	// > https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
	iterator							begin(void) { return (this->c.begin()); };
	iterator							end(void)			{ return (this->c.end()); };
	const_iterator						cbegin(void) const	{ return (this->c.cbegin()); };
	const_iterator						cend(void) const	{ return (this->c.cend()); };
	reverse_iterator					rbegin(void)		{ return (this->c.rbegin()); };
	reverse_iterator					rend(void)			{ return (this->c.rend()); };
	const_reverse_iterator				crbegin(void) const	{ return (this->c.crbegin()); };
	const_reverse_iterator				crend(void) const	{ return (this->c.crend()); };

};

#endif