#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void) {

}

Account::Account(int initial_deposit){

    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::_displayTimestamp(void) {
    time_t  t = time( NULL );
    struct tm *myTime = localtime(&t);

    std::cout << "[";
    std::cout << std::setfill('0') << myTime->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << myTime->tm_mon + 1;
    std::cout << std::setfill('0') << std::setw(2) << myTime->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << myTime->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << myTime->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << myTime->tm_sec;
    std::cout << "]";

    /* for test */
    // std::cout << "[19920104_091532] ";
}

void Account::displayAccountsInfos(void) {

    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (_amount - withdrawal < 0) {
        std::cout << "withdrawal:refused" << std::endl;
        return (true);
    } else {
        std::cout << "withdrawal:" << withdrawal << ";";
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << "amount:" << _amount << ";";
        std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
        return (false);
    }
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::checkAmount(void) const {
    return (0);
}
