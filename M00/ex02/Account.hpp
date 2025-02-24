// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account {

private:
	Account(void);
	
	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;
	int			_accountIndex;
	int			_amount;
	int			_nbDeposits;
	int			_nbWithdrawals;
	static void	_displayTimestamp(void);

public:
	typedef Account		t;
	Account(int initial_deposit);
	~Account(void);

	static int	getNbAccounts(void);
	static int	getTotalAmount(void);
	static int	getNbDeposits(void);
	static int	getNbWithdrawals(void);
	static void	displayAccountsInfos(void);
	void		makeDeposit(int deposit);
	bool		makeWithdrawal(int withdrawal);
	int			checkAmount(void) const;
	void		displayStatus(void) const;
};

#endif 
