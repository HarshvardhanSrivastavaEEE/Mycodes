#include <iostream>
int factorial(int number);
int factorial1(int number1);
int main()
{

std::cout << factorial(5) << '\n';
std::cout << factorial1(20);

}

int factorial(int number)  //This is iterative approach!
{
    int result = 1;
    for(int i = 1; i <=number;i++)
    {
    result = result * i;
    }
    return result;
}
int factorial1(int number1) //This is recurssive approach1
{
    if(number1>1)
    {
     return number1 * factorial1(number1-1);
    }
    else
    {
        return 1;
    }

}