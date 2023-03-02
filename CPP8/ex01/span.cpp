/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:37:33 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/02 12:43:50 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(){
	std::cout << "Span constructor" << std::endl;
}

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "Span constructor" << std::endl;
}

Span::Span(const Span &src) : _N(src._N), _v(src._v)
{
	std::cout << "Span copy constructor" << std::endl;
}

Span::~Span(){
	std::cout << "Span destructor" << std::endl;
}

Span	&Span::operator=(const Span &src)
{
	_N = src._N;
	_v = src._v;
	return (* this);
}

void	Span::addNumber(const int N)
{
	if (_v.size() >= _N)
		throw fullSpanException();
	_v.push_back(N);
}

void	Span::addNumbers(const int N)
{
	std::cout << "===== Filling Span with random numbers =====" << std::endl;
	std::srand(std::time(0));
	for (int i = 0; i < N; i++)
	{
		if (_v.size() >= _N)
			throw fullSpanException();
		_v.push_back(std::rand() % 10000);
	}
}

unsigned int	Span::shortestSpan(void) const
{
	std::vector<int> sorted_nums(_v);
	std::sort(sorted_nums.begin(), sorted_nums.end());
	int min_span = std::numeric_limits<int>::max();
	for (std::vector<int>::size_type i = 1; i < sorted_nums.size(); ++i)
	{
		int span = sorted_nums[i] - sorted_nums[i - 1];
		if (span < min_span)
			min_span = span;
	}
	return (min_span);
}

unsigned int	Span::longestSpan(void) const
{
	int min_val = *std::min_element(_v.begin(), _v.end());
	int max_val = *std::max_element(_v.begin(), _v.end());
	return (max_val - min_val);
}

void	Span::printSpan(void) const
{
	std::vector<int>::const_iterator it;
	for (it = _v.begin(); it != _v.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

