#include <iostream> 

using namespace std; 

namespace first 
    { 
    	int val = 100;
    } 

namespace second
    { 
    	int val = 200; 
    } 

int main() 
    {
        cout << "\nfirst::val = "<< first::val << "\n";
        cout << "second::val = "<< second::val<< "\n\n";
        return 0; 
    }