/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:24:01 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/26 19:44:35 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <cstring>

template<typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_data;
	public:
		Array(): _size(0), _data(NULL) {}
		
		Array(unsigned int n): _size(n)
		{
			_data = new T[n];
			std::memset(_data, 0, n * sizeof(T));
		}
		
		Array(const Array<T> &src): _size(src._size)
		{
			_data = new T[_size];
			std::memcpy(_data, src._data, _size * sizeof(T));
		}
		
		Array<T>	&operator=(const Array<T> &src)
		{
			if (this != &src)
			{
				Array<T> temp(src);
				std::swap(_size, temp._size);
				std::swap(_data, temp._data);
			}
			return (*this);
		}
		
		~Array()
		{
			delete[] _data;
		}
		
		T	&operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::out_of_range("Array index out of bounds");
			return (_data[index]);
		}
		
		unsigned int size() const
		{
			return (_size);
		}
};