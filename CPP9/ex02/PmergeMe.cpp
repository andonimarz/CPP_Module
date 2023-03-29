/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:21:35 by amarzana          #+#    #+#             */
/*   Updated: 2023/03/29 18:11:24 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::throwExcep(void)
{
	deq.clear();
	vec.clear();
	throw std::out_of_range("Error");
}

PmergeMe::PmergeMe(char **argv)
{
	for (size_t i = 1; argv[i]; i++)
	{
		std::string str = argv[i];
		for (size_t j = 0; j < str.size(); j++)
			if(!isdigit(argv[i][j]))
				throwExcep();
		double num = static_cast<double>(atof(argv[i]));
		if (num > INT_MAX || num < 0)
			throwExcep();
		deq.push_back(atoi(argv[i]));
		vec.push_back(atoi(argv[i]));
	}
}

PmergeMe::~PmergeMe() {}

void PmergeMe::printDeq() const
{
	for (size_t i = 0; i < deq.size(); i++)
		std::cout << deq[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::printVec() const
{
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void PmergeMe::algorithm(void)
{
	double timeVec = 0;
	double timeDeq = 0;

	if (vec.size() <= 7)
	{
		timeVec = clock();
		insertVec(this->vec);
		timeVec = (clock() - timeVec) * 1000 / CLOCKS_PER_SEC;

		timeDeq = clock();
		insertDeq(this->deq);
		timeDeq = (clock() - timeDeq) * 1000 / CLOCKS_PER_SEC;
	}
	else
	{
		timeVec = clock();
		mergeVec(this->vec);
		timeVec = (clock() - timeVec) * 1000 / CLOCKS_PER_SEC;

		timeDeq = clock();
		mergeDeq(this->deq);
		timeDeq = (clock() - timeDeq) * 1000 / CLOCKS_PER_SEC;
	}

	std::cout << "After: ";
	this->printVec();
	std::cout << "Time to process a range of " << vec.size() \
		<< " elements with std::vector : " << timeVec << " us" << std::endl;
	std::cout << "Time to process a range of " << deq.size() \
		<< " elements with std::deque : " << timeDeq << " us" << std::endl;
		
}

void PmergeMe::insertVec(std::vector<int> &vec)
{
	for (size_t i = 0; i < vec.size(); i++) {
		size_t j = i;
		while (j > 0 && vec[j - 1] > vec[j]) {
			std::swap(vec[j], vec[j - 1]);
			j--;
		}
	}
}

void PmergeMe::insertDeq(std::deque<int> &deq)
{
	for (size_t i = 0; i < deq.size(); i++) {
		size_t j = i;
		while (j > 0 && deq[j - 1] > deq[j]) {
			std::swap(deq[j], deq[j - 1]);
			j--;
		}
	}
}

void PmergeMe::mergeVec(std::vector<int> &vec)
{
	typedef typename std::vector<int>::iterator iterator;
	std::vector<int> leftHalf;
	std::vector<int> rightHalf;

	if (vec.size() == 1)
		return;

	size_t mid = vec.size() / 2;
	iterator midIter = vec.begin() + mid;

	leftHalf.insert(leftHalf.end(), vec.begin(), midIter);
	rightHalf.insert(rightHalf.end(), midIter, vec.end());

	mergeVec(leftHalf);
	mergeVec(rightHalf);

	vec.clear();
	iterator leftIter = leftHalf.begin();
	iterator rightIter = rightHalf.begin();

	while (leftIter != leftHalf.end() && rightIter != rightHalf.end()) {
		if (*leftIter < *rightIter)
			vec.push_back(*leftIter++);
		else
			vec.push_back(*rightIter++);
	}

	while (leftIter != leftHalf.end())
		vec.push_back(*leftIter++);

	while (rightIter != rightHalf.end())
		vec.push_back(*rightIter++);
}

void PmergeMe::mergeDeq(std::deque<int> &deq)
{
	typedef typename std::deque<int>::iterator iterator;
	std::deque<int> leftHalf;
	std::deque<int> rightHalf;

	if (deq.size() == 1)
		return;

	size_t mid = deq.size() / 2;
	iterator midIter = deq.begin() + mid;

	leftHalf.insert(leftHalf.end(), deq.begin(), midIter);
	rightHalf.insert(rightHalf.end(), midIter, deq.end());

	mergeDeq(leftHalf);
	mergeDeq(rightHalf);

	deq.clear();
	iterator leftIter = leftHalf.begin();
	iterator rightIter = rightHalf.begin();

	while (leftIter != leftHalf.end() && rightIter != rightHalf.end()) {
		if (*leftIter < *rightIter)
			deq.push_back(*leftIter++);
		else
			deq.push_back(*rightIter++);
	}

	while (leftIter != leftHalf.end())
		deq.push_back(*leftIter++);

	while (rightIter != rightHalf.end())
		deq.push_back(*rightIter++);
}
