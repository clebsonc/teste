#include <iostream>


#include "Sentence.hpp"
#include <unordered_map>
#include <string>
#include <cmath>


int main() {
    /**Sentence s("teeteroroiiiiiiil");
    std::cout<< "Non repeated = " << s.findFirstNonRepeatedCharacter() << std::endl;
    */
    /**std::unordered_map<char, int> umap;
    umap.emplace('t', 1);
    umap.emplace('o', 1);

    umap.at('t') +=1;
    std::cout << umap.at('t') << std::endl;
    */

    /*std::string nsentence = Sentence::removeCharacters("Battle of the Vowels: Hawaii vs. Grozny", "aeiou");
    for(int i = 0; nsentence[i] != '\0'; i++)
        std::cout << nsentence[i];*/

    /*std::string buffer = Sentence::reverseWords("clebson cardoso alves de sa");
    std::cout << "Reversed word: " << buffer << std::endl;


    int i = 1;
    i--;
    i--;
    std::cout << "i = " << i << std::endl;
    std::cout << "size i: " << sizeof(i);*/

    /**int value = Sentence::stringToInteger("0");
    std::cout << "Value: " << value << std::endl; */

    //std::string str = Sentence::integerToString(1);
    //std::cout << "String Number: " << str;

    //std::cout <<"\nMod: " << (-57)%10 << std::endl;

    std::string a = "abcdefghijklmnopqrstuvwxyz";
    //a.insert(1, 1, 'c');
    //std::cout << a << std::endl;

    std::stack<std::string> * stack;


    stack = Sentence::find_all_permutation(a);
    int i = 1;
    while(!stack->empty()){
        std::cout << "i: " << i << " " << stack->top() << std::endl;
        i++;
        stack->pop();
    }

    delete stack;

    return 0;
}