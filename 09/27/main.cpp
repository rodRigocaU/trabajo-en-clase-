#include <iostream>
#include <vector>
using namespace std;
int pow(int *p, int *p2)
{
    int aux = 1;
    for(int x = 1; x <= *p2; x++)
    {
        aux *= *p;
    }
    return aux;
}
bool bi(int *p)
{
    return !(!(*p % 4) & (!( *p% 400) || !( *p % 100)));
}
bool isPrime(int *number)
{
    int cont = 0;
    for(int x = 1; x <= *number; x++)
    {
        if (*number % x == 0)
        {
            cont ++;
        }
    }
    return (cont == 2);
}
bool isPerfect(int *n)
{
    int cont = 0;
    for(int x = 1; x <= (*n/2);x++)
    {
        if(!(*n%x))
            cont += x;
    }
    return(cont = *n);
}
int main()
{
    /*vector<int> v1(0);
    v1[0] = 2;
    cout << v1[0] << '\n';
    v1.push_back(8);
    cout << v1[1] << '\n';*/
    int a = 2;
    int b = 4;
    int c = 2016;
    int d = 7;
    int e = 6;
    cout << pow(&a,&b) << '\n';
    cout << bi(&c) << '\n';
    cout << isPrime(&d) << '\n';
    cout << isPerfect(&e) << '\n';
    return 0;
}
