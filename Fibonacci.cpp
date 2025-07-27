#include <iostream>

int main()
{
    int n;
    std::cout << "Please enter the number of terms in your fibonacci sequence! \n";
    std::cin >> n;
    int f[n];
    f[0] = 0;
    f[1] = 1;

    for(int i = 2; i < n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    //Now our array that is f[n] has been declared and been assigned the values now we print it

    for(auto bleh : f)
    {
        std::cout << bleh << " ";
    }
}