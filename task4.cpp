#include<iostream>
using namespace std;
float projecttimecalculation(int hoursneeded,int days,int numofworkers);

main()
{
    int hoursneeded,days,numofworkers;
    cout<<"Enter the needed hours: ";
    cin >> hoursneeded;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> numofworkers;
    projecttimecalculation(hoursneeded,days,numofworkers);
}
  float   projecttimecalculation(int hoursneeded,int days,int numofworkers)
  {
    float time;
    time = (days*10)/100;
    int subtract;
    subtract = days-time;
    float workingdays;
    workingdays;
    workingdays = subtract*10*numofworkers;
    int remaininghours;
    remaininghours = hoursneeded-workingdays;
    if  
        (remaininghours <= hoursneeded)
        {
            cout << "Not enough time! " <<remaininghours<< " hours needed." <<endl;

         }
         if( remaininghours== hoursneeded)

        {
            cout << "Yes! " <<hoursneeded<< " hours left.";
        }
        

    
  }