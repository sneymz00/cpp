/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:44:02 by camurill          #+#    #+#             */
/*   Updated: 2025/06/27 15:25:29 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int ac, char **ag)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int j = 1; ag[j]; j++)
        {
            for(int i = 0; ag[j][i] != 0; i++)
                std::cout << (char)std::toupper(ag[j][i]);
        }
        std::cout << std::endl;
    }
    return (0);
}