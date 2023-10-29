double bal = 100; // starting balance

/**
 * Display balance
 * 
 * @param balance
*/
void showBalance(double balance)
{
    std::cout << "You have " << std::to_string(balance) << "$ in your account." << std::endl;
}

/**
 * Determine deposit amount
 * 
 * @return deposited amount
*/
double deposit()
{
    double dep;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> dep;

    if (dep < 0) {
        std::cout << "Invalid Amount." << std::endl;
        return 0;
    }
    
    else {
        std::cout << "Deposited " << std::to_string(dep) << "$ into account." << std::endl;
        return dep;
    }
}

/**
 * Determine withdraw amount
 * 
 * @param balance
 * @return 0 Withdraw amount if invalid.
 * @return withdraw
*/
double withdraw(double balance)
{
    double with;

    std::cout << "Enter amount be witdrawn: ";
    std::cin >> with;

    if (with < 0) {
        std::cout << "Invalid amount" << std::endl;
        return 0;
    }

    else if (with <= balance) {
        std::cout << "Withdrew " << std::to_string(with) << "$ from account." << std::endl;
        return with;
    }

    else {
        std::cout << "Cannot withdraw amount greater than current balance." << std::endl;
        return 0;
    }
}
