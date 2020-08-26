#include<iostream>
#include<limits.h> 
using namespace std;


int addition(int x, int y) 
{ 
    try{
        
       if( x > INT_MAX - y) 
       {
           throw 1;
       }
       else
       { 
        while (y != 0) {
            int carry = (x & y); 
            x = x ^ y; 
            y = carry << 1; 
        }        
        return x;
       }
    }
    
    catch(int ex){
        if(ex == 1 )
        {
            cout<<"Exception: Variable Overflow";
            return -1;
        }
    }
	return -1;
} 

int main() {
   int num1, num2;
   
   cout << "Enter first number:"<<endl;
   cin >> num1;
   cout << "Enter second number:"<<endl;
   cin >> num2;

   
   cout << "The Sum is: " << addition( num1, num2);
   
   return 0;
}
