#include"crypt_app.h"
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
class orderbookentry;
double compute_avg(std::vector<orderbookentry>& orders);
double compute_low(std::vector<orderbookentry>& orders);
double compute_hig(std::vector<orderbookentry>& orders);
int main(){
    orderbookentry order_1(123.01,0.24,"2020/03/17 17:01:24.884492","ETH/BTC",ordertype::bid);
    orderbookentry order_2(12.01,0.234,"2020/03/17 17:01:24.884492","ETH/BTC",ordertype::ask);
    std::vector<orderbookentry> orders;
    orders.push_back(order_1);
    orders.push_back(order_2);
    double highest = compute_hig(orders);
    double avg=compute_avg(orders);
    double lowest = compute_low(orders);
    std::cout<<"Lowest :"<<lowest<<std::endl
    <<"avg :"<<avg<<std::endl
    <<"Highest :"<<highest<<std::endl;
    bool check=true;
    int userop;
    do{
        for (orderbookentry& ord : orders)
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
        case 0:
        std::cout<<"Exiting Program"<<std::endl;
        return false;
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
        default:
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

double compute_avg(std::vector<orderbookentry>& orders)
{   double tot=0;
    double avg;
    for (orderbookentry& ord : orders)
    {
        tot+=ord.price;
    }
    avg =tot/orders.size();
    return avg;
}
double compute_low(std::vector<orderbookentry>& orders)
{   double lowest = orders[0].price;
    for (orderbookentry& ord : orders)
    {   if(lowest>ord.price)
        {
            lowest=ord.price;
        }

    }
    return lowest;
}
double compute_hig(std::vector<orderbookentry>& orders)
{   double highest = orders[0].price;
    for (orderbookentry& ord : orders)
    {   if(highest<ord.price)
        {
            highest=ord.price;
        }

    }
    return highest;
}
