#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string c;
    cout<<"Introduceti un sir de caractere: ";
    cin>>c;
    int i=0, m=0;
    int j=c.size()-1;
    while(i<j)
    {
        if(c[i]!=c[j])
        {
            m=1;
            break;
        }
        i++;
        j--;
    }
    if(m==1)
        cout<<c<<" nu este palindrom"<<endl;
    else
        cout<<c<<" este palindrom"<<endl;
}
