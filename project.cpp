#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class start_up_registration					// 1st Class ************************************
{
	protected:

		string title;
		string co_founder_name;
		int members;
		
	public:
	
		void start_up_title()
		{
			cout<<endl;
			cout<<"ENTER THE TITLE OF YOUR START-UP"<<endl;
			cin.ignore();
			cin.clear();
			getline( cin, title );
			
			cout<<endl;
		}
		
		void start_up_members()
		{
			cout<<"ENTER THE NAME OF CO-FOUNDER"<<endl;
			cin.clear();
			getline( cin, co_founder_name );
			
			cout<<endl;
			
			for ( int i=0; i<=10; i++ )
			{
		
				cout<<"ENTER THE NUMBER OF TOTAL MEMBERS OF YOUR TEAM"<<endl;
				cin>>members;
			
				if ( members <= 0 )
				{
					cout<<endl;
					cout<<"*************************************"<<endl;
					cout<<"WARNING ! INVALID ENTRY ! TRY AGAIN"<<endl;
					cout<<"*************************************"<<endl;
					cout<<endl;
				}
				
				else
				{
					break;
				}
			
				cout<<endl;
			
			
			}
			
		}
		
		void get_start_up_registration()
		{
		
		
			fstream registration;
			
			registration.open( "start_up.txt" , ios::out | ios::app );
		
			registration<<"START-UP REGISTRATION: "<<endl;
			registration<<"----------------------"<<endl;
			
			registration<<endl;
			
			registration<<"TITLE OF START-UP IS: "<<title<<endl;
			registration<<"CO-FOUNDER'S NAME: " <<co_founder_name<<endl;
			registration<<"TOTAL NUMBER OF MEMBERS ARE: "<<members<<endl; 
		
			registration<<endl;
			
			registration.close();
			
		
		
		
			cout<<"********************************************"<<endl;
			cout<<endl;
			
			cout<<"START-UP REGISTRATION: "<<endl;
			cout<<"----------------------"<<endl;
			cout<<endl;
		
			cout<<"TITLE OF START-UP IS: "<<title<<endl;
			cout<<"CO-FOUNDER'S NAME: " <<co_founder_name<<endl;
			cout<<"TOTAL NUMBER OF MEMBERS ARE: "<<members<<endl; 
			
			cout<<endl;
			cout<<"********************************************"<<endl;
		}
		
};



class start_up_details : public start_up_registration			// 2nd Class ********************************
{
	
	protected:
	
		string detailed_paragragh;
		long double expected_investment;
	
	
	public:
		
		void set_details()
		{
		
			cout<<"ENTER THE WHOLE BUSINESS IDEA ABOUT YOUR START-UP IN DETAIL"<<endl;
			cin.ignore();
			cin.clear();
			getline( cin , detailed_paragragh );
				
			cout<<endl;
			
			for ( int i=0; i<=10; i++ )
			
			{
			
				cout<<"ENTER THE EXPECTED INVESTMENT FOR YOUR START-UP"<<endl;
				cin>>expected_investment;
				
				if ( expected_investment <= 0 )
				{
					cout<<endl;
					cout<<"*************************************"<<endl;
					cout<<"INVALID ENTRY ! ENTER AGAIN"<<endl;
					cout<<"*************************************"<<endl;
					cout<<endl;
				}
				else
				{
					break;
				}
		
		
			}
				
			cout<<endl;
			
		}
		
		void get_details()
		{
		
			fstream registration;
			
			registration.open( "start_up.txt" , ios::out | ios::app );
		
			registration<<"START-UP DETAILS: "<<endl;
			registration<<"-----------------"<<endl;
			
			registration<<endl;
			
			registration<<"DETAILED BUSINESS IDEA IS: "<<detailed_paragragh<<endl;
			registration<<"EXPECTED INVESTMENT IS: RS. "<<expected_investment<<endl;
		
			registration<<endl;
			
			registration.close();
		
		
			
			cout<<"START-UP DETAILS: "<<endl;
			cout<<"-----------------"<<endl;
			cout<<endl;
			
			cout<<"DETAILED BUSINESS IDEA IS: "<<detailed_paragragh<<endl;
			cout<<"EXPECTED INVESTMENT IS: RS. "<<expected_investment<<endl;
			
			cout<<endl;
			cout<<"********************************************"<<endl;
			
		}
		
	
};


class investors_wallet									   // 3rd Class *********************************
{

	protected:
	
		long double total_wallet;
	
	public:

	
		void set_total_wallet()
		{
			for ( int i=0; i<=10; i++ )
			{
				cout<<"ENTER THE TOTAL AMOUNT OF WALLET INVESTORS HAVE"<<endl;
				cin>>total_wallet;
				
				if ( total_wallet <= 0 )
				{
					cout<<endl;
					cout<<"*************************************"<<endl;
					cout<<"INVALID ENTRY ! ENTER AGAIN"<<endl;
					cout<<"*************************************"<<endl;
					cout<<endl;		
				}
				else
				{
					break;
				}
				
			}
			
		}
		
		
		long double get_total_wallet()
		{
			return total_wallet;
		}
		
		
		void invest_choice()
		{
		
			char opt, option3;
			long double invest_money, total_money, money_left;
			int profit_ratio;
		
			cout<<endl;
		
			cout<<"-----------------------------------------------"<<endl;
			cout<<"ARE YOU INTERESTED TO INVEST IN ANY START-UP ?"<<endl;
			cout<<"ENTER '1', IF YOU WANT TO INVEST"<<endl;
			cout<<"ENTER ANY OTHER KEY, IF YOU DON'T WANT TO INVEST"<<endl;
			cout<<"-----------------------------------------------"<<endl;
			
			cin>>opt;
			
			cout<<endl;
			
			if ( opt == '1' )
			{
			
				for ( int i=0; i<=10; i++ )
				{ 
					cout<<endl;
				
					cout<<"HOW MUCH MONEY DO YOU WANT TO INVEST"<<endl;
					cin>>invest_money;
					
					if ( invest_money <= 0 )
					{
						cout<<endl;
						cout<<"*************************************"<<endl;
						cout<<"INVALID ENTRY ! TRY AGAIN"<<endl;
						cout<<"*************************************"<<endl;
						cout<<endl;
					}
					
					else
					{
						break;
					}
				
					cout<<endl;	
				}
				
				for ( int i=0; i<=10; i++ )
				{
				
					cout<<"ENTER HOW MUCH PROFIT RATIO YOU DEMAND FOR 5 YEARS"<<endl;
					cin>>profit_ratio;

					if ( profit_ratio < 0 )
					{
						cout<<endl;
						cout<<"INAVLID ENTRY ! TRY AGAIN"<<endl;
						cout<<endl;
					}
				
					else
					{
						break;
					}
					
					cout<<endl;
				}
				
				cout<<"*****************************************************************"<<endl;
				
				cout<<"TOTAL WALLET OF INVESTORS IS: RS. "<<total_wallet<<endl;
				cout<<"MONEY INVESTORS LIKE TO INVEST IS: RS. "<<invest_money<<endl;
				cout<<"PROFIT RATIO INVESTORS DEMAND FOR 5 YEARS IS: "<<profit_ratio<<"%"<<endl;
				
				cout<<"*****************************************************************"<<endl;
				cout<<endl;
				
				if ( invest_money > total_wallet )
				{
					cout<<endl;
					cout<<"********************************************************************"<<endl;
					cout<<"WARNING ! MONEY YOU WANT TO INVEST IS MORE THAN TOTAL MONEY YOU HAVE"<<endl;
					cout<<"********************************************************************"<<endl;
					cout<<endl;
				}
				else
				{
					money_left = total_wallet - invest_money;
					
					cout<<"********************************************************************"<<endl;
					cout<<"MONEY LEFT FOR THE INVESTORS: "<<money_left<<endl;
					cout<<"********************************************************************"<<endl;
					cout<<endl;
				}
				
				
				for ( int i=4; i>1; i-- )
				{
				
					cout<<"TOTAL ENTERIES LEFT, IF YOU WANT TO INVEST AGAIN: "<<i<<endl;
					cout<<endl;
				
					cout<<"--------------------------------------"<<endl;
					cout<<"DO YOU WANT TO INVEST AGAIN ?"<<endl;
					cout<<"ENTER '1', IF YOU WANT TO INVEST"<<endl;
					cout<<"ENTER ANY OTHER KEY, IF YOU DON'T WANT TO INVEST AGAIN"<<endl;
					cout<<"--------------------------------------"<<endl;
					cin>>option3;
				
					if ( option3 == '1' )
					{
						cout<<endl;
						cout<<"********************************************************************"<<endl;
						cout<<"MONEY LEFT BY THE INVESTORS: "<<money_left<<endl;
						cout<<"********************************************************************"<<endl;
						cout<<endl;
						
						cout<<"HOW MUCH MONEY WOULD YOU LIKE TO INVEST"<<endl;
						cin>>invest_money;
					
						if ( invest_money > money_left )
						{
							cout<<endl;
							cout<<"********************************************************************"<<endl;
							cout<<"WARNING ! MONEY YOU WANT TO INVEST IS MORE THAN TOTAL MONEY YOU HAVE"<<endl;
							cout<<"********************************************************************"<<endl;
							cout<<endl;
						}
						else
						{
							money_left = money_left - invest_money;
							
							cout<<"********************************************************************"<<endl;
							cout<<"MONEY LEFT FOR THE INVESTORS: "<<money_left<<endl;
							cout<<"********************************************************************"<<endl;
							cout<<endl;
						}
						
						
					}		// ending of if loop
				
					else
					{
						cout<<endl;
						cout<<"IT'S OKAY ! YOU DON'T WANT TO INVEST MORE"<<endl;
						cout<<endl;
						break;
					}
					
					
					}		// ending of for loop
				
			}
			
			else
			{
				cout<<endl;
				cout<<"INVESTORS DON'T WANT TO INVEST"<<endl;
				cout<<endl;
			}
			
		
				
		}
		

};											


class start_up_choice							// 4th class ************************
{
	protected:
	
		char option5;;
	
	public:
	
	void decide()
	{
	
		cout<<endl;
		cout<<"---------------------------------------------------------------------------------"<<endl;
		cout<<"ARE YOU SATISFIED WITH THE AMOUNT OF INVESTMENT AND PROFIT RATIO BY THE INVESTORS"<<endl;
		cout<<"ENTER 'Y' or 'y', IF YOU ARE SATISFIED"<<endl;
		cout<<"ENTER ANY OTHER KEY, IF YOU ARE NOT"<<endl;
		cout<<"---------------------------------------------------------------------------------"<<endl;
		
		cin>>option5;
		
		if ( option5 == 'Y' || option5 == 'y' )
		{
			cout<<endl;
			
			cout<<"*****************************************"<<endl;
			cout<<endl;
			cout<<"CONGRAGULATIONS ! INVESTMENT DEAL IS DONE"<<endl;
			cout<<endl;
			cout<<"*****************************************"<<endl;
			
			cout<<endl;
			
		}
		
		else
		{
			cout<<"*****************************************"<<endl;
			cout<<endl;
			cout<<"AS YOU ARE NOT SATISFIED WITH THE INVESTMENT"<<endl;
			cout<<"WE ARE SORRY TO SAY THE DEAL IS CANCELLED"<<endl;
			cout<<endl;
			cout<<"*****************************************"<<endl;
			
		}		
		
	}
	
};


class reveal_start_ups					// 5th class *********************************
{
	public:
	
	
		void show_start_ups()
		{
		
		
			fstream show_data;
			
			show_data.open( "start_up.txt" , ios::in );
			
			while ( !show_data.eof() )
			{
				string temp;
				
				getline( show_data, temp );
				
				cout<<temp<<endl;
				
			}
			
			show_data.close();
			
		}
	

};








int main()										// main **********************************
{

	cout<<endl;
	cout<<"**********************************************************"<<endl;
	cout<<"WELCOME TO THE INCUBATION CENTER"<<endl;
	cout<<endl;
	cout<<"HERE YOU CAN REGISTER FOR GET INVESMENT FOR YOUR START-UP"<<endl;
	cout<<"**********************************************************"<<endl;
	cout<<endl;

	
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"ENTER '1', IF YOU WANT TO REGISTER FOR YOUR START-UP"<<endl;
	cout<<"ENTER '2', IF YOU ARE AN INVESTOR"<<endl;
	cout<<"ENTER ANY OTHER KEY TO EXIT"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	 
	cout<<endl;
	
	char option, option1, option2;
	long double money;
	
	cout<<"ENTER YOUR OPTION"<<endl;					// Start-up Section **************************
	cin>>option;
	
	if ( option == '1' )
	{
	
		start_up_registration obj1;
	
		obj1.start_up_title();
		obj1.start_up_members();
		
		start_up_details obj2;
	
		obj2.set_details();
		
		cout<<"------------------------------------------------"<<endl;
		cout<<"DO YOU WANT TO KNOW THE DETAILS OF YOUR START-UP ?"<<endl;
		cout<<"ENTER '1', IF YOU WANT TO KNOW"<<endl;
		cout<<"ENTER ANY OTHER KEY, IF YOU DON'T WANT TO KNOW"<<endl; 
		cout<<"------------------------------------------------"<<endl;
		
		cin>>option1;
		
		if ( option == '1' )
		{
			
			obj1.get_start_up_registration();
			obj2.get_details();
		}
		
		else
		{
			cout<<"IT'S OKAY, YOUR DETAILS ARE RECORDED"<<endl;
			
			cout<<endl;
		}
			
		
	}
	
	else if ( option == '2' )					// Investor's Section *********************************
	{
	
		cout<<endl;
		cout<<"---------------------------------"<<endl;
		cout<<"WELCOME TO THE INVESTOR'S SECTION"<<endl;
		cout<<"---------------------------------"<<endl;
		cout<<endl;
	
	
		investors_wallet obj3;
		start_up_choice obj4;
		reveal_start_ups obj5;
		
		obj3.set_total_wallet();	
		
		obj3.get_total_wallet();
		
		cout<<endl;
		cout<<"***********************************************"<<endl;
		cout<<"HERE IS THE LIST OF START-UPS AND THEIR DETAILS"<<endl;
		cout<<"***********************************************"<<endl;
		cout<<endl;
		cout<<endl;
		
		obj5.show_start_ups();
		
		cout<<endl;
		cout<<"*************************************************"<<endl;
		cout<<"THIS WAS THE LIST OF START-UPS WITH THEIR DETAILS"<<endl;
		cout<<"*************************************************"<<endl;
		cout<<endl;
	
		obj3.invest_choice();	
	
		obj4.decide();
				
	}

	else
	{
		cout<<"YOU HAVE EXITED"<<endl;	
	}	

}

