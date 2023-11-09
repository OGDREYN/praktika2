#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    int sizeTri = 10;

    for (int h = 0; h < sizeTri; h++)
    {
        for (int w = 1; w < sizeTri - h; w++)
        {
            cout << " ";
        }
        for (int w = sizeTri - 2 * h; w <= sizeTri; w++)
        {
            int startPosTri = (sizeTri - 2 * h);
            int endPosTri = sizeTri;

            if (startPosTri == w || w == endPosTri || h >= sizeTri - 1)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    int sizeBox = 10;

    for (int w = 0; w < sizeBox; w++)
    {
        for (int h = 0; h < sizeBox; h)
        {
            if ((h == sizeBox - 1 || h == 0) || (w == sizeBox - 1 || w == 0))
            {
                cout << "|" << " ";
            }
            else
            {
                cout << "  ";
            }
            h++;
        }
        cout << endl;
    }
}
