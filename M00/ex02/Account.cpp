//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀             𓐓  Account.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/08/24 19:56:37 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/03/01 17:50:11 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

# include <iostream>
# include <iomanip>
# include "Account.hpp"

//====<[ init Static Variable: ]>===============================================
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//====<[ Account Default Constructor: ]>========================================
Account::Account() : _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
}

//====<[ Account Constructor: ]>================================================
Account::Account(int initial_deposit) : _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:"		<< _accountIndex  << ";"
				    << "amount:"	<< _amount			  << ";"
				    << "created"	<< std::endl;
	_totalAmount += _amount;
	_nbAccounts++;
}

//====<[ Account Destructor: ]>=================================================
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:"		<< _accountIndex  << ";"
				    << "amount:"	<< _amount			  << ";"
				    << "closed"		<< std::endl;
}

//====<[ getNbAccounts: ]>======================================================
int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

//====<[ getTotalAmount: ]>=====================================================
int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

//====<[ getNbDeposits: ]>======================================================
int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

//====<[ getNbWithdrawals: ]>===================================================
int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

//====<[ displayAccountsInfos: ]>===============================================
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:"		<< _nbAccounts			    << ";"
				    << "total:"			  << _totalAmount			    << ";"
				    << "deposits:"		<< _totalNbDeposits		  << ";"
				    << "withdrawals:"	<< _totalNbWithdrawals  << std::endl;
}

//====<[ makeDeposit: ]>========================================================
void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:"			  << _accountIndex		  << ";"
				    << "p_amount:"		<< checkAmount()		  << ";"
				    << "deposit:"		  << deposit				    << ";"
				    << "amount:"		  << _amount + deposit	<< ";"
				    << "nb_deposits:"	<< _nbDeposits			  << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
}

//====<[ makeWithdrawal: ]>=====================================================
bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:"     << _accountIndex	<< ";"
				    << "p_amount:"  << checkAmount()	<< ";";
	if (_amount >= withdrawal)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:"	    << withdrawal			      << ";"
					    << "amount:"		      << _amount - withdrawal	<< ";"
					    << "nb_withdrawals:"  << _nbWithdrawals		    << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
	}
	else
		return (std::cout.write("withdrawal:refused\n", 19), false);
	return (true);
}

//====<[ checkAmount: ]>========================================================
int	Account::checkAmount(void) const
{
	return (_amount);
}

//====<[ displayStatus: ]>======================================================
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< "index:"			  << _accountIndex	<< ";" 
						<< "amount:"		  << checkAmount()	<< ";"
						<< "deposits:"		<< _nbDeposits		<< ";"
						<< "withdrawals:"	<< _nbWithdrawals	<< std::endl;
}

//====<[ _displayTimestamp ]>===================================================
void	Account::_displayTimestamp(void)
{
	std::time_t	timestamp;
	std::tm		*timeInfo;
	char		timePattern[40];

	timestamp = std::time(NULL);
	timeInfo = std::localtime(&timestamp);
	std::strftime(timePattern, 40, "[%Y%m%d_%H%M%S] ", timeInfo);
	std::cout << timePattern;	
}
