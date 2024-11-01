#include <iostream>
using namespace std;

class shop
{
    string product_ID[100];
    int product_price[100];
    int counter=0;
    static int tot_counter; // This is Static Variable


public:
    void setData();
    void display();
};

void shop ::setData()
{
    cout << "Enter Item Name: " << endl;
    cin >> product_ID[counter];
    cout << "Enter Item Price: " << endl;
    cin >> product_price[counter];
    counter++;
    tot_counter++;
}

void shop ::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of " << product_ID[i] << " is " << product_price[i] << endl;
    }
    cout<<"Total Products of shop: "<<counter<<endl;
    cout<<"Total Products of All shops: "<<tot_counter<<endl;
    cout<<"\n";
}

int shop :: tot_counter;       

int main()
{
    shop mart,gourmet;

    cout<<"Enter Gourmet Products: "<<endl;
    gourmet.setData();
    gourmet.setData();

    cout<<"Enter Mart Products: "<<endl;
    mart.setData();
    mart.setData();
    mart.setData();

    cout<<"Gourmet"<<endl;
    gourmet.display();
    
    cout<<"Mart"<<endl;
    mart.display();

    return 0;
}