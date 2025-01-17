#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num1,num2;
    int add,sub,mul;
    float div;

    cout<<"Enter two numder:";
    cin>>num1 >>num2;
    
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=(float)num1/num2;
    
    cout<<"Addition      :" <<" " <<setw(8) <<add;
    cout<<"\nSubstraction  :" <<" " <<setw(8) <<sub;
    cout<<"\nMultiplication:" <<" " <<setw(8) <<mul;
    cout<<"\nDivision      :" <<" " <<setw(8) <<(float)div;
   
}




#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num1,num2,num3;
    int larger_no;

    cout<<"Enter three number:";
    cin>>num1 >>num2 >>num3;
    
    if(num1>=num2 && num1>=num3)
        larger_no=num1;
    else if(num2>=num1 && num2>=num3)
        larger_no=num2;
    else
        larger_no=num3;
        
    cout<<"Largest No : " <<larger_no;
   
}

 
 
 
 
 
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num;
    int mul;

    cout<<"Enter number:";
    cin>>num;
    
    for(int i = 1; i <= 10; i++)
    {
        mul=i*num;
        cout<<setw(5) <<mul <<"\n";
    }
   
}


