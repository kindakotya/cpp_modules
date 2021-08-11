/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:23:54 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/12 01:55:26 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <locale>

Account::Account(int initial_deposit)
{
	_accountIndex = ++_nbAccounts;
	++_total
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

int	Account::getNbAccounts()
{
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp()
{
	time_t	secs;

	secs = std::chrono::system_clock::now().time_since_epoch().count() / 1000000;
	std::cout << std::put_time(std::localtime(&secs), "%Y%m%d_%H%M%S");
}

void	Account::makeDeposit(int deposit)
{
	deposit = 0;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	return (0);
}

int	Account::checkAmount() const
{
	return (0);
}

void	Account::displayStatus() const
{}