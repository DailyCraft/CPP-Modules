/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvan-hum <dvan-hum@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:49:31 by dvan-hum          #+#    #+#             */
/*   Updated: 2025/01/28 07:57:20 by dvan-hum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() : _nbDeposits(0), _nbWithdrawals(0) {
	_accountIndex = _nbAccounts++;
	_amount = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";created" << std::endl;
}

Account::Account(int initial_deposit) : _nbDeposits(0), _nbWithdrawals(0) {
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
}

int Account::getNbAccounts() {
	return _nbAccounts;
}

int Account::getTotalAmount() {
	return _totalAmount;
}

int Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount - deposit
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	if (_amount < withdrawal) {
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount + withdrawal
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;

	return true;
}

int Account::checkAmount() const {
	return _amount;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp() {
	std::time_t currentTime = std::time(NULL);
	std::tm *localTime = std::localtime(&currentTime);

	std::cout << '['
			<< std::setw(2) << std::setfill('0') << localTime->tm_year + 1900
			<< std::setw(2) << std::setfill('0') << localTime->tm_mon + 1
			<< std::setw(2) << std::setfill('0') << localTime->tm_mday
			<< '_'
			<< std::setw(2) << std::setfill('0') << localTime->tm_hour
			<< std::setw(2) << std::setfill('0') << localTime->tm_min
			<< std::setw(2) << std::setfill('0') << localTime->tm_sec
			<< "] ";
}
