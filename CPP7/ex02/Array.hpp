/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:24:01 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/26 19:28:38 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <cstring>

template<typename T>
class Array
{
	private:
		unsigned int m_size;
		T* m_data;
	public:
		Array(): m_size(0), m_data(NULL) {}
		
		Array(unsigned int n): m_size(n)
		{
			m_data = new T[n];
			std::memset(m_data, 0, n * sizeof(T));
		}
		
		Array(const Array<T>& other): m_size(other.m_size)
		{
			m_data = new T[m_size];
			std::memcpy(m_data, other.m_data, m_size * sizeof(T));
		}
		
		Array<T>	&operator=(const Array<T> &src)
		{
			if (this != &src)
			{
				Array<T> temp(src);
				std::swap(m_size, temp.m_size);
				std::swap(m_data, temp.m_data);
			}
			return *this;
		}
		
		~Array()
		{
			delete[] m_data;
		}
		
		T	&operator[](unsigned int index)
		{
			if (index >= m_size) {
				throw std::out_of_range("Array index out of bounds");
			}
			return (m_data[index]);
		}
		
		unsigned int size() const {
			return (m_size);
		}
};