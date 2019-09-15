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
  double total;

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

  total = hotel_expense + meal_expense;

  std::cout << "Location\t" << "Days\t" << "Hotel\t" << "Meals\t" << "Total\t" << std::endl;
  std::cout << location << "\t\t" << days << "\t" << hotel_expense << "\t" << meal_expense << "\t" << total << std::endl;
}
