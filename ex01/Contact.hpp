/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:15:23 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/16 10:03:06 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#ifndef DEBUG
# define DEBUG 0
#endif

#include <iostream>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	setFirstName(std::string first_name);
		void	setLastName(std::string last_name);
		void	setNickname(std::string nickname);
		void	setPhoneNumber(std::string phone_number);
		void	setDarkestSecret(std::string darkest_secret);
		const std::string&	getFirstName(void) const;
		const std::string&	getLastName(void) const;
		const std::string&	getNickname(void) const;
		const std::string&	getPhoneNumber(void) const;
		const std::string&	getDarkestSecret(void) const;
	protected:
	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;
};

#endif
