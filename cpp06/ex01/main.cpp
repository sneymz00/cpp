/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:01:26 by camurill          #+#    #+#             */
/*   Updated: 2025/10/20 14:21:16 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data* data = new Data;
	data->_age = 25;
	data->_name = "Victor";
	data->_sername  = "Manuel";

	uintptr_t raw = Serializer::serialize(data);
	Data* restored = Serializer::deserialize(raw);

	std::cout << "Data_name: " << restored->_name << std::endl;
	std::cout << "Data_sername: " << restored->_sername << std::endl;
	std::cout << "Data_age: " << restored->_age << std::endl;

	delete data;
	return (0);
} 