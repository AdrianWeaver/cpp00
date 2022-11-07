/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:15:22 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/07 16:47:58 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#ifndef DEBUG
# define DEBUG 0
#endif

#include <iostream>
#include "contact.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(int index);
		void	search(void);
		Contact contacts[8];
		void	_print_category(int index);
		void	_print_category(std::string content);
	protected:
	private:
};

#endif
