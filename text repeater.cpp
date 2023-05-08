#include<iostream>
#include<cstdio>
using namespace std;
int main ()
{
    int i, a,n;
    string z,c,h;
    string m = "welcome to the text repeater , type ok to continue";
    string f = "Here you can repeat your text and have some fun :) ,type ok to continue";
    string t = "ok";
    string g = "ok";
    cout<<m;
    cin>>z;
    //1st phase
    for(i=1; i<=4; i++)
    {

        if(z!=t)
        {
            cout<<"🔴 error : type ok to continue 🔴";
            cin>>z;
        }
    }

    if(z==t)
    {
        cout<<f;
        cin>>h;
    }
    //2nd phase
    for(i=1; i<=4; i++)
    {
        if(h!=t)
        {
            cout<<"🧿 error : type ok to continue 🧿";
            cin>>h;
        }
    }

    if(h==t)
    {
        cout<<"which word do you want to repeat ?";
        cin>>c;
    }

//3rd phase


    cout<<"how many time do you want to repeat?";
    cin>>n;
//4th phase
    for(a=1; a<=n; a++)
    {
        cout<<c<<"\n";

    }

}
