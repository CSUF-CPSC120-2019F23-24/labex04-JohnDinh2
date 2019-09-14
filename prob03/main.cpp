// Sales prediction
#include <iostream>
#include <string>

int main()
{
  const int sales_of_last_year = 2103419277;

  double sales_percentage = 1.18;//calculate the sales estimated to be this year compared to the previous year

  unsigned int sales_of_this_year = sales_of_last_year * sales_percentage;//multiply the percentage to last year's sales

  std::cout << "Sales of last year were: $" << sales_of_last_year << std::endl;//Output the results for this year and last year.

  std::cout << "Sales of this year were: $" << sales_of_this_year << std:: endl;
}
