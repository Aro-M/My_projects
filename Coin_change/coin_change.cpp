#include <iostream>
#include <vector>
 
int coin_change(std::vector<int>&coins ,int amount) {
 std::vector<int> X((amount + 1),(amount + 1));
  X[0] = 0;
   if(X.size() == 1) {
      if(X[0] < amount) {return -1;}
      if(X[0] ==  amount) {return 0; }
      }	
   for(int i = 0; i<X.size();++i) {
     for(auto j : coins) {
	if(i - j >=0) {
          X[i] = std::min(X[i],1+X[i-j]);
	}
	   if(X[i] == 1) {break;}
 	}
      }
  return (X[amount] == amount + 1) ? -1 : X[amount];

}

int main() {
	std::vector<int> coins = {1,3,4,5};
	int  amount = 17;
        std::cout << coin_change(coins,amount);
}
