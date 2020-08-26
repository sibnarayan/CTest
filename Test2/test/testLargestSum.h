#include<iostream>
#include <vector>
#include "../src/classLargestSum.h"

using namespace std;
using namespace N;

namespace test{

void testCase1()
{
   bool status = false;
   uint32_t T = 100;
   uint32_t S;
   std::vector<uint32_t> I {1,2,3,4,5,6,7};
   std::vector<uint32_t> M;
   std::vector<uint32_t> testM {7,6};   
   
   N::find_largest_sum(T,I,M,S);
   
   cout<<"M:";
   for(uint32_t i=0; i<M.size(); i++){
    cout<<M[i]<<"\t";
   }
    cout<<"\n"<<"S:"<<S;
   

	
   if ((S == 13) && (M == testM) ) 
	{
        	status = true;
	}	
   
   if(status)
	cout<<"\nTestCase1: Pass\n";
   else 
	cout<<"\nTestCase1: Failed\n";

   return;	
}

void testCase2()
{
   bool status = false;
   uint32_t T = 11;
   uint32_t S;
   std::vector<uint32_t> I {1,2,3,4,5,6,7};
   std::vector<uint32_t> M;
   std::vector<uint32_t> testM {4,7};

   N::find_largest_sum(T,I,M,S);

   cout<<"M:";
   for(uint32_t i=0; i<M.size(); i++){
    cout<<M[i]<<"\t";
   }
    cout<<"\n"<<"S:"<<S;



   if ((S == 11) && (M == testM) )
        {
                status = true;
        }

   if(status)
        cout<<"\nTestCase1: Pass\n";
   else
        cout<<"\nTestCase1: Failed\n";

   return;
}



}
