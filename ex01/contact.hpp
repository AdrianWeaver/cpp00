/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:15:23 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/09 17:00:33 by aweaver          ###   ########.fr       */
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
		void	set_first_name(std::string first_name);
		void	set_last_name(std::string last_name);
		void	set_nickname(std::string nickname);
		void	set_phone_number(std::string phone_number);
		void	set_darkest_secret(std::string darkest_secret);
		const std::string&	get_first_name(void) const;
		const std::string&	get_last_name(void) const;
		const std::string&	get_nickname(void) const;
		const std::string&	get_phone_number(void) const;
		const std::string&	get_darkest_secret(void) const;
	protected:
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;
};

#endif
