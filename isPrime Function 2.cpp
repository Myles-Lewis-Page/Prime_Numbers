// Myles Page 
// 6.21 isPrime
// Due 3/1/2022

#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int);

int main(){
    int num=0;
    int i;
    bool prime;

    ofstream outFile;
    outFile.open("PrimeList.txt");


    while (num == 0 ){
        cin >> num;
    }


    for(i=2;i<num;i++){
        if(isPrime(i)){
            outFile << i << "\n";
        }
    }

    cout << "Prime numbers written to PrimeList.txt.\n";
    outFile.close();
    return 0;
}

bool isPrime(int n){
    int i;
    for(i=2;i<n-1;i++)
        if(n%i==0)
            return false;
    return true;
    
}