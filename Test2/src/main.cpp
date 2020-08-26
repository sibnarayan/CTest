
#include "classLargestSum.h"
#include <iostream>
#include <vector>
using namespace std;
using namespace N;;




int main() {
   
   uint32_t T = 100;
   uint32_t S;
   std::vector<uint32_t> I = {1,2,3,4,5,6,7};
   std::vector<uint32_t> M;
   
   
   N::find_largest_sum(T,I,M,S);
   
   cout<<"M:";
   for(uint32_t i=0; i<M.size(); i++){
    cout<<M[i]<<"\t";
   }
    cout<<"\n"<<"S:"<<S;
   
   
   return 0;
}
