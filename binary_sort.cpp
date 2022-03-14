#include <vector>
#include <iostream>
#include <chrono>

int bin_sort (std::vector <int> v, int b) {
    if (b == v.front()) {
        return 0;
    }
    else if ( b == v.back()) {
        return (v.size() - 1);
    }
    else {
        int bias = 0;
        
        while (v.size() > 1) {
            int half = v.size()/2;

            if (b == v.at(half)) {
                return half+bias;
            }
            else if (b < v.at(half)) {
                v = std::vector <int> (v.begin(), v.end()-half);
                continue;
            } 
            else {
                v = std::vector <int> (v.begin()+half, v.end());
                bias +=half;                
            }
        }
    return -1;
    }
}

int main () {

    std::vector <int> new_vec;
    int to_find, answer;
    // auto start =  std::chrono::high_resolution_clock::now(); // To measure speed of execution
    answer = bin_sort(new_vec, to_find);
    //auto stop =  std::chrono::high_resolution_clock::now(); // To measure speed of execution
    //auto duration = std::chrono::duration_cast <std::chrono::microseconds> (stop - start);
    //std::cout << "Elasped time is " << duration.count() << std::endl;    
    std::cout << "Location of " << to_find << " is " <<  answer << std::endl;

    return 0;
}
