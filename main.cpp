#include <iostream>
#include <windows.h>

using namespace std;
class time
{

private:
    int hour,minute,second;
public:
    time ()
    {
        hour=12;
        minute=0;
        second=0;
    }
    time(int hour,int minute,int second)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    int incrementhr()
    {
        if(hour>=23)
        {
            hour=0;
        }
        else
        {
            hour++;
        }

    }
    int incrementmin()
    {
        if(minute>=59)
        {
            minute=0;
            incrementhr();
        }
        else
        {
            minute++;
        }

    }
    int incrementsec()
    {
        if(second>=59)
        {
            second=0;
            incrementmin();
        }
        else
        {
            second++;
        }

    }
    void print()const
    {
        if(hour>9)
        {
            cout<<hour<<" : ";
        }
        else
        {
            cout<<"0"<<hour<<" : ";
        }
        if(minute>9)
        {
            cout<<minute<<" : ";
        }
        else
        {
            cout<<"0"<<minute<<" : ";
        }
        if(second>9)
        {
            cout<<second<<" : ";
        }
        else
        {
            cout<<"0"<<second<<" : ";
        }
        cout<<"  ";
        if(hour>=0&&hour<=11)
        {
            cout<<"AM";
        }
        else
        {
            cout<<"PM";
        }
    }

};

int main()
{
    cout<< "put hour : ";
    int hr ;
    cin>>hr;
    cout<<"put minute : ";
    int minn;
    cin>>minn;
    cout<<"put second : ";
    int sec;
    cin>>sec;
    system("cls");
    time t(hr,minn,sec);
    while(true)
    {
        system("cls");
        t.incrementsec();
        t.print();
        Sleep(950);
    }



    return 0;
}
