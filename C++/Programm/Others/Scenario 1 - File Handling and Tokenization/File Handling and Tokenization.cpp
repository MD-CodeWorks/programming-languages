/*
Scenario 1: File Handling and Tokenization (Different Logic)Pehle wale mein sirf lines read karni thi. Is baar hum Inventory Tracker banayein ge jahan file mein comma-separated data (CSV style) hoga, aur aapko text ke sath integers ko alag tareeqe se manage karna hoga.

Problem StatementEk Courier Delivery Company apne packages ka record track karna chahti hai. Aapko ek file se packages ki details read karni hain, un par weight ke mutabiq delivery charges calculate karne hain, aur phir sirf un packages ki list alag file mein save karni hai jo "Urgent" category ke hain.

Delivery Charges Criteria:Base Weight Fee: Rs. 250 flat (har package ke liye).Weight Charges: Agar weight 5 kg se zyada hai, to har extra kg par Rs. 50 add honge (e.g., 7 kg weight hai to $2 \times 50 = 100$ extra).Shipping Mode Surcharge:Agar Delivery Mode "Express" hai, to total cost par 15% extra charge lagega.Agar Delivery Mode "Standard" hai, to koi extra charge nahi lagega.

Tasks:a)File Reading & Processing:
    shipments.txt naam ki file se data read karein. Is file mein har line par data is tarah comma-separated hoga: PackageID,Destination,Weight(kg),Mode.
    Example Data (shipments.txt):

Plaintext
    P001,Lahore,4,Standard
    P002,Karachi,8,Express
    P003,Islamabad,12,Standard
* Aapne file ko open karna hai, `ifstream` use karte hue commas (`,`) ko handle karna hai ya `strtok`/`getline` se data alag karna hai. Agar file missing ho to error show karein.

**b) Selective File Writing:**
* Aapne **sirf un packages** ka data `express_deliveries.txt` mein write karna hai jinka mode **"Express"** tha. Standard walo ko ignore kar dena hai.
* Output file ka format:
    ```text
    -----------------------------------
    PACKAGE LOG (EXPRESS SHIFT)
    -----------------------------------
    ID: P002 | To: Karachi
    Weight: 8 kg
    Total Cost: Rs. 460.00
    -----------------------------------
*/

// g++ "File Handling and Tokenization.cpp" -o "File Handling and Tokenization" && ./"File Handling and Tokenization"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    system("clear");
    
    string ID, City, status;
    int weight = 0, totalCost = 0, price = 0;

    ifstream readFile("shipments.txt");
    ofstream writeFile("express_deliveries.txt", ios::out);

    if (readFile.is_open())
    {
        if (writeFile.is_open())
        {
            weight = 0;
            totalCost = 0;
            while (readFile >> ID >> City >> weight >> status)
            {
                if ( weight <= 5 ){
                    price = weight * 250;
                }
                else if (weight > 5 ){
                    price = 5 * 250 + ((weight - 5) * 300);
                }
                if ( status == "Express"){
                    price *= 1.15;
                }

                writeFile << "-----------------------------------\n";
                writeFile << "PACKAGE LOG (EXPRESS SHIFT)\n";
                writeFile << "-----------------------------------\n";
                writeFile << "ID: " << ID << " | To: " << City << "\n";
                writeFile << "Weight: " << weight << " Kg\n";
                writeFile << "Total Cost: Rs. " << price << endl;
                writeFile << "-----------------------------------\n";

            }
            cout << "Your Data Saved Successfully.\n";
            writeFile.close();
        }
        else
            cout << "Sorry! \"express_deliveries.txt\" File couldn't opened.\n";
        readFile.close();
    }
    else
        cout << "Sorry! \"shipments.txt\" File couldn't opened.\n";

    cout << endl;
    return 0;
}