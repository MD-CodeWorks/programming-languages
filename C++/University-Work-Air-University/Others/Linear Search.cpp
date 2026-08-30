/*
2. Linear Search (Talaash karne ki logic)
Aapko ek "Target" value di jati hai aur aapne batana hota hai ke wo array mein kahan hai.

Logic: Aap array ke pehle locker (index 0) se shuru karte hain aur aakhir tak jate hain.

Comparison: Har element ko apne target se match karein: if (array[i] == target).

Result:

Agar match mil jaye, to wahi ruk jayein aur index number bata dein.

Agar poori array khatam ho jaye aur kuch na mile, to iska matlab value array mein nahi hai.
*/

// g++ "Linear Search.cpp" -o "Linear Search" && ./"Linear Search"
#include <iostream>
using namespace std;

int main()
{
    int size, target;
    bool found = false;
    cout << "Enter array size: ";
    cin >> size;

    int myArray[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number 0" << i + 1 << ": ";
        cin >> myArray[i];
    }

    cout << "\nEnter the number which is check: ";
    cin >> target;

    for (int j = 0; j < size; j++)
    {
        if (target == myArray[j])
            found = true;
    }

    if (found)
        cout << "This number is available in array.";
    else
        cout << "This number is not available in array.";

    /*
    // concept two
    int j; // Variable ko loop se bahar declare karein
    for (j = 0; j < size; j++)
    {
        if (target == myArray[j])
        {
            cout << "This number is available.";
            break; // Mil gaya to bahar nikal jao
        }
    }

    // Agar j poore size tak pahunch gaya, iska matlab hai poora loop chala aur kuch nahi mila
    if (j == size)
    {
        cout << "This number is not available.";
    }
    */

    cout << endl;
    return 0;
}