/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:57:07 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/07 16:47:28 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact(void)
{
	if (DEBUG)
		std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	if (DEBUG)
		std::cout << "Contact destructor called" << std::endl;
	return ;
}

void	Contact::_set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void	Contact::_set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void	Contact::_set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::_set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
