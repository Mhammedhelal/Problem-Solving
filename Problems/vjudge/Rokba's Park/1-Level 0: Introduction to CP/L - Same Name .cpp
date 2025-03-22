#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<std::pair<std::string, std::string>> names(N);

    for (int i = 0; i < N; i++) {
        std::cin >> names[i].first >> names[i].second;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (names[i] == names[j]) {
                std::cout << "Yes" << std::endl;
                return 0; 
            }
        }
    }

    std::cout << "No" << std::endl;
    return 0;
}
