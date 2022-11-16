/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:15:22 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/16 10:05:36 by aweaver          ###   ########.fr       */
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
	protected:
	private:
		Contact contacts[8];
		int		_totalContacts;
		int		_printContact(int index) const;
		void	_printCategory(int index);
		void	_printCategory(std::string content);
};

#endif
