#include<iostream>
using namespace std;
int main(){
	
	
 int enterpin = 1234;
 int correctpin = 1234;
 
 cout<< "Enter your pin :";
 cin>> enterpin;
 	
double balance;
  balance = 1000.0;

 int amount ; 
int choice = 0;

  	if(enterpin == correctpin){
  		cout<< "\n\n****Access granted!****";
  		
  		
  		  cout<< "\n\n\n*************Enter your choice : *******************"; 
  			while(choice!=4){
 		cout<<"\n\nEnter 1 for Deposit :";
		cout<<"\nEnter 2 for withDraw :";
 		cout<<"\nEnter 3 for cheak Balance :";
 		cout<<"\nEnter 4 for Exit :";
    	 cin >>choice;
 		 
		switch(choice){
			case 1:
				cout<< "\nEnter amount to Deposit :" << amount;
 		 		cin >>amount;
 		 		balance = balance +amount;
 		 		cout<< "****Deposit successfull!****";
				break;
				
				
			case 2 :
				cout<< "\n Enter amount to withdrawl :";
				cin>> amount;
				
				if(amount>balance){
					cout<<"\nError : Insuffecient Funds!";
				}
				else{
					balance = balance-amount;
					cout<< "\n****withdrawl Successfully!****";
				}
 		 	    break;
 		 	    
 		 	    
 		 	case 3:
 		 			cout<<"\n\n Your Balance is :" << balance;
 		 		break;
 		 		
 		 		
 		 	case 4 : 
 		 	        cout <<"\n Thank you! Goodbye.";
 		 	    break;	
		}
 	
	 		}
	  }
	  else{
	  	cout<< "\n\n*****Incorrect Pin!  Access denied!*****";
	  }
 
 	return 0;
}



