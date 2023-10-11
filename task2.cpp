#include<iostream>
using namespace std;
float  pyramid(float length,float height,float width,string outputunit);

main()
{ 
    float length , width, height;
    string outputunit;
    cout << "Enter the length of the pyramid  (in meters): ";
    cin >>length;
    cout << "Enter the width of the pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of the pyramid (in meters): ";
    cin>> height;
    cout << "Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
    cin>> outputunit;
    pyramid (length,height,width,outputunit);
   
}

float  pyramid(float length,float height,float width,string outputunit)   
{
     float volume;
     volume = (length*height*width)/3;
     float millimeters;
     millimeters = volume*1000;
     float centimeters;
     centimeters = volume*100;
     float kilometers;
     kilometers = volume/1000;
      
     if (outputunit == "millimeters")
     { 
        cout << "The volume of the pyramid is: " << millimeters << " cubic meters " << endl; 
     }
     if(outputunit == "centimeters")

{
     cout <<"The volume of the pyramid is: " << centimeters << " cubic meters " << endl;
}

     if(outputunit ==  "meters")
     {    cout << "The volume of the pyramid is: " << volume << " cubic meters " << endl;
     }

    if (outputunit == "kilometers")
    { cout <<"The volume of the pyramid is:  " << kilometers << "  cubic meters " << kilometers << endl;
    }
     
      return 0;
     
}
 






    
