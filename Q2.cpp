#include<iostream>
#include<stdio.h>
using namespace std;

class account{
private:
    int accountBalance;
public:
    account(int balance){
    if(balance>0){
            accountBalance = balance;
    }
    else{
        cout<<"Balance can't be negative setting it to zero"<<endl;
        balance = 0;
        accountBalance = balance;
    }
}
void Credit(int amount){
accountBalance = accountBalance + amount;
}
void Debit(int amount){
if(amount<=accountBalance){
    accountBalance = accountBalance - amount;
   }
else{
    cout<<"Debit amount should not exceed Account Balance"<<endl;
   }
}
int getBalance(){
return accountBalance;
}
  };

int main(){
int iBalance;
cout<<"Enter tne initial balance for Account1"<<endl;
cin>>iBalance;
account A1(iBalance);
int creditAmount;
cout<<"Enter the amount you want to add"<<endl;
cin>>creditAmount;
A1.Credit(creditAmount);
cout<<"Total Account Balance"<<endl;
cout<<A1.getBalance()<<endl;
int debitAmount;
cout<<"Enter the amount you want to withdraw"<<endl;
cin>>debitAmount;
A1.Debit(debitAmount);
cout<<"Total Account Balance"<<endl;
cout<<A1.getBalance()<<endl;
return 0;
}
