/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:30:30 by padam             #+#    #+#             */
/*   Updated: 2024/05/03 12:50:51 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		std::string	first_name_;
		std::string	last_name_;
		std::string	nickname_;
		std::string	phone_number_;
		std::string	darkest_secret_;
		std::string	getInput_(std::string input_name);
	public:
		Contact(void);
		~Contact(void);
		void    set_vars(void);
		void    view_full(int index);
		void    view_short(int index);
};

#endif
