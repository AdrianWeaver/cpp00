/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:15:23 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/07 16:48:12 by aweaver          ###   ########.fr       */
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
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;
		void	_set_first_name(std::string first_name);
		void	_set_last_name(std::string last_name);
		void	_set_nickname(std::string nickname);
		void	_set_phonenumber(std::string phone_number);
		void	_set_darkest_secret(std::string darkest_secret);
	protected:
	private:
};

#endif
