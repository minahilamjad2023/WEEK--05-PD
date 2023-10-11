#include<iostream> 
using namespace std;
float taxCalculator(char type , float price);
float taxCal(float price , float tax);

int main()
{
    float price; 
    char type ;
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    taxCalculator(type, price);
}

float taxCal(float price, float tax)
{
     float taxAmount;
     float finalPrice;
     taxAmount = price* tax/100;
     finalPrice = price+taxAmount;
     return finalPrice;
     
}



float taxCalculator(char type, float price)
{
    float finalPrice;
    if(type == 'M')
{   
              float tax = 6 ; 
              finalPrice = taxCal(price,tax);             
              cout<< "The final price of a vehicle of type " << type <<" after adding the tax is "<<"$"<< finalPrice<<endl;
}

if (type == 'E')
{ 
      float tax = 8 ;
      finalPrice = taxCal(price,tax);
    cout<< "The final price of a vehicle of type " << type <<" after adding the tax is "<<"$"<< finalPrice<<endl;           
}


if(type == 'S')
{ 
     float tax = 10;
     finalPrice = taxCal(price,tax);
    cout<< "The final price of a vehicle of type " << type <<" after adding the tax is "<<"$"<< finalPrice<<endl;  
}

if(type == 'V')
{
    float tax = 12;
    finalPrice = taxCal(price, tax);
   cout<< "The final price of a vehicle of type " << type <<" after adding the tax is "<<"$"<< finalPrice<<endl;  
}

if(type == 'T')
{ 
     float tax = 15;
     finalPrice = taxCal(price, tax);
    cout<< "The final price of a vehicle of type " << type <<" after adding the tax is "<<"$"<< finalPrice<<endl;   
}
 return finalPrice;
}

