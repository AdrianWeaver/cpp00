/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:46:12 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/07 08:53:30 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Phonebook constructor called" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}
