#include<iostream>
using namespace std;              // made by gaganrajdeepsingh
#include<cmath>                     // 1711607   
#include<iomanip>                      //cse       
int main()
{
    float a,b;
    double g,t,result;
    long int e,d,fresult,i,num,root,order,temp;
    long long f=1;
    char choice;
    cout<<" \t\t\t\tA BASIC CALCULATOR\t\t\t\t"<<endl;
    cout<<"Here is what you can use: "<<endl;
    cout<<"+ for ADDITION\n- for SUBTRACTION\n* for MULTIPICATION\n/ for DIVISION\n% for MOD\n^ for power\n! for factorial\nR for root\nP for relative percentage\nS for swap"<<endl;
    cout<<"Enter the choice for the required operation = ";
    cin>>choice;
    switch(choice)
    {
        case '+':
        cout<<"\nPlease enter the required inputs:"<<endl;
        cout<<"First input: ";
        cin>>a;
         cout<<endl;
        cout<<"Second input: ";
        cin>>b;
        cout<<endl;
        result= a+b;
        cout<<"Result is = "<<result<<endl;
        break;
        case '-':
        cout<<"\nPlease enter the required inputs:"<<endl;
        cout<<"First input: ";
        cin>>a;
        cout<<endl;
        cout<<"Second input: ";
        cin>>b;
        cout<<endl;
        result= a-b;
        cout<<"Result is = "<<result<<endl;
        break;
        case '*':
        cout<<"\nPlease enter the required inputs:"<<endl;
        cout<<"First input: ";
        cin>>a;
         cout<<endl;
        cout<<"Second input: ";
        cin>>b;
        cout<<endl;
        result= a*b;
        cout<<"Result is = "<<result<<endl;
        break;
        case '/':
        cout<<"\nPlease enter the required inputs:"<<endl;
        cout<<"First input: ";
        cin>>a;
         cout<<endl;
        cout<<"Second input: ";
        cin>>b;
        cout<<endl;
        result= a/b;
        cout<<"Result is = "<<result<<endl;
        break;
        case '%':
        cout<<"Please enter the inputs \n";
        cout<<"Enter the first input = ";
        cin>>e;
        cout<<endl<<"Enter the second input = ";
        cin>>d;
        fresult= e%d;
        cout<<"Result is = "<<fresult<<endl;
        break;
        case '^':
        cout<<"Enter the base no.: ";
        cin>>a;
        cout<<endl;
        cout<<"Enter the exponent : ";
        cin>>b;
        result= pow(a,b);
        cout<<"Result is = "<<result<<endl;
        break;
        case '!':    
        cout<<"Enter the no. whose factorial needs to be found : ";
        cin>>num;
        cout<<endl;
        for(i=num;i>=1;i--)
        {
            f=f*i;
        }
        cout<<"Factorial is = "<<f<<endl;
        break;
        case 'R':
        cout<<"Enter the no. whose root needs to be found : ";
        cin>>root;
        cout<<endl;
        cout<<"Enter the order of root : ";
        cin>>order;
        cout<<endl;
        result= pow(root,1.0/order);
        cout<<"Root is = "<<result<<endl;
        break;
        case 'P':
        cout<<"Enter the inputs for relative percentage : \n";
        cout<<"Enter given quantity : ";
        cin>>g;
        cout<<endl;
        cout<<"Enter total quantity : ";
        cin>>t;
        result= (g/t)*100;
        cout<<"Percentage is = "<<result<<endl;
        break;
        case 'S':
        cout<<"Enter two numbers for swapping : \n";
        cout<<"First no. : ";
        cin>>a;
        cout<<endl;
        cout<<"Second no. : ";
        cin>>b;
        cout<<endl;
        cout<<"Numbers before swapping = "<<a<<"\t"<<b<<endl;
        temp=a;
        a=b;
        b=temp;
        cout<<"Numbers after swapping  = "<<a<<"\t"<<b<<endl;
        break; 
        default:
        cout<<"WARNING!"<<endl;
        cout<<"Enter Valid Choice!"<<endl;
        break;
        }
      cout<<endl<<"|---Thanks for using---|"<<endl;
    return 0;
}

