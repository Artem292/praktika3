#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int height_1;
    height_1 = 6;
    cout << "хата:" << endl;
    for (int i = 0; i < height_1; ++i)
    {
        for (int j = 0; j < height_1 - i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j)
        {
            cout << "#";
        }
        cout << endl;
    }
    for (int i = 0; i < 12; i++)
    {
        cout << "=";
    }
    cout << endl;
    for (int i = 0; i < 6 - 1; i++)
    {
        cout << "|";

        for (int j = 0; j < 6 - 1; j++)
        {
            cout << "  ";
        }

        cout << "|";
        cout << endl;
    }
    for (int i = 0; i < 12; i++)
    {
        
        cout << "=";
    }
    return 0;
}