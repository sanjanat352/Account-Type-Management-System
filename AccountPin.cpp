#include<iostream>
using namespace std;
class Account
{
   public:
   string acNumber;
   string acType;
   int balance;
   
   string getAcNumber()
   {
   	return acNumber;
   }	
    void setAcNumber(string acNumber)
	{
		this->acNumber=acNumber;
		   }	   
	string getAcType()
	{
		return acType;
	}
	void setAcType(string acType)
	{
		this->acType=acType;
		   }	   
		int getBalance()
		{
			return balance;
		   }   
		void setBalance(int balance)
		{
			this->balance=balance;
		   } 
		  void deposit()
		  {         
            int pin;
            
            cout<<"enter your pin : "<<endl;
            cin>>pin;
             if(pin==1234)
             {
             	cout<<"pin is correct : "<<endl;
             }
             	else
             {	 
			   cout<<"pin is incorrect "<<endl;	
             	for(int i=1;i<3;i++)
             {
				cout<<"enter your pin "<<endl;
             	cin>>pin;
	      }
				 cout<<"you have failed 3 attempts, your pin is locked for an hour, try after sometime"<<endl;	
      }  
            int amount;
            cout<<"enter your amount "<<endl;
            cin>>amount;
		  	int bal = getBalance();
		  	setBalance(bal+amount);
		  	cout<<"successfully deposited ammount then balance is:   "<<getBalance()<<endl;
}
			void withdrawn()
			{   
			    int amount;
				cout<<"enter withdrawn amount "<<endl;
				cin>>amount; 
				int bal = getBalance();
				if(bal>=amount)
				{
					setBalance(bal-amount);
					cout<<"successfully withdrawn ammount then balance is:   "<<getBalance()<<endl;
				}
				else
				{
					cout<<"insufficient amount "<<endl;
				}
			   } 
			   void fundtransfer(Account &ac,int amount)
			   { 
			   	 int toBal = getBalance();
			   	 int selfBal = ac.getBalance();
			   	 if(toBal>=amount)
			   	 {
			   	 	setBalance(toBal+amount);
			   	 	setBalance(selfBal-amount);
			   	 	cout<<"fund transfer is successfully then balance is:   "<<endl;
					}
					else
					cout<<"insufficient amount "<<endl;
					
			   }
		};
	   		   

  int main()
  {
  	Account sanjana,suhani;
  	sanjana.setAcNumber("6768GGHBB78");
  	sanjana.setAcType("saving");
  	sanjana.setBalance(60000);
  	
  	cout<<"sanjana details :"<<endl;
  	cout<<"ac number is:   "<<sanjana.getAcNumber()<<endl;
  	cout<<"ac type is:   "<<sanjana.getAcType()<<endl;
  	cout<<"ac balance is:  "<<sanjana.getBalance()<<endl;
  	
  	suhani.setAcNumber("57FGHJNB89GUH");
  	suhani.setAcType("saving");
  	suhani.setBalance(70000);
  	
  	cout<<"suhani details :"<<endl;
  	cout<<"ac number is:   "<<suhani.getAcNumber()<<endl;
  	cout<<"ac type is:   "<<suhani.getAcType()<<endl;
  	cout<<"ac balance is:  "<<suhani.getBalance()<<endl;
  	
  	sanjana.deposit();
  	cout<<"sanjana now balance is:   "<<sanjana.getBalance()<<endl;
  	
  	sanjana.withdrawn();
  	cout<<"sanjana now balance is:   "<<sanjana.getBalance()<<endl;
  	
  	
  	sanjana.fundtransfer(suhani,3000);
  	cout<<"sanjana now balance is:   "<<sanjana.getBalance()<<endl;
  	cout<<"suhani now balance is:    "<<suhani.getBalance()<<endl;
}
