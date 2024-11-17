#include <iostream>
using namespace std;

bool PowOfThree(int n) {
    if (n == 1)
        return true;
    if (n == 0)
        return false;

    n /= 3;
    PowOfThree(n);
}

int main()
{
    int n;

    cin >> n;
    cout << PowOfThree(n);
}
