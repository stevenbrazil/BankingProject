#include <iostream>
#include <string>

class BankAccount
{
  private:
      // TODO: declare member variables
    std::string owner;
    long int account_number;
    float balance;

  public:
      // TODO: declare setters
    void setOwner(std::string owner);
    void setAccountNumber(long int account_number);
    void setBalance(float balance);
      // TODO: declare getters
    std::string getOwner() const;
    long int getAccountNumber() const;
    float getBalance() const;
};

// TODO: implement setters
void BankAccount::setOwner(std::string owner){
        
    BankAccount::owner = owner;
}
    
void BankAccount::setAccountNumber(long int account_number){
        
    BankAccount::account_number = account_number;
}

void BankAccount::setBalance(float balance){
        
    BankAccount::balance = balance;
}
// TODO: implement getters
    
std::string BankAccount::getOwner()const{
        
    return BankAccount::owner;
}

long int BankAccount::getAccountNumber()const{
        
    return BankAccount::account_number;
}

float BankAccount::getBalance()const{
        
    return BankAccount::balance;
}

int main(){
    // TODO: instantiate and output a bank account
    BankAccount personalBank;
    personalBank.setOwner("Steve");
    personalBank.setBalance(1000.05);
    
    std::cout << "Account Information:\n";
    std::cout <<"======================\n";
    std::cout <<"Owner: " << personalBank.getOwner() << "\n";
    std::cout <<"Balance: $" << personalBank.getBalance() << "\n"; 
}