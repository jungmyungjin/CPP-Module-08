/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 03:49:18 by mjung             #+#    #+#             */
/*   Updated: 2021/12/30 03:49:37 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
public:
	Span();
	Span(unsigned int _size);
	virtual ~Span();
	Span(const Span &target);
	Span &operator=(const Span &target);

	// number가 이미 저장된 번호인 경우 예외를 통한 에러를 띄워야한다.
	void addNumber(unsigned int _number);

	// 저장된 숫자가 없거나 하나만 있으면 예외가 발생한다
	unsigned int shortestSpan(); // 두 수의 범위가 짧은 수의 범위를 리턴
	unsigned int longestSpan();	// 두 수의 범위가 긴 수의 범위를 리턴

	class ExistNumber : public std::exception {
	public:
		const char *what(void) const throw();
	};

	class SizeOver : public std::exception {
	public:
		const char *what(void) const throw();
	};

	class NoRange : public std::exception {
	public:
		const char *what(void) const throw();
	};

	unsigned int min(unsigned int _n1, unsigned _n2);
	unsigned int max(unsigned int _n1, unsigned _n2);

private:
	std::vector<unsigned int> numbers_;

};


#endif
