#include <iostream>
#include <cmath>

void Calculate();
void Get_end();

int main(){
    Calculate();
    Get_end();

    return 0;
}

void Calculate(){
    double a;
    double b;
    double c;

    bool loop;

    char side;

    std::cout << "********** Pythagoras solver **********\n";

    do{

        std::cout << "what side do you want to calculate (a, b, c (hypotenuse)): ";
        std::cin >> side;

        loop = false;

        switch(side){
            case 'a':
                std::cout << "side b: ";
                std::cin >> b;
    
                std::cout << "side c: ";
                std::cin >> c;
    
                a = sqrt(pow(c, 2) - pow(b, 2));
    
                std::cout << "side a = " << a << '\n';
    
                break;
    
            case 'b':
                std::cout << "side a: ";
                std::cin >> a;
    
                std::cout << "side c: ";
                std::cin >> c;
    
                b = sqrt(pow(c, 2) - pow(a, 2));
    
                std::cout << "side b = " << b << '\n';
    
                break;
    
            case 'c':
                std::cout << "side a: ";
                std::cin >> a;
        
                std::cout << "side b: ";
                std::cin >> b;
        
                c = sqrt(pow(a, 2) + pow(b, 2));
        
                std::cout << "side c = " << c << '\n';

                break;
    
            default:
                std::cout << "enter a side! (a, b, c)\n";
                loop = true;
                break; 
        }
    }while(loop == true);
}

void Get_end(){
    bool done = true;
    char getDone;

    do{
        std::cout << "Are you done? (type Y), Again? (type X): ";
        std::cin >> getDone;

        if(getDone == 'Y'){
            std::cout << "***************************************\n";
        }
        else if(getDone == 'X'){
            std::cout << "***************************************\n";
            Calculate();
            done = false;
        }
        else{
            done = false;
        }
    }while(done == false);
}