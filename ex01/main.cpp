/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:54:20 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 08:04:04 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;
	int			index;

	index = 0;
	while (1)
	{
		do
		{
			if (std::cin.eof())
			{
				std::cout << "Closing stdin, shutting down program." << std::endl;
				return (0);
			}
			std::cout << "Please enter a command" << std::endl;
			std::getline(std::cin, input);
		} while (input != "EXIT" && input != "ADD" && input != "SEARCH");
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
		{
			phonebook.add(index);
			if (++index >= 8)
				index = 0;
		}
		else if (input == "SEARCH")
			phonebook.search();
	}
	return (0);
}
