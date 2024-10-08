#include<iostream>
using namespace std;

int main () {
    cout << "\t\tCAR  PARKING"<<endl;
    int enter;
    int car = 0,bike = 0, bus = 0;

    while(true){

        cout<<"press 1 to enter the car : "<<endl;
        cout<<"press 2 to enter the bike : "<<endl;
        cout<<"press 3 to enter the bus : "<<endl;
        cout<<"press 4 to show the record : "<<endl;
        cout<<"press 5 to delete the record : "<<endl;
        cout<<"press 6 to exit : "<<endl;
        cin>>enter;

        if(enter==1){
            car++;
            system("CLS");
            cout<<"Car is added"<<endl;
        }
        else if(enter == 2){
            bike++;
            system("CLS");
            cout<<"bike is added "<<endl;
        }
        else if (enter == 3){
            bus++;
            system("CLS");
            cout<<"bus is added "<<endl;
        }
        else if(enter == 4){
            cout<<"car"<<car<<endl;
            cout<<"bike"<<bike<<endl;
            cout<<"bus"<<bus<<endl;
        }
        else if(enter == 5){
            car = 0;
            bike = 0;
            bus = 0;
            system("CLS");
            cout<<"All record is deleted ...!!"<<endl;
        }
        else if(enter == 6){
            exit(0);
        }
        else{
            cout<<"Invalid Input Entered =="<<endl;
        }
    }

    return 0;
}