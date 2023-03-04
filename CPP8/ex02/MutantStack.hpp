/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:47:06 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/04 11:31:41 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>();
	MutantStack<T>(const MutantStack<T> &src);
	~MutantStack<T>();
	const MutantStack<T> &operator=(const MutantStack<T> &src);

	typedef typename MutantStack<T>::container_type::iterator					iterator;
	typedef typename MutantStack<T>::container_type::reverse_iterator			reverse_iterator;
	typedef typename MutantStack<T>::container_type::const_iterator				const_iterator;
	typedef typename MutantStack<T>::container_type::const_reverse_iterator		const_reverse_iterator;

	iterator				begin();
	iterator				end();

	reverse_iterator		rbegin();
	reverse_iterator		rend();

	const_iterator			begin() const;
	const_iterator			end() const;

	const_reverse_iterator	rbegin() const;
	const_reverse_iterator	rend() const;
};

#endif