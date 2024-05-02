/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:14:53 by padam             #+#    #+#             */
/*   Updated: 2024/05/02 23:17:34 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts_[8];
		int		next_index_;
		void		addContact_(void);
		void		searchContacts_(void);
		void		displayContact_(void);
	public:
		PhoneBook(void);
		~PhoneBook(void);
};

#endif
