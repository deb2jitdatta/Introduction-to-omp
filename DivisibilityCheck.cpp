#include <bits/stdc++.h> 
using namespace std; 
   
bool isDivisible(long long int n) 
{ 

    int sum = 0; 
    while (n) { 
        int digit = n % 10; 
        sum += digit; 
        n /= 10; 
    } 
  
    // Restore the original value 
    n = temp; 
  
    // Check if all the digits divide 
    // the calculated sum 
    while (n) { 
        int digit = n % 10; 
  
        if (sum % digit != 0) 
            return false; 
  
        n /= 10; 
    } 
  
    return true; 
} 

int main() 
{ 
    long long int n = 123; 
  
    if (isDivisible(n)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0; 
} 
