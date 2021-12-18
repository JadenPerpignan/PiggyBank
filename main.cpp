#include <iostream>


int main ( ) {

    double pesos;
    double reais;
    double soles;

    double dollars;

    std::cout << "Enter number of Columbian Pesos: ";
    std::cin >> pesos;
    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;
    std::cout << "Enter number pf peruvian Soles: ";
    std::cin >> soles;

//Pesos conversion rate: 1 Columbian Peso is 0.00027 USD
//Reais conversion rate: 1 Brazilian Reais is 0.18 USD
//Soles conversion rate: 1 Peruvian Sole is 0.24 USD

    dollars = ( 0.00027 * pesos ) + ( 0.18 * reais ) + ( 0.24 * soles );
    std::cout << "US Dollars = $" << dollars;
}
