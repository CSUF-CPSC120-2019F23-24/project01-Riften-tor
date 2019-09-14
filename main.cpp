// Name: Annie Van
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>

int main()
{
  std::string location; // Location of trip
  int days; // Days the trip will take
  double hotel_expense;
  double meal_expense;

  std::cout << "Welcome to the Business Trip Tracker!" << std::endl;

  std::cout << std::endl; //Blank line to seperate intro and questions

  std::cout << "What is the business trip location? ";
  std::cin >> location;

  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel_expense;

  std::cout << "What is the total meal expense? ";
  std::cin >> meal_expense;

  std::cout << "Location" << std::setw(10) << "Days" << std::setw(10) << "Hotel" << std::setw(10) << "Meals" << std::setw(10) << "Total" << std::setw(10) << std::endl;
  std::cout << location << std::setw(6) << days << std::setw(6) << hotel_expense << std::setw(6) << meal_expense << std::setw(6) << std::endl;
}
