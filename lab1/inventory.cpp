#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int choice, stock;
    cout<<setfill('*')<<setw(10)<<""<<" Welcome to Warehouse Management System! "<<setw(10)<<""<<endl<<endl;

    cout<<"Enter the stock of Warehouse: ";
    cin>>stock;

    while(1)
    {

    cout<<endl<<"-------- MENU ---------"<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.View"<<endl;
    cout<<"3.Delete"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    if(choice==1){

        int add;
        cout<<"Enter the value: ";
        cin>>add;
        stock += add;

    }
    else if(choice==2)

        cout<<"Available stock : "<<stock<<endl;
        

    else if(choice==3){

        int del;
        cout<<"Enter the no. of stock to be deleted : ";
        cin>>del;
        stock -= del;
    }

    else if(choice==4)
        return 0;

    else{
        cout<<"Invalid Input!"<<endl;
    }

    }
    return 0;
}