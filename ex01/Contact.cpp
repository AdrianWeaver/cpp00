/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:57:07 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 07:58:19 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

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

void	Contact::set_first_name(std::string first_name)
{
	this->_first_name.assign(first_name);
}

void	Contact::set_last_name(std::string last_name)
{
	this->_last_name.assign(last_name);
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname.assign(nickname);
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number.assign(phone_number);
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret.assign(darkest_secret);
}

const std::string&	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

const std::string&	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

const std::string&	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

const std::string&	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

const std::string&	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}
