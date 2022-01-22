// #include <vector>
// #include <algorithm>
// #include <functional>
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += this->_amount;
	this->_nbAccounts++;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t generaltime = std::time(0);
	std::tm *localt = localtime(&generaltime);

	std::cout << '[' << std::setfill('0') << (localt->tm_year + 1900)
			  << std::setw(2) << (localt->tm_mon + 1)
			  << std::setw(2) << localt->tm_mday << '_'
			  << std::setw(2) << localt->tm_hour
			  << std::setw(2) << localt->tm_min
			  << std::setw(2) << localt->tm_sec << "] ";
}

int		Account::checkAmount(void) const
{
	return this->_amount > 0; // ICI
}

void	Account::displayStatus(void) const
{
	int	i = 0;
	while(i <= getNbAccounts())
	{
		_displayTimestamp();
		std::cout << "index: " << i << ";";
		std::cout << "amount: " << checkAmount() << ";"; // coder checkAmount et ICI
		std::cout << "deposits: " << i << ";";
		std::cout << "withdrawals: " << i << ";";
		i--;
	}
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}