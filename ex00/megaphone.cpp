/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:57:41 by aweaver           #+#    #+#             */
/*   Updated: 2022/09/10 12:57:41 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ostream>

int	main(int argc, char **argv)
{

	std::string str;
	for (int i = 1; i < argc; ++i)
	{
		str = argv[i];
		for (std::string::iterator it = str.begin(); it != str.end(); ++it)
			std::cout << (char)std::toupper(*it);
	}
	std::cout << std::endl;
	return (0);
}
