/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:15:22 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/10 07:58:48 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#ifndef DEBUG
# define DEBUG 0
#endif

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		void		add(int index);
		void		search(void);
		void		print_category(int index);
		void		print_category(std::string content);
	protected:
	private:
		Contact contacts[8];
		int		_total_contacts;
		int		_print_contact(int index) const;
};

#endif
