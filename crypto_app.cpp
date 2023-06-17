#include<iostream>
void printmenu();
int input();
void processinput(int n);
void printhelp();
void stats();
void ask();
void bid();
void wallet();
void gonext();
int main(){
    int userop;
    while(true){
        printmenu();
        userop = input();
        processinput(userop);
    }
    return 0;
}
void printmenu()
{
    std::cout<<"Press :"<<std::endl;
    std::cout<<"0: To exit"<<std::endl;
    std::cout<<"1: Print help."<<std::endl
    <<"2: Print exchange stats."<<std::endl
    <<"3: Place an ask."<<std::endl
    <<"4: Place a bid."<<std::endl
    <<"5: Print Wallet."<<std::endl
    <<"6: continue."<<std::endl;
}
int input()
{
    int userop;
    std::cout<<"Please specify input between 0-6"<<std::endl;
    std::cin>>userop;
    std::cout<<"Input Submitted"<<std::endl;
    return userop;
}
void processinput(int n)
{  
    int userop =n;
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
        default:
        std::cout<<"You Pressed: "<<userop<<std::endl;
        std::cout<<"Invalid Input"<<std::endl;
        break;
    }
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