/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:38:34 by padam             #+#    #+#             */
/*   Updated: 2024/05/04 13:35:53 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account_::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_nbDeposits = 0;
	this->_amount= initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->nbAccounts << ";total:" << this->_amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}
