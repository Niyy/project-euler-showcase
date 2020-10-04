/* Author: Austin Meyer
 * 
 * Problem 01:
 *  Question: If we list all the natural numbers below 10 that are multiples 
 *      of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. 
 *      Find the sum of all the multiples of 3 or 5 below 1000.
 */
#include <vector>
#include <iostream>


using namespace std;


vector<int> brute_multiples(int max);
bool test_validiate(vector<int> results);


int main(int argc, char** argv)
{
    vector<int> results = brute_multiples(1000);

    for(unsigned int i = 0; i < results.size(); i++)
    {
        cout << results[i] << endl;
    }

    cout << "Size of results: " << results.size();
}


bool test_validiate(vector<int> results)
{
    for(unsigned int i = 0; i < results.size(); i++)
    {
        if(results[i] % 3 != 0 || results[i] % 5 != 0)
        {
            cout << "ERROR: Not a multiple of 3 or 5"
        }
    }
}


// Brute force approach
vector<int> brute_multiples(int max)
{
    vector<int> multiples_count = vector<int>();

    multiples_count.push_back(3);

    while(multiples_count.back() < 1000)
    {
        multiples_count.push_back(multiples_count.back() + 3);
    }

    multiples_count.push_back(5);

    while(multiples_count.back() < 1000)
    {
        multiples_count.push_back(multiples_count.back() + 5);
    }

    return multiples_count;
}