#include <iostream>

void calculateCompound(double principal, double interestRate, int timesCompounded, int numberYears) {
    double finalAmount;
}

double getAmount() {
    double amount;
    std::cout << "Input amount to invest : " << std::endl;
    std::cin >> amount;
    return amount;
}

double getInterestRate() {
    double interestRate;
    std::cout << "Input annual interest rate : " << std::endl;
    std::cin >> interestRate;
    return interestRate;
}

double getInterestCompounded() {
    double timesCompounded;
    std::cout << "Input times interest rate compounded a year : " << std::endl;
    std::cin >> timesCompounded;
    return timesCompounded;
}

float getYears() {
    float years;
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
    } else if (choice == 2) {
        std::cout << "You have chosen : Loan Payment" << std::endl;
    }


}