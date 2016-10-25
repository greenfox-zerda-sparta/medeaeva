#include <iostream>
#include <string>
  // create a function that returns it's input factorial


using namespace std;


int factorial(int n);

int main()
{
    int n;
string mystr;
cout << "What's your name? ";
getline (cin, mystr);
cout << "Hi " << mystr << "!" << endl;
cout << "Please, give me a positive integer!" << endl;
cin >> n;

    cout << "Alakazaam!" << endl;
    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

