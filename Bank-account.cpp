#include<iostream>
using namespace std;
class bank
{
     char name[30];
     int account_no ;
     char account_type[30] ;
     int balance;
     public:
        void initialize(void);
        void deposit(void);
        void check_and_withdraw(void);
        void display(void);
};
 void bank::initialize(void)
 {
     cout<< "Enter Account holder's name: " ;
     cin>> name ;
     cout<< "\nEnter Account Type: " ;
     cin>> account_type ;
     cout<< "\nEnter Account Number: " ;
     cin>> account_no ;
     cout<< "\nEnter balance amount: " ;
     cin>> balance ;
 }
 void bank::deposit(void)
 {
     int b;
     cout<<"Enter amount to deposit: ";
     cin>> b ;
     balance= balance + b ;
     cout<<"Amount deposited successfully.New total amount is: " << balance ;
 }
 void bank::check_and_withdraw(void)
 {
     int bl;   
     cout<< "Your Balance is: " << balance ;
     cout<< "\nEnter amount to withdraw: " ;
     cin>> bl ;
     if(bl<= balance)
     {
         balance= balance - bl ;
         cout<< "\nRemaining Balance: " << balance ;
     }
     else
     {
         exit(0);
     }
 }
 void bank::display(void)
 {
     cout<< "Your Name is: " << name ;
     cout<< "\nYour balance is: " << balance ;
 }
 int main()
 {
     int ch;
     bank bk;
     bk.initialize();
     cout<<"\n 1.Your details\n 2.Deposit\n 3.Withdraw\n " ;
     cout<<"Enter your choice: \n" ;
     cin>> ch ;
     if(ch==1)
     {
         bk.display();
     }
     else if(ch==2)
     {
         bk.deposit();
     }
     else
     {
         bk.check_and_withdraw();
     }
     return 0;
 }
