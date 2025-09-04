#include <iostream>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
    if (n < 2) {
        return false;
    }
    
    if (n == 2) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;

}

bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
    if (n < 0) {
        return false;
    }

    int originalNum = n; 
    long long reversedNum = 0; 
    while (n > 0) {
        int digit = n % 10; 
        reversedNum = reversedNum * 10 + digit; 
        n /= 10; 
    }
    
    if (originalNum == reversedNum) {
        return true;
   
    }
    
    if (originalNum != reversedNum) {
        return false;
    }
    return 0;

}
 
   



bool primePalindrome(int n) {
    // TODO: complete the function as per instructions
    return isPrime(n) && isPalindrome(n);

}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}
