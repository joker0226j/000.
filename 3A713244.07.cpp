#include <iostream>

int main(int argc, char** argv)
{
    int n = 1; // 存放1加到多少的變數 
    
    int sum = 0; // 存放目前累加的總數 
    
    std::cout << "你想從1加到哪?";
    
    std::cin >> n; // 讀取使用者輸入的數字 

    std::cout << "從1加到" << n << "的結果是:\n";
    
    for(int i = 0;i <= n;i++){
        sum = sum + i;
    }
    
    std::cout << sum;
}
