#include <iostream>

using namespace std;

int add(int arr[1000], int w)
{
    int j, c = 0;
    for (j = 0; j < w; j++) 
    {
        c = c + arr[j];
    }
    return (c);
}

int sub(int a, int b)
{
    return (a - b);
}

int mult(int arr[1000], int w)
{
    int j, c = 1;
    for (j = 0; j < w; j++)
    {
        c = c * arr[j];
    }
    return (c);
}

int divi(int a, int b)
{
    return (a / b);
}

int mod(int a, int b)
{
    return (a % b);
}

int main()
{
    cout << "==== Mini Calculator ====" << endl;
    int a, b, z, w, i;
    int arr[1000];
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        int x = 0;
        cout << endl << "1 - Addition (+)" << endl << "2 - Subtraction (-)" << endl << "3 - Multiplication (*)" <<
            endl << "4 - Division (/)" << endl << "5 - Modulo (%)" << endl << "Select operation: ";
        cin >> x;
        while (x < 1 || x > 5)
        {
            cout << endl << "Invalid operation, please try again!" << endl << "Select Operation: ";
            cin >> x;
        }
        if (x == 1)
        {
            cout << endl << "How many numbers would you like to add?: ";
            cin >> w;
            while (w < 2)
            {
                cout << endl << "You must add atleast two numbers!" << endl << "How many numbers would you like to add?: ";
                cin >> w;
            }
            cout << endl << "Enter " << w << " numbers: ";
            for (i = 0; i < w; i++)
            {
                cin >> arr[i];
            }
        }
        else if (x == 3)
        {
            cout << endl << "How many numbers would you like to multiply?: ";
            cin >> w;
            while (w < 2)
            {
                cout << endl << "You must multiply atleast two numbers!" << endl << "How many numbers would you like to multiply?: ";
                cin >> w;
            }
            cout << endl << "Enter " << w << " numbers: ";
            for (i = 0; i < w; i++)
            {
                cin >> arr[i];
            }
        }
        else
        {
            cout << endl << "Enter two integers: ";
            cin >> a >> b;
            if (x == 4 || x == 5)
            {
                while (b == 0)
                {
                    cout << endl << "The divisor must not be 0!";
                    cout << endl << "Enter two integers: ";
                    cin >> a >> b;
                }
            }
        }
        switch (x)
        {
            case 1:
                z = add(arr, w);
                break;

            case 2:
                z = sub(a, b);
                break;

            case 3:
                z = mult(arr, w);
                break;

            case 4:
                z = divi(a, b);
                break;

            case 5:
                z = mod(a, b);
                break;

            default:
                cout << endl << "Invalid Operation" << endl;
                break;
        }
        cout << endl << "Answer: " << z << endl;
        cout << endl << "Do you want to perform another calculation? (y/n)" << endl;
        cin >> choice;
        while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
        {
            cout << endl << "Invalid choice. Please try again" << endl << "Do you want to perform another calculation? (y/n)" << endl;
            cin >> choice;
        }
    }
}