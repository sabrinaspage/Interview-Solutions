#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int numGeneratedByThree(); // get the sum of the dice
int diceRoll();            // roll one dice
void printStars(int valOfRow);

int main()
{
    srand(12321);
    int j = numGeneratedByThree();
    vector<int> holdVals;
    int arr[18];

    for (int i = 0; i < 500; i++)
    {
        int j = numGeneratedByThree();
        int k = 0;

        if (find(holdVals.begin(), holdVals.end(), j) != holdVals.end())
        {
            //if j exists already, increment val of arr
            arr[j]++;
        }
        else
        {
            //if j does not exist, push it into holdVals, and increment val of arr
            holdVals.push_back(j);
            arr[j] = 1;
        }
    }

    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 3; i < len; i++)
    {
        printStars(arr[i]);
    }
    return 0;
}

int diceRoll()
{
    return rand() % 6 + 1;
}

int numGeneratedByThree()
{
    int dice1 = diceRoll();
    int dice2 = diceRoll();
    int dice3 = diceRoll();
    return dice1 + dice2 + dice3;
}

void printStars(int valOfRow)
{
    for (int i = 0; i < valOfRow; i++)
    {
        cout << "*";
    }
    cout << " " + to_string(valOfRow) << endl;
}