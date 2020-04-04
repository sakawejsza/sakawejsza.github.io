#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

int main() {
    int count = 0;
   int characters;
    vector <string> words;
    string inputed;
    
    cout << "Enter a string of text without line breaks: ";
    getline(cin, inputed); // Read string of text with spaces but no line breaks
    cout << "\nHow many characters allowed per line: ";
    cin >> characters;
  
    
    stringstream user_input(inputed);  
    for (string word; user_input>>word;)
        words.push_back(word);
      
                        
    
   
   
   for (int i = 0; i<words.size();i++){
        
        if ( (count + (words[i].size()+1)) > characters) {
            cout << endl << words[i] << " ";
            count = words[i].size() + 1;
        }
        else {
            cout << words[i] << " ";
            count  = count + words[i].length() + 1;
        }
    
        
        
    }
   
    
   
   return 0;
}




