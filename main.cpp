#include <cmath>
#include <iostream>

double calculateCompound(double principal, double annualInterestRate, int timesCompounded, int numberYears);
double calculateLoan(double loanAmount, double interestRate, int numberOfMonths);
double getAmount();
double getInterestRate();
int getInterestCompounded();
int getYears();
int getMonths();

int main() {
    int choice;
    std::cout << "Welcome to the compound interest calculator.\nTo start, please choose either 1 or 2.\n" << std::endl;
    std::cout << "1. Compound interest\n2. Monthly Loan repayment" << std::endl;
    std::cin >> choice;
    if (choice == 1) { //compound interest
       std::cout << "You have chosen : Compound interest" << std::endl;
       double amount = getAmount();
       double interestRate = getInterestRate();
       double compounded = getInterestCompounded();
       double years = getYears();
       double answer = calculateCompound(amount, interestRate, compounded, years);
       std::cout << "The final amount is : " << answer << std::endl;
    
    } else if (choice == 2) {
        std::cout << "You have chosen : Loan Payment" << std::endl;
        double loanAmount = getAmount();
        double interestRate = getInterestRate();
        int time = getMonths();
        double repayment = calculateLoan(loanAmount, interestRate, time);
        std::cout << "Your monthly repayment is : " << repayment << std::endl;
        std::cout << "The total interest you will pay is : " << (repayment*time) - loanAmount << std::endl; 
    } else {
        std::cout << "Invalid or no choice made. program will now exit." << std::endl;
        return 0;
    }

    return 0;
}

double calculateCompound(double principal, double annualInterestRate, int timesCompounded, int numberYears) {
    double finalAmount;
    finalAmount = principal* pow((1+annualInterestRate/timesCompounded), (timesCompounded*numberYears));
    return finalAmount;
}

double calculateLoan(double loanAmount, double interestRate, int numberOfMonths) {
    interestRate = interestRate/12;
    double repaymentPerMonth = loanAmount*(((interestRate)*pow(1 + interestRate, numberOfMonths)))/(pow((1+interestRate), numberOfMonths)-1);
    return repaymentPerMonth;
}

double getAmount() {
    double amount;
    std::cout << "Input principal ( amount taken on loan or investment) : " << std::endl;
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

int getMonths() {
    int months;
    std::cout << "Input months  : " << std::endl;
    std::cin >> months;
    return months;
}


