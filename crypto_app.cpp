/* Challenge
Write some test code that creates multiple OrderBookEntry objects with different
values and stores them into a vector. Now write some useful functions. The
names should tell you what you need to calculate:
double computeAveragePrice(std::vector<OrderBookEntry>& entries)
double computeLowPrice(std::vector<OrderBookEntry>& entries)
double computeHighPrice(std::vector<OrderBookEntry>& entries)
double computePriceSpread(std::vector<OrderBookEntry>& entries)
These functions can be placed anywhere in main.cpp before the main function.
They are not part of the OrderBookEntry class */
#include<iostream>
#include<string>
#include<vector>
void printmenu();
int input();
bool processinput(int &userop);
void printhelp();
void stats();
void ask();
void bid();
void wallet();
void gonext();
enum class ordertype
{
    bid,ask
};
class orderbookentry
{
    public:
    orderbookentry(double price,double amount,std::string timestamp, std::string product,ordertype type): price{price},amount{amount},product{product},timestamp{timestamp},type{type}{};
    double price;
    double amount;
    std::string product;
    std::string timestamp;
    ordertype type;


};
int main(){
    orderbookentry order_1(123123120.01,0.24,"2020/03/17 17:01:24.884492","ETH/BTC",ordertype::bid);
    orderbookentry order_2(100000000.01,0.234,"2020/03/17 17:01:24.884492","ETH/BTC",ordertype::ask);
    std::vector<orderbookentry> entries;
    entries.push_back(order_1);
    entries.push_back(order_2);
    bool check=true;
    int userop;
    do{
        for (orderbookentry ord : entries)
        {
            std::cout<<ord.price<<std::endl;
        }
        printmenu();
        userop = input();
        check=processinput(userop);
    }while(check);
    return 0;
}
void printmenu()
{
    std::cout<<"Press :"<<std::endl;
    std::cout<<"1: Print help."<<std::endl
    <<"2: Print exchange stats."<<std::endl
    <<"3: Place an ask."<<std::endl
    <<"4: Place a bid."<<std::endl
    <<"5: Print Wallet."<<std::endl
    <<"6: continue."<<std::endl
    <<"0: exit"<<std::endl;
}
int input()
{
    int userop;
    std::cout<<"Please specify input between 1-6"<<std::endl;
    std::cin>>userop;
    std::cout<<"Input Submitted"<<std::endl;
    return userop;
}
bool processinput(int &userop)
{  
    
    switch (userop){
        case 1:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        printhelp();
        break;
        case 2:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        stats();
        break;
        case 3:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        ask();
        break;
        case 4:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        bid();
        break;
        case 5:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        wallet();
        break;
        case 6:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        gonext();
        break;
        case 0:
        std::cout<<"Exiting Program"<<std::endl;
        return false;
        default:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        std::cout<<"Invalid Input"<<std::endl;
        break;
    }
    return true;
}
void printhelp()
{
    std::cout<<"Choose options from the menu and follow the instructions"<<std::endl;
}
void stats()
{
    std::cout<<"The Exchange stats are 1023$/1 B$"<<std::endl;
}
void ask()
{
    std::cout<<"Warning!--- No currencies in wallet to sell"<<std::endl;
}
void bid()
{
    int bid;
    std::cout<<"Current bidding 196,234 USD for 5.23 Etherium, Place your offer"<<std::endl;
    std::cin>>bid;
    std::cout<<"Bid registered--Warning! wallet empty deposit the bid ammount within 2 hours or bid cancelled!"<<std::endl;
}
void wallet()
{
    std::cout<<"Wallet Empty!!!"<<std::endl;
}
void gonext()
{
    std::cout<<"Thank you for using our services"<<std::endl;
}