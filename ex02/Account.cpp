/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:08:43 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/09 16:04:25 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	return ;
}

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount(0),
	_nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";amount:"
		<< initial_deposit << ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"
		<< Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
		<< ";deposit:" << deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:"
		<< this->_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
		<< ";withdrawal:";
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << withdrawal << ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (1);
	}
	else
	{
		std::cout <<  "refused" << std::endl;
		return (0);
	}
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	current_time;

	
	//add function to display timestamps
}
