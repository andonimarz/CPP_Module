/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:39:17 by amarzana          #+#    #+#             */
/*   Updated: 2023/02/03 09:39:18 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount= 0;
int	Account::_totalNbDeposits= 0;
int	Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) 
{
	return (_nbAccounts);
}

int		Account::getTotalAmount( void ) 
{
	return (_totalAmount);
}

int		Account::getNbDeposits( void ) 
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void ) 
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) 
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
		<< ";" << "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";" 
		<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) 
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += _amount;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";" << "amount:" << _amount << ";"
		<< "created" << std::endl;
}

Account::~Account( void ) 
{
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) 
{
	this->_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";" 
		<< "p_amount:" << _amount << ";" << std::flush;
	_amount += deposit;
	std::cout << "deposit:" << deposit << ";" << "amount:"
		<< _amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal )
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";" << "withdrawal:" << std::flush;
	if (withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";" << std::flush;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << "amount:" << _amount << ";" << "nb_Withdrawals:"
		<< _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:"
		<< _amount << ";" << "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	std::time_t time = std::time(NULL);

	std::cout << std::setfill('0')
		<< "["
		<< 1900 + std::localtime(&time)->tm_year
		<< std::setw(2) << 1 + std::localtime(&time)->tm_mon
		<<  std::setw(2) << std::localtime(&time)->tm_mday
		<<  "_"
		<<  std::setw(2) << std::localtime(&time)->tm_hour
		<<  std::setw(2) << std::localtime(&time)->tm_min
		<<  std::setw(2) << std::localtime(&time)->tm_sec 
		<< "] " << std::flush;
}
