/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:11:57 by camurill          #+#    #+#             */
/*   Updated: 2025/10/20 18:38:10 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T_array, typename T_funtion>
void	iter(T_array *array, size_t lenght, T_funtion funtion)
{
	for (size_t i = 0; i < lenght; i++)
		funtion(array[i]);
}

#endif