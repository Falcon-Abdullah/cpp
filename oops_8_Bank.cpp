#include <iostream>
using namespace std;

class Bank
{
    float interest;
    int years;
    int amount;

public:
    Bank() {}

    Bank(float i_f, int y, int a);

    void display()
    {
        float finalAmount = amount;
        for (int i = 0; i < years; i++)
        {
            finalAmount += finalAmount * interest; // Correct compound interest calculation
        }
        cout << "The amount after " << years << " years is " << finalAmount
             << " at the interest rate of " << interest * 100 << "%" << endl;
    }
};

Bank::Bank(float i_f, int y, int a)
{
    // If the input interest is greater than or equal to 1, assume it's a percentage and convert to decimal
    if (i_f >= 1.0f)
    {
        interest = i_f / 100.0f;
    }
    else
    {
        interest = i_f;
    }
    years = y;
    amount = a;
}

int main()
{
    int amount, years;
    float interest;
    cout << "Enter interest rate (as decimal or percentage), years, and amount: " << endl;
    cin >> interest >> years >> amount;

    Bank o1(interest, years, amount); // Initialize using float for interest rate

    o1.display();

    return 0;
}
