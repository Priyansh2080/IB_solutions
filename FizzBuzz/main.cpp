#include <iostream>

using namespace std;

vector<string> Solution::fizzBuzz(int A) {
    vector <string> svec;
    svec.reserve(A);

   for (int i =1; i<=A; i++)
        {if (i%3==0&&i%5==0){
            string word = "FizzBuzz";
            svec.push_back(word);
        }
        else if (i%5==0){
             string word = "Buzz";
            svec.push_back(word);
        }
        else if (i%3==0){
            string word = "Fizz";
            svec.push_back(word);
        }
        else svec.push_back(to_string(i));
    }
    return svec;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
