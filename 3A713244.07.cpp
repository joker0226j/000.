#include <iostream>

int main(int argc, char** argv)
{
    int n = 1; // �s��1�[��h�֪��ܼ� 
    
    int sum = 0; // �s��ثe�֥[���`�� 
    
    std::cout << "�A�Q�q1�[���?";
    
    std::cin >> n; // Ū���ϥΪ̿�J���Ʀr 

    std::cout << "�q1�[��" << n << "�����G�O:\n";
    
    for(int i = 0;i <= n;i++){
        sum = sum + i;
    }
    
    std::cout << sum;
}
