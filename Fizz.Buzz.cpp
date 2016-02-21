#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		for(int i =1 ; i<51 ; i++ ){
		if(i%3 ==0 && i%5==0 && i%7==0){
			cout <<"FizzBuzzWoof" << endl;
		} 
		else{
			if(i%3==0){
				cout <<"Fizz"<< endl;
			}
			else{
				if(i%5==0){
					cout <<"Buzz"<< endl;
				}
				else{
					if(i%7==0){
							cout <<"Woof"<< endl;
					}
					else{
					cout <<""<< i << endl;
				}
					
				}
				
				
			}
		}
		
		
	}
	return 0;
}
