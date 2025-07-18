/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:38:56 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 15:01:38 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include "contact.hpp"

std::string add_spaces(int n);

std::string ft_width(std::string str, long unsigned max);

int	search(Contact contacts[8]);

int	check_number(std::string str);

int check_valid(std::string str);

#endif
