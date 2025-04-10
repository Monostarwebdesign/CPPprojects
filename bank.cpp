#include <iostream>

void GetChoice(int Choice, double balance);
void ShowBalance(double balance);
double Deposit();
double Withdraw(double balance);

int main(){
    double balance = 0;
    int Choice;

    std::cout << "********** Bank ***********\n";

    GetChoice(Choice, balance);

    return 0;
}

void GetChoice(int Choice, double balance){
    do{
        std::cout << "Enter your Choice: \n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> Choice;
        switch(Choice){
            case 1:
                ShowBalance(balance);
                break;
            
            case 2:
                balance += Deposit();
                break;

            case 3:
                balance -= Withdraw(balance);
                break;

            case 4:
                std::cout << "***************************";
                break;

            default:
                std::cout << "enter an correct value";
                break;
            
        }
    }while(Choice != 4);
}

void ShowBalance(double balance){
    std::cout << "You have " << balance << "$\n";
}

double Deposit(){
    double deposit;
    std::cout << "How much do you want to deposit? :";
    std::cin >> deposit;

    return deposit;
}

double Withdraw(double balance){
    int withdraw;
    bool loop = true;

    do{
        std::cout << "How much do you want to Withdraw? :";
        std::cin >> withdraw;

        if(withdraw <= 0){
            std::cout << "You can not withdraw that little\n";
        }
        else if(withdraw >= balance){
            std::cout << "You can not withdraw more than your balance\n";
        }
        else{
            loop = false;
        }
    }while(loop == true);
    
    return withdraw;
}