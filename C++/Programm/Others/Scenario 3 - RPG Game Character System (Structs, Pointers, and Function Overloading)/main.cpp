/*
Scenario 1: RPG Game Character System (Structs, Pointers, and Function Overloading)
Is scenario mein aap ek chota sa Role-Playing Game (RPG) ka back-end mechanism design karenge jahan character ki health aur points ko update karne ke liye functions overload honge aur pointers use honge.

Tasks:
a) Struct Definition:

Ek struct banayein jiska naam Character ho. Is mein yeh fields honi chahiye:

name (string)

health (int)

shield (int)

b) Function Overloading (with Pointers):
Aapne do functions banane hain jinka naam same hoga (updateStatus), lekin parameters different honge:

First Function: void updateStatus(Character* hero, int damage)

Yeh function Character ka pointer aur ek damage integer lega.

Logic: Agar damage mile, to pehle damage shield se minus hoga. Agar shield khatam ho jaye (0 ho jaye), to baqi bacha hua damage health se minus hoga. (Pointers ke zriya original struct ki values change honi chahiye).

Second Function: void updateStatus(Character* hero, string itemType)

Yeh function Character ka pointer aur ek string itemType lega.

Logic: Agar itemType == "potion" ho, to health mein 20 points ka izafa kar dein. Agar itemType == "elixir" ho, to shield mein 50 points ka izafa kar dein.

c) In main() Function:

Character ka ek variable banayein (e.g., name: "Thor", health: 100, shield: 40).

Ek pointer banayein jo is character ko point kare.

Pehle function ko call karein (e.g., 50 damage dein) aur pointer pass karein. Phir output screen par print karein.

Phir dusre function ko call karein (e.g., "potion" ya "elixir" dein) aur pointer pass karein. Phir updated output print karein.
*/

// g++ main.cpp -o main && ./main
#include <iostream>
using namespace std;

struct Character
{
    string name;
    int health, shield;
};

void updateStatus(Character* hero, int damage){
    s
}

int main()
{

    Character p1;

    p1.name = "Thor";
    p1.health = 100;
    p1.shield = 40;

    Character *ptr = &p1;

    updateStatus(&p1, 50);

    cout << endl;
    return 0;
}