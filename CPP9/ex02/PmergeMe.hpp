/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:14:44 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/29 18:07:07 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <climits>
#include <ctime>

class PmergeMe
{
	private:
		std::deque<int>		deq;
		std::vector<int>	vec;

		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);

	public:
		PmergeMe(char **argv);
		~PmergeMe();
		void	printVec() const;
		void	printDeq() const;
		void	throwExcep(void);
		void	algorithm(void);
		void	insertVec(std::vector<int> &vec);
		void	insertDeq(std::deque<int> &deq);
		void	mergeVec(std::vector<int> &vec);
		void	mergeDeq(std::deque<int> &deq);
};
