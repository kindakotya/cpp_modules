/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:23:54 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/14 22:04:53 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <locale>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount 
			<< ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	--_nbAccounts;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount 
			<< ";closed" << std::endl;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp()
{
	time_t	secs;

	secs = std::chrono::system_clock::now().time_since_epoch().count() / 1000000;
	std::cout << '[' << std::put_time(std::localtime(&secs), "%Y%m%d_%H%M%S") << "] ";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
			<< ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++_totalNbDeposits;
	std::cout << ";amount:" << _amount << ";nb_deposits:"
			<< _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
		++_nbWithdrawals;
		++_totalNbWithdrawals;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return (1);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
			<< _totalNbWithdrawals << std::endl;
}

int	Account::checkAmount() const
{
	return (_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount 
			<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
			<< std::endl;
}