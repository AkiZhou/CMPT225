/**
 * @file walkIn.cpp
 * @version 1.0
 * This is the application test file for a walkin clinic system
 *
 * Created by Aki Zhou on 2019/01/11.
 * Copyright © 2019 Aki Zhou, Roy Ataya. All rights reserved.
 */

#include "List.h"

using namespace std;

int main() {

    const int NAME = 1;
    const int ADDRESS = 2;
    const int PHONE = 3;
    const int EMAIL = 4;
    const int CARECARD = 5;

    // Creating 4 new patients
    Patient P1("2345678901");
    Patient P2("3456789012");
    Patient P3("6789012345");
    Patient P4("9234567890");

/*
    // Testing overloaded << operator for class Patient
    cout << "Testing overloaded << operator for class Patient\n"
         << "Information of two patients should be printed\n"
         << "\t/////\t/////\t/////\n\n";

    cout << P1 << endl;
    cout << P2 << endl;

    cout << "\t/////\t/////\t/////\n"
         << "Testing done\n\n";

    // Testing overloaded == operator for class Patient
    cout << "Testing overloaded == operator for class Patient\n"
         << "Result of comparision should be 'Unmatching'\n"
         << "\t/////\t/////\t/////\n\n";

    if(P1 == P2)
        cout << "Matching\n\n";
    else
        cout << "Unmatching\n\n";

    cout << "\t/////\t/////\t/////\n"
         << "Testing done\n\n";

    // Testing overloaded > operator for class Patient
    cout << "Testing overloaded > operator for class Patient\n"
         << "Result of comparision should be 'Greater'\n"
         << "\t/////\t/////\t/////\n\n";

    if(P1 > P2)
        cout << "Greater\n\n";
    else
        cout << "Matching or less\n\n";

    cout << "\t/////\t/////\t/////\n"
         << "Testing done\n\n";



    Does - enter a new patient into the system
    Does - remove a patient from the system
    Does - search for an existing patient
    Does - modify a patient's record (for example, adding the patient's information or making a change of address, etc...).
    Does - print all its patients by ascending order of care card numbers.
*/
    // Creating a new list of patients
    List testList;

    // Testing insert
    cout << "------------------------------------------------------------\n"
         << "Testing insert\n\n"
         << "\t\tTest(1/3): Insert 4 patients\n";
    testList.insert(P2);
    testList.insert(P3);
    testList.insert(P1);
    testList.print();

    cout << "\t\tTest(2/3): Insert element already in the list\n";
    testList.insert(P1);

    cout << "\t\tTest(3/3): Insert to a full list\n";
    testList.insert(P4);
    Patient test1("9999999999");
    testList.insert(test1);
    Patient test2("1111111111");
    testList.insert(test2);

    cout << "Testing done\n"
         << "------------------------------------------------------------\n\n";
    // End of insert test

    // Testing modify
    cout << "------------------------------------------------------------\n"
         << "Testing modify\n\n"
         << "\t\tTest(1/3): Modify Name, Address, Phone, Email of 1st Patient\n";
    testList.modify(P1, NAME, "Marie Lower");
    testList.modify(P1, ADDRESS, "123 A Ave Vancouver");
    testList.modify(P1, PHONE, "778-123-1234");
    testList.modify(P1, EMAIL, "marie@somewhere.ca");
    testList.print();

    cout << "\t\tTest(2/3): Modify a non existent patient\n";
    testList.modify(test2, NAME, "Test Patient");

    cout << "\t\tTest(3/3): Modify an invalid information\n";
    testList.modify(P1, CARECARD, "9999999999");

    cout << "Testing done\n"
         << "------------------------------------------------------------\n\n";
    // End of modify test

    // Testing search
    cout << "------------------------------------------------------------\n"
         << "Testing search\n\n";
    cout << "Address of P4:\n";
    cout << testList.search(P4) << endl << endl;
    cout << "Content of P4:\n";
    cout << *(testList.search(P4)) << endl;

    cout << "Testing done\n"
         << "------------------------------------------------------------\n\n";
    // End of search test

    // Testing remove
    cout << "------------------------------------------------------------\n"
         << "Testing remove\n\n"
         << "\t\tTest(1/4): Remove patient test1\n";
    testList.remove(test1);
    testList.print();

    cout << "\t\tTest(2/4): Remove a non existent patient\n";
    testList.remove(test1);

    cout << "\t\tTest(3/4): Remove all patients in the list\n";
    testList.removeAll();
    testList.print();

    cout << "\t\tTest(4/4): Remove from an empty list\n";
    testList.remove(test1);

    cout << "Testing done\n"
         << "------------------------------------------------------------\n\n";
    // End of remove test

    return 0;
}