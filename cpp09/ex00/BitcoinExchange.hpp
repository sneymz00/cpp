/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:53:40 by camurill          #+#    #+#             */
/*   Updated: 2025/10/25 18:06:29 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BITCOINEXCHANGE_HPP_
# define _BITCOINEXCHANGE_HPP_

# include <iostream>
# include <map>
# include <string>
# include <exception>
# include <sstream>
# include <fstream>

class BitcionExchange
{
	public:
			std::map<std::string, double>	_quotes;
			void							readDatabase();
			void							multiplyQuote(std::string const &date, double price);
			double							validatePrice(std::string const &price);
			bool							validateDate(std::string const &date);
	private:
			BitcionExchange();
			BitcionExchange(const BitcionExchange& cpy);
			BitcionExchange &operator=(const BitcionExchange& copy);
			~BitcionExchange();

			std::map<std::string, double> const	&getQuotes() const;
			void								execute(char const *file)

			class CouldNotOpen : public std::exception
};

#endif