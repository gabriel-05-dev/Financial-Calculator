#include <cmath>
#include <iostream>

double calculateCompound(double principal, double annualInterestRate, int timesCompounded, int numberYears) {
    double finalAmount;
    finalAmount = principal* pow((1+annualInterestRate/timesCompounded), (timesCompounded*numberYears));
    return finalAmount;
}

double getAmount() {
    double amount;
    std::cout << "Input amount to invest : " << std::endl;
    std::cin >> amount;
    return amount;
}

double getInterestRate() {
    double interestRate;
    std::cout << "Input annual interest rate in decimal (e.g 2% = 0.02): " << std::endl;
    std::cin >> interestRate;
    return interestRate;
}

int getInterestCompounded() {
    int timesCompounded;
    std::cout << "Input times interest rate compounded a year : " << std::endl;
    std::cin >> timesCompounded;
    return timesCompounded;
}

int getYears() {
    int years;
    std::cout << "Input years  : " << std::endl;
    std::cin >> years;
    return years;
}



int main() {
    int choice;
    std::cout << "Welcome to the compound interest calculator.\nTo start, please choose either 1 or 2." << std::endl;
    std::cout << "1. Compound interest\n2. Loan Payment" << std::endl;
    std::cin >> choice;
    if (choice == 1) {
       std::cout << "You have chosen : Compound interest" << std::endl;
       double amount = getAmount();
       double interestRate = getInterestRate();
       double compounded = getInterestCompounded();
       double years = getYears();
       double answer = calculateCompound(amount, interestRate, compounded, years);
       std::cout << "The final amount is : " << answer << std::endl;
    } else if (choice == 2) {
        std::cout << "You have chosen : Loan Payment" << std::endl;
    }


}