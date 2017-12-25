#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class strng
{
    
    char str[20];
    public:
    strng()
    {
        str[0]=0;
    }

    strng(char temp[])
    {
        strcpy(str,temp);
    }

    strng(strng &temp)
    {
        strcpy(str,temp.str);
    }
    void display();

    friend strng operator +(strng s1,strng s2);
    friend ostream & operator<<(ostream&,strng& );
};

void strng::display()
{
    cout<<"\n the string is"<<str;
}

strng operator +(strng s1,strng s2)
{
    strcat(s1.str,s2.str);
    return s1;
}

ostream & operator<<(ostream& os,strng& s )
{
    os<<s.str<<endl;
    return os;
}

int main()
{
    strng s1("ise");
    strng s2("MSRIT");
    strng s3;
    cout<<"strings before concatenation \n"<<"\ns1="<<s1<<"\ns2="<<s2;
    s3=s1+s2;
    cout<<"\n after concatenation";
    cout<<"\n s1+s2="<<s3;
    return 0;
}





