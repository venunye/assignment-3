#include <iostream> 


using namespace std; 


int main() 

{ 

    int marks; 

    cout << "Enter your marks" << endl; 

    cin>> marks; 

    if( (marks>=80) && (marks <100))

    { 

        cout<<"your grade is "<<"A"; 

    } 

    else if ((marks>=75) && (marks<80) )

    { 


        cout<<"your grade is B+"<< endl; 

    } 

    else if ((marks>=70) &&(marks<75) )

    { 

        cout<<"your grade is "<<"B" ; 

    } 

    else if( (marks>=65)&&(marks<70) )

    { 

        cout<<"your grade is "<<"C+" ; 

    } 

    else if ((marks>=60)&&(marks<65) )

    { 

        cout<<"your grade is "<<"C" ; 

    } 

    else if ((marks>=55)&&(marks<60) )

    { 

        cout<<"your grade is "<<"D+" ; 

    } 

    else if ((marks>=50)&&(marks<55)) 

    { 

        cout<<"your grade is "<<"D" ; 

    } 

    else if ((marks>=45)&&(marks<50) )

    { 

        cout<<"your grade is "<< "E" ; 

    } 


    else if ((marks>=0)&&(marks<45) )

    { 

        cout<<"your grade is "<< "F" ; 

    } 

}
