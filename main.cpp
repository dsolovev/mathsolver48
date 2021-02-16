#include <iostream>

int main(int /*argc*/, char const */*argv*/[])
{
    int a, b, f;
    std::cout << "vvedite chisla a, b, f: ";
    std::cin >> a >> b >> f;
    std::cout << "x = (а + b — f / а) + f * a * a — (a + b) = "
              << (a + b - f / a) + f * a * a - (a + b) << '\n';
}
