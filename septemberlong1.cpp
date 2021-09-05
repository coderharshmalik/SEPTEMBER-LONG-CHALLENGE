//Airline Restrictions

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if((a+b)<=d)
        {
            if(c<=e)
            {
                cout<<"YES"<<endl;
            }
            else if((b+c)<=d)
            {
                if(a<=e)
                {
                    cout<<"YES"<<endl;
                }
                else if((c+a)<=d)
                {
                    if(b<=e)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
            }
        }
        //bvvuhhhhhhhhhhhh
        //kjbkjcsjkkkkkkd
        else if((b+c)<=d)
        {
            if(a<=e)
            {
                cout<<"YES"<<endl;
            }
            else if((c+a)<=d)
            {
                if(b<=e)
                {
                    cout<<"YES"<<endl;
                }
                else if((a+b)<=d)
                {
                    if(c<=e)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
            }
        }
        //dbuyucycds
        //kdcibuiwdbi
        else if((c+a)<=d)
        {
            if(b<=e)
            {
                cout<<"YES"<<endl;
            }
            else if((a+b)<=d)
            {
                if(c<=e)
                {
                    cout<<"YES"<<endl;
                }
                else if((b+c)<=d)
                {
                    if(a<=e)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
            }
        }

    }
    return 0;
}
