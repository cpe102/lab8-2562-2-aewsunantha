#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;



int main(){	
	
    double loan,rate,pay,PrevBalance,payment,NewBalance=1,Interest,Total,Balance=0;
	cout<<"Enter initial loan: ";
	cin>>loan;
	cout<<"Enter interet rate per year (%): ";
	cin>>rate;
    cout<<"Enter amount you can pay per year: ";
	cin>>pay;

    
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	

	
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	
	NewBalance=loan;
    for(int x=1; x<=1000 ;x++){
	
	Balance=NewBalance;	
	Interest=Balance*(rate*0.01);
	Total=Balance+Interest;
	payment=pay;
	NewBalance=Total-payment;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << x; 
	cout << setw(13) << left <<Balance;
	cout << setw(13) << left <<Interest;
	cout << setw(13) << left <<Total;
	if(Total<pay){
		payment=Total;
		NewBalance=Total-payment;
	cout << setw(13) << left <<payment;
	cout << setw(13) << left <<NewBalance;
	}else{
	cout << setw(13) << left <<payment;
	cout << setw(13) << left <<NewBalance;
	cout << "\n";	
	}
	if(NewBalance==0) break;
	}
	
	return 0;
}
