#include"crypt_app.h"
#include<iostream>
#include<vector>
#include<string>
orderbookentry:: orderbookentry(double price,double amount,std::string timestamp, std::string product,ordertype type):
                 price{price},amount{amount},product{product},timestamp{timestamp},type{type}{};
void app_main::init()
{
    bool check=true;
    int userop;
    do{
        loaddata();
        printmenu();
        userop = input();
        check=processinput(userop);
    }while(check);
    };                 
void app_main::printmenu()
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
/*Takes input from the user*/
int app_main::input()
{
    int userop;
    std::cout<<"Please specify input between 1-6"<<std::endl;
    std::cin>>userop;
    std::cout<<"Input Submitted"<<std::endl;
    return userop;
}
bool app_main::processinput(int &userop)
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
void app_main::printhelp()
{
    std::cout<<"Choose options from the menu and follow the instructions"<<std::endl;
}
void app_main:: stats()
{
    std::cout<<"The Market Contains "<<orders.size()<<" items"<<std::endl;
}
void app_main::ask()
{
    std::cout<<"Warning!--- No currencies in wallet to sell"<<std::endl;
}
void app_main::bid()
{
    int bid;
    std::cout<<"Current bidding 196,234 USD for 5.23 Etherium, Place your offer"<<std::endl;
    std::cin>>bid;
    std::cout<<"Bid registered--Warning! wallet empty deposit the bid ammount within 2 hours or bid cancelled!"<<std::endl;
}
void app_main::wallet()
{
    std::cout<<"Wallet Empty!!!"<<std::endl;
}
void app_main::gonext()
{
    std::cout<<"Thank you for using our services"<<std::endl;
}
void app_main::loaddata()
{
  
    orders.push_back({123.01,0.24,"2020/03/17 17:01:24.884492","ETH/BTC",ordertype::bid});
    orders.push_back({12.01,0.234,"2020/03/17 17:01:24.884492","ETH/BTC",ordertype::ask});
}

