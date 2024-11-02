#include <iostream>
#include <vector>
int main() {
    int size; //find the amount of words that we will take
    std::cin >> size;
    std::string word;
    std::vector<std::string> words(size);
    while(size) {
        size--;
        std::cin >> word;
        words.push_back(word); //add those srings into a vector
    }

    for(auto word : words){
        if(word.size() > 10) {
            //print the first letter, size-2, and the last letter
            std::cout<< *word.begin() << word.size()-2<< *(word.end()-1)<<std::endl;
        }   
        else{//if no abreviation needed, just print the wrod itself
            std::cout << word <<std::endl;
        }
    }
}