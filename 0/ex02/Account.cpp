#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_totalAmount += _amount;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_nbDeposits++;
	_totalAmount = checkAmount() + deposit;
	_totalNbDeposits++;
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_deposit:" <<  getNbDeposits() << ";";

}

int		Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return _totalAmount;
}

int		Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

int		Account::checkAmount(void) const
{
	return _amount;
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

void	Account::displayStatus(void) const
{
		_displayTimestamp();
		std::cout << "index: " << _accountIndex << ";";
		std::cout << "amount: " << checkAmount() << ";";
		std::cout << "deposits: " << getNbDeposits() << ";";
		std::cout << "withdrawals: " << getNbWithdrawals() << ";";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}
