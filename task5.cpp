#include <iostream>
using namespace std;
int main(){
    float price1=12.95;
    float price2=24.95;
    float price3=6.95;
    float price4=14.95;
    float price5=3.95;

    cout << "Item 1: $" << price1 <<endl;
    cout << "Item 3: $" << price3 <<endl;
    cout << "Item 4: $" << price4 <<endl;
    cout << "Item 5: $" << price5 <<endl;
    
    float subtotal=price1+price2+price3+price4+price5;
    float salestax= subtotal*0.06;
    float total=subtotal+salestax;
    cout<< "subtotal="<< subtotal <<endl;
    cout<< "sales tax="<< salestax <<endl;
    cout<< "total="<< total <<endl;
    return 0;
    
}
