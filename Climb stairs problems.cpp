#include <iostream>
using namespace std;
int fib(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int anss = fib(n);
    cout << anss << endl;

    return 0;
}