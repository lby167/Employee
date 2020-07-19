
#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEE=7; //constant 7
    int empID[NUM_EMPLOYEE];//empID array which has 7 integers
    int Hours[NUM_EMPLOYEE];//Hours array has 7 integers
    double payRate[NUM_EMPLOYEE];//pay rate array which has 7 double values
    double Wages[NUM_EMPLOYEE];// wages array which has 7 double values
    
    //create empID array and ask user input for hour and pay rate for each employee, respectively
    for(int i=0;i<NUM_EMPLOYEE;i++){
        empID[i]=i+1;//create empID array with initial starts with 1 not 0.
        cout<<"Employee number "<<empID[i]<<" work hours is: ";
        cin>>Hours[i];//ask user input hour
        while(Hours[i]<0){
            cout<<"please enter work hours as positive number ";
            cin>>Hours[i];
        }
        cout<<"Employee number "<<empID[i]<<" pay rate is : ";
        cin>>payRate[i];//ask user input pay rate
        while(payRate[i]<0){
            cout<<"please enter pay rate as positive number ";
            cin>>payRate[i];
        }
        
        Wages[i]=Hours[i]*payRate[i];//multiply hour and pay rate to get gross wages for each employee
        
    }
    
    //print out the employee id with his gross wage, respectively
    for(int j=0;j<NUM_EMPLOYEE;j++){
        cout<<"Employee "<<empID[j]<<" gross wage is ";
        cout<<Wages[j]<<". "<<endl;
    }
    return 0;
}
