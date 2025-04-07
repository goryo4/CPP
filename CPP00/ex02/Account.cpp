/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:36:02 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 11:40:21 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Account.hpp"

int	Account::_nbAccounts = 8;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void) {
	std::time_t t = std::time(NULL);
	std::tm* tm = std::localtime(&t);
	std::cout << "[" 
				<< (tm->tm_year + 1900) 
				<< std::setw(2) << std::setfill('0') << (tm->tm_mon + 1)
				<< std::setw(2) << tm->tm_mday
				<< "_"
				<< std::setw(2) << tm->tm_hour
				<< std::setw(2) << tm->tm_min
				<< std::setw(2) << tm->tm_sec
				<< "] ";
}

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int Account::getTotalAmount(void) {
	return (_totalAmount);
}

int Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) {
   static int i = 0;
   
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << i << ";amount:" << _amount << ";created" << std::endl;
	i++;
}

void    Account::makeDeposit(int deposit) {
	static int i = 0;
	int p_amount = _amount;

    _nbDeposits = deposit;
	_amount += _nbDeposits;
	_totalAmount += _amount - p_amount;
	_displayTimestamp();
	std::cout << "index:" << i << ";p_amount:" << p_amount << ";deposit:" << _nbDeposits << ";amount:" << _amount << ";nb_deposits:1" << std::endl;
	i++;
	_totalNbDeposits++;
}

bool    Account::makeWithdrawal(int withdrawal) {
	static int i = 0;
	int p_amount = _amount;
	
	_displayTimestamp();
    if (withdrawal > _amount)
	{
		_nbWithdrawals = 0;
		std::cout << "index:" << i << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
		i++;
		return (false);
	}
	_nbWithdrawals = 1;
	_amount -= withdrawal;
	_totalAmount += _amount - p_amount;
	std::cout << "index:" << i << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals <<std::endl;
	i++;
	_totalNbWithdrawals += _nbWithdrawals;
	return (true);
}

int	Account::checkAmount (void) const {
	return (_amount);
}

void Account::displayStatus (void) const {
	static int i = 0;
	
	_displayTimestamp();
	std::cout << "index:" << i << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	if (i == 7)
		
		i = 0;
	else 
		i++;
	
}

Account::~Account() {
	static int i = 0;
	
	_displayTimestamp();
	std::cout << "index:" << i << ";amount:" << _amount << ";closed" << std::endl;
	i++;
	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
}