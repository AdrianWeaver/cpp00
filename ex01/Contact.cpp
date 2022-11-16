/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:57:07 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/16 10:05:10 by aweaver          ###   ########.fr       */
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

void	Contact::setFirstName(std::string first_name)
{
	this->_firstName.assign(first_name);
}

void	Contact::setLastName(std::string last_name)
{
	this->_lastName.assign(last_name);
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname.assign(nickname);
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	this->_phoneNumber.assign(phone_number);
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	this->_darkestSecret.assign(darkest_secret);
}

const std::string&	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

const std::string&	Contact::getLastName(void) const
{
	return (this->_lastName);
}

const std::string&	Contact::getNickname(void) const
{
	return (this->_nickname);
}

const std::string&	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

const std::string&	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
