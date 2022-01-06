#include <iostream>

using namespace std;

int data[10];
int size=0;
char sign;

//--------------------------------------------------


void push()
{
    if(size<10)
    {
        cin>>data[size];
        size++;
        cout<<":)\n";
       
    }
    else cout<<":(\n";
}

//--------------------------------------------------

void pop()
{
    if(size==0)
    {
        cout<<":(\n";
    }
    else
    {
        size--;
        cout<<data[size]<<endl;
        
    }
    
}

int main(int argc, const char * argv[]) {
    
    
    while(std::cin>>sign)
    {
    if(sign=='+')
        push();
    if(sign=='-')
        pop();
    }
    
       /*
        while(cin>>sign)
        {
            switch (sign)
            {
                case '+': push(); break;
                case '-': pop(); break;
            }
        */
    
    
    return 0;
}
