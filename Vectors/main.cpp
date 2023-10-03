#include <iostream>
#include <vector> // dont forget this in order to use vector

using namespace std;

int main() 
{
//    vector <char> vowels;      // empty
//    vector <char> vowels (5);  // 5 initialized to zero
    vector <char> vowels {'a','e','i','o','u'};
    
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
//    vector <int> text_scores (3); // 3 elements all initialized to zero
//    vertor <int>  text_scores (3,100); // 3 elements all initialized to 100

    vector <int> test_scores {100, 98, 89};
    
    cout << "\nTest score uing array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    
    cout << "\nTest scores using vector syntax:" << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " score in the vector" << endl; 
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    cout << endl;
    return 0;    
}