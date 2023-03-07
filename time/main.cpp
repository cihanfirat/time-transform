#include <iostream>

using namespace std;
class Time
{
    int hours;
    int minutes;
    int seconds;

public:

    void gethours()
    {
        cout<<"Enter hours: ";
        cin>>hours;

        while(hours>23 || hours<0)
        {
            cin.clear();
            cout<<"Error! Please enter a valid hour "<<endl;
            cin>>hours;
        }
    }
    void getminutes()
    {
        cout<<"Enter minutes: ";
        cin>>minutes;
        while(minutes>59 || minutes<0 )
        {
            cin.clear();
            cout<<"Error! Please enter a valid minute "<<endl;
            cin>>minutes;
        }

    }
    void getseconds()
    {

        cout<<"Enter seconds: ";
        cin>>seconds;
        while(seconds>59 || seconds<0)
        {
            cin.clear();
            cout<<"Error! Please enter a valid second "<<endl;
            cin>>seconds;
        }
    }

    void trns()
    {
        cout<< "It is "<<hours<<"h "<<minutes<<"minute "<<seconds<<"seconds"<<endl;
        cout<<"Total in second is: "<<(hours*3600+minutes*60+seconds);
    }
};

int main()
{
    Time time_trs;

    time_trs.gethours();
    time_trs.getminutes();
    time_trs.getseconds();
    time_trs.trns();
    return 0;
}
