/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:39:31 by camurill          #+#    #+#             */
/*   Updated: 2025/10/20 14:21:00 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
	private:
			Serializer();
			~Serializer();
			Serializer(const Serializer& cpy);
			Serializer &operator=(Serializer const & copy);
	public:
			static uintptr_t serialize(Data* ptr);
			static Data* deserialize(uintptr_t raw);
};

#endif