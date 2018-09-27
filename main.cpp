#include <iostream>

int factorial(int index)
{
    int result = 1;
    bool is_valid = (index >= 0);

    if( is_valid)
    {
        for (int i = 1; i <= index; i++)
        {
            result = result * i;
        }
    }

    return result;
}

void koef_calc(int n)
{
    for(int k = 0; k <= n; k++)
    {
        int result = factorial(n)/(factorial(k) * factorial(n - k));
        std::cout << "Koeff for n = " << n << " and k = " << k << " is equal <" << result << ">" << "\n";
    }
}

int main ()
{
    koef_calc(5);

    return 0;
}
