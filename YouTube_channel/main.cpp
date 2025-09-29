#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>
using namespace std;
//********************************************************************************* classes
struct vec
{
    string chanel_name,gmail;
    int chanel_subscribers,pass,phone;
};
vec arr[3];

class menues;
class channel
{
protected:
    string e,n;
    int p;
    int phone;
    int su=0;
public://                                          you should register firstly
    int a=0;
    int b=0;
    int x=0;
    void set_n()
    {
        cout<<"Enter Name: ";
        string name;
        cin>>name;
        this->n=name;
        static int a;
        arr[a].chanel_name=n;
        a++;
    }
    void set_phone()
    {
        int phone;
        cout<<"\nEnter Phone Number: ";
        cin>>phone;
        this->phone=phone;
        arr[a].phone=phone;
        a++;
    }
    void set_e()
    {
        string mail;
        cout<<"\nEnter Email: ";
        cin>>mail;
        this->e=mail;
        static int a;
        arr[a].gmail=e;
        a++;
    }
    void set_p()
    {
        int password;
        cout<<"\nEnter password: ";
        cin>>password;
        this->p=password;
        static int a;
        arr[a].pass=p;
        a++;
    }
    void creat_chanel()
    {
        cout<<endl<<"<Sign up>"<<endl<<endl<<"Please Enter The Required information:"<<endl;
        set_n();
        set_phone();
        set_e();
        set_p();
    }
    void login()
    {
        int c=0;
        static int x;
        cout<<endl<<"<Login>"<<endl<<endl<<"Please Enter The Required information:"<<endl;
        string mail,name;
        int password;
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<endl;
        cout<<"Enter your Email: ";
        cin>>mail;
        cout<<endl;
        cout<<"Enter your password: ";
        cin>>password;
        cout<<endl;

        for(int i=0; i<3; i++)
        {
            if(mail==arr[i].gmail&&password==arr[i].pass&&name==arr[i].chanel_name)
            {
                c=1;
                this->e=arr[i].gmail;
                this->n=arr[i].chanel_name;
                this->phone=arr[i].phone;
            }
        }
        if(c==1)
        {
            services();
        }
        else
        {
            cout<<"Error.PLease Check Your Entered Data."<<endl<<"press 1 to try again"<<endl<<"press 2 to sign up"<<endl<<"press 3 to End The Program"<<endl;
            int z;
            cin>>z;
            if(z==1)
            {
                login();
            }
            else if(z==2)
            {
                creat_chanel();
                login();

            }
        }
        n=name;
        x++;
    }

    void face()
    {
        cout<<"Hello: "<<n<<endl<<"1-Search About Channel"<<endl<<"2-View My Profile"<<endl<<"3-login With Another Email"<<endl<<"4-End The Program"<<endl;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////////////
    string names[10]= {"Abo Fallah","Rotana","noor stars","AlJazeera Arabic","Mohamed Ramadan","MBC","Tamer Hosny","Birds of Paradise","AlArabiya","Rawan and Rayan"};
    void services()
    {

        static int subscibed1=0;
        static int subscibed2=0;
        static int subscibed3=0;
        static int subscibed4=0;
        static int subscibed5=0;
        static int subscibed6=0;
        static int subscibed7=0;
        static int subscibed8=0;
        static int subscibed9=0;
        static int subscibed10=0;
        static int subscibed11=0;
        static int subscibed12=0;
        static int sub1=40200121;
        static int sub2=23700200;
        static int sub3=20900450;
        static int sub4=17220115;
        static int sub6=12700320;
        static int sub5=15620623;
        static int sub7=8590200;
        static int sub8=31600153;
        static int sub9=15620350;
        static int sub10=10900255;
        static int sub11=0;
        static int sub12=0;
        face();
        int s=0;
        cin>>s;
        if(s==1)
        {
            for(int i=0; i<10; i++)
            {
                cout<<i+1<<"-"<<names[i]<<endl;
            }
            if(b==1)
            {
                cout<<"11-"<<arr[0].chanel_name<<endl;
            }
            else if(b==2)
            {
                cout<<"11-"<<arr[0].chanel_name<<endl;
                cout<<"12-"<<arr[1].chanel_name<<endl;
            }
            cout<<endl<<"Enter 0 To Return Back"<<endl<<"Enter The Number Of Channel You Want: ";
            int n;
            cin>>n;
            if(n==1)
            {
                cout<<endl<<"About Channel"<<endl;
                ifstream x("abofallah.txt");
                string a[60];
                for(int i=0; i<60; i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub1<<endl;
                if(subscibed1==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub1+=1;
                    subscibed1=1;
                    cout<<endl<<"About channel: "<<endl;
                    for(int i=0; i<60; i++)
                    {
                        x>>a[i];
                        cout<<a[i]<<" ";
                    }
                    cout<<endl<<"number of subscribers: "<<sub1<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 1
            if(n==2)
            {
                cout<<endl<<"About Channel"<<endl;
                ifstream x("Rotana.txt");
                string a[60];
                for(int i=0; i<60; i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub2<<endl;
                if(subscibed2==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub2+=1;
                    subscibed2=1;
                    cout<<endl<<"About Channel"<<endl;
                    ifstream x("Rotana.txt");
                    string a[60];
                    for(int i=0; i<60; i++)
                    {
                        x>>a[i];
                        cout<<a[i]<<" ";
                    }
                    cout<<endl<<"number of subscribers: "<<sub2<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 2
            if(n==3)
            {
                cout<<endl<<"About Channel"<<endl;
                ifstream x("noor stars.txt");
                string a[60];
                for(int i=0; i<60; i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub3<<endl;
                if(subscibed3==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub3+=1;
                    subscibed3=1;
                                   cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("noor stars.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub3<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 3
            if(n==4)
            {
                                        cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("eljazera.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub4<<endl;
                if(subscibed4==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub4+=1;
                    subscibed4=1;
                                          cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("eljazera.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub4<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 4
            if(n==5)
            {
                        cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("ramadan.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub5<<endl;
                if(subscibed5==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub5+=1;
                    subscibed5=1;
                           cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("ramadan.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub5<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 5
            if(n==6)
            {
                        cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("mbc.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub6<<endl;
                if(subscibed6==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub6+=1;
                    subscibed6=1;
                            cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("mbc.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub6<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 6

            if(n==7)
            {
                                         cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("tamer.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub7<<endl;
                   if(subscibed7==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub7+=1;
                    subscibed7=1;
                                                cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("tamer.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub7<<endl;
                cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 7
            if(n==8)
            {
                                            cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("birds.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub8<<endl;
                if(subscibed8==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub8+=1;
                    subscibed8=1;
                                                cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("birds.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub8<<endl;
                cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 8
            if(n==9)
            {
                                            cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("alarabia.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub9<<endl;
                if(subscibed9==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub9+=1;
                    subscibed9=1;
                                                                cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("alarabia.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub9<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 9
            if(n==10)
            {
                                                          cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("rawan.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub10<<endl;
                if(subscibed10==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub10+=1;
                    subscibed10=1;

                                                          cout<<endl<<"About Channel"<<endl;
                string a[60];
                ifstream x("rawan.txt");
                for(int i=0;i<60;i++)
                {
                    x>>a[i];
                    cout<<a[i]<<" ";
                }
                cout<<endl<<"number of subscribers: "<<sub10<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 10
            if(n==11)
            {
                cout<<endl<<"channel Data: "<<endl;
                cout<<"Name of channel: "<<arr[0].chanel_name<<endl<<"number of subscribers: "<<sub11<<endl<<"Date the channel was created: 2024"<<endl;
                if(subscibed11==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub11+=1;
                    subscibed11=1;
                    cout<<endl<<"channel Data: "<<endl;
                    cout<<"Name of channel: "<<arr[0].chanel_name<<endl<<"number of subscribers: "<<sub11<<endl<<"Date the channel was created: 2024"<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }// end of 11
            if(n==12)
            {
                cout<<endl<<"channel Data: "<<endl;
                cout<<"Name of channel: "<<arr[1].chanel_name<<endl<<"number of subscribers: "<<sub12<<endl<<"Date the channel was created: 2024"<<endl;
                if(subscibed12==0)
                {
                    cout<<"Press 1 To Subscribe"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                else
                {
                    cout<<"you are Subscribed"<<endl;
                    cout<<"press 2 to return back"<<endl;
                }
                int r;
                cin>>r;
                if(r==1)
                {
                    sub12+=1;
                    subscibed12=1;
                    cout<<endl<<"channel Data: "<<endl;
                    cout<<"Name of channel: "<<arr[1].chanel_name<<endl<<"number of subscribers: "<<sub12<<endl<<"Date the channel was created: 2024"<<endl;
                    cout<<"you Are Subscribed"<<endl;
                    cout<<"press 1 to return back"<<endl;
                    int l;
                    cin>>l;
                    if(l==1)
                    {
                        services();
                    }
                }
                else if(r==2)
                {
                    services();
                }

            }
            if(n==0)
            {
                services();
            }
        }

        // end of search
        //start of view profile
        else if(s==2)
        {

            cout<<"Your Data: "<<endl
                <<"Name: "<<n<<endl
                <<"Email: "<<e<<endl
                <<"phone: "<<this->phone<<endl
                <<sub11<<" "<<"subscriber"<<endl;
            cout<<"Enter 1 To Return Back"<<endl;
            int i=0;
            cin>>i;
            if(i==1)
            {
                services();
            }
        }
        else if(s==3)
        {
            b++;
            cout<<"Enter one To Login"<<endl<<"Enter 2 To Sign up"<<endl;
            int j;
            cin>>j;
            if(j==1)
            {
                login();
            }
            else if(j==2)
            {
                subscibed1=0;
                subscibed2=0;
                subscibed3=0;
                subscibed4=0;
                subscibed5=0;
                subscibed6=0;
                subscibed7=0;
                subscibed8=0;
                subscibed9=0;
                subscibed10=0;
                creat_chanel();
                login();
            }
        }
    }
    friend class menues;
};
static int su=0;
//****************************************************************************************************
class save_channel:public channel
{
public:
    void save()
    {

    }
};
//******************************************************************************************
class menues
{
public:
    channel ch1;
    void menu1()
    {
        channel ch1;
        cout<<"1-Login"<<endl<<"2-Sign Up"<<endl<<"Enter The Number Of Your Choice: ";
        int num1;
        cin>>num1;
        if(num1==1)
        {
            ch1.login();

        }
        else if(num1==2)
        {
            ch1.creat_chanel();
            ch1.login();
        }
        else
        {
            cout<<"Error please Try again"<<endl;
            menu1();
        }
    }
    friend class channel;
};
//******************************************************************************************

int main()
{
    menues m;
    m.menu1();

    return 0;
}
