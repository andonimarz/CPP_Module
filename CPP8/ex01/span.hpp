/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:37:27 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/02 12:45:23 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Span 
{
	private:
		unsigned int		_N;
		std::vector<int> 	_v;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &src);
		~Span();
		Span			&operator=(const Span &src);
		void			addNumber(const int N);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
		void			addNumbers(const int N);
		void			printSpan(void) const;

	class fullSpanException : public std::exception	{
		virtual const char* what() const throw() {
			return "Span is full";
		}
	};
};