/*
Scenario 2: Structures with Array of Structures and Pointer Arithmetic
Pehle wale scenario mein sirf ek single structure variable tha. Real programming mein aksar structures ki arrays hoti hain. Is baar hum pointer arithmetic aur structures ki array par kaam karenge bina -> ke simple loops ke.

Problem Statement
Ek Higher Education Institute apne dynamic student database ke liye ek chota data module test karna chahta hai jahan pointer arithmetic seekhna maqsad hai.

Tasks:
a) Struct Definition:

Ek struct banayein jiska naam Book ho:

title (string)

pageCount (int)

rating (float)

b) Array of Structures & Pointer Initialization:

main() ke andar Book ki ek array banayein jiska size 3 ho (yaani Book library[3];).

Teeno books ko apni marzi se hardcode initialize kar dein (e.g., Book 1: "C++ Guide", 450, 4.5).

Ab ek pointer banayein: Book* ptr = library; (jo array ke pehle element ko point kare).

c) Pointer Arithmetic and Dynamic Access (Without Indexing):

Aapne array ka data print karne ke liye loop chalana hai, lekin loop mein library[i] ya ptr[i] bilkul use nahi karna.

Aapne Pointer Arithmetic (ptr + i ya ptr++) use karni hai.

Loop ke andar pointer ke zriya data access kar ke screen par display karein.

Bonus Practice: Loop khatam hone ke baad, pointer arithmetic use karte hue direct 3rd book ka page count print karein (bina loop chalaye) aur pointer ke sath -> operator ka use karein.
*/

// g++ main.cpp -o main && ./main
#include <iostream>
using namespace std;

struct Book
{
    string title;
    int pageCount = 0;
    float rating;
};

int main()
{
    system("clear");

    Book Library[2];

    Library[0].title = "C++ Code";
    Library[0].pageCount = 450;
    Library[0].rating = 4.5;
    Library[1].title = "Python Code";
    Library[1].pageCount = 350;
    Library[1].rating = 4.6;

    Book *ptr = Library;

    for ( int i = 0; i < 2; i++ ){
        cout << "Title: " << ptr->title << endl;
        cout << "Page Count: " << ptr->pageCount << endl;
        cout << "Rating: " << ptr->rating << endl;
        ptr++;
    }
    cout << endl;
    return 0;
}