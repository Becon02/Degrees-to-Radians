#include <string>
#include <iostream>
#include <math.h>

using namespace std;

void DegToRad(float degrees);
void SpaceLine();

int main()
{
    SpaceLine();

    string Answer;

    float degrees;

    bool Continue = true;
    bool RightAnswer;

    while (Continue == true)
    {
        cout << "Give a value in degrees to convert it to radians." << endl;
        cin >> degrees;

        DegToRad(degrees);

        RightAnswer = false;
        while (RightAnswer == false)
        {
            cout << "Would you like to transform any other value ? Yes/No" << endl;
            cin >> Answer;

            if (Answer == "Yes")
            {
                Continue = true;
                RightAnswer = true;
                SpaceLine();
            }
            else if (Answer == "No")
            {
                Continue = false;
                RightAnswer = true;
                SpaceLine();
            }
            else
            {
                cout << "Make sure you type the answer correctly." << endl;
                SpaceLine();
            }
        }
    }


}

void SpaceLine()
{
    cout << "----------------------------------------------------------------------------\n";
}

void DegToRad(float degrees)
{
    float radians;

    radians = (3.14 / 180); 

    cout << degrees << " degrees is equivalent to " << (degrees * radians) << " radians" << endl;

    SpaceLine();
}

