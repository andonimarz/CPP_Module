/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:07:19 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/26 18:31:36 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

// swap function template
template <typename T>
void swap(T& a, T& b)
{
    T aux = a;
    a = b;
    b = aux;
}

// min function template
template <typename T>
T min(T a, T b)
{
    return (a < b) ? a : b;
}

// max function template
template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

#endif