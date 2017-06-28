#include <iostream>
using namespace std;

int print (int variable, int number)
{                 
        std::cin >> variable;     	
}

int main()
{
 
 int num,result=0, definition;
 
   std::cout<< "How many numbers do you want to add?" << std::endl ;
   std::cin>>definition; 
 
for (int i=0; i<=definition; i++)
{
    if (i != 0){
    std::cout<< "Numbers " << i << " of " << definition << std::endl ;
    std::cin>>num;
    result+=num;
    }   
}	
std::cout <<"Result:" << result; 
}
