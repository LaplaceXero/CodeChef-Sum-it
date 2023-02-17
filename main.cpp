#include <iostream>
using namespace std;

int main() {
	
	int testCases{};
	int a,b; //numbers to be summed 
	int c;   //Alice's solution
	bool result;
	
	cin >>testCases;
	
	for(int i{}; i < testCases; i++)
	{
	    cin >>a >>b >>c;
	    
	    result = ((a + b) == c)? true:false;
	    
	    if(result)
	        cout <<"Yes" <<"\n";
	        
	    else
	        cout <<"No" <<"\n";
	}
	return 0;
}
