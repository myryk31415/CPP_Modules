/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:14:53 by padam             #+#    #+#             */
/*   Updated: 2024/05/03 13:09:05 by padam            ###   ########.fr       */
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
		int		contact_count_;
		void		displayContact_(void);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		addContact(void);
		void		searchContacts(void);
};

#endif
