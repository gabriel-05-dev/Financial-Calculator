#include <iostream>

void calculateCompound(double amount, double principal, double interestRate, int timesCompounded, int numberYears) {

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