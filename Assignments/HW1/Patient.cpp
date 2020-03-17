/**
 * @file Patient.cpp
 * @version 1.0
 * Class Description: Models a walk-in clinic patient.
 * Class Invariant: Each patient has a unique care card number.
 *                  This care card number must have 10 digits.
 *                  This care card number cannot be modified.
 *
 * Created by Aki Zhou on 2019/01/11.
 * Copyright © 2019 Aki Zhou, Roy Ataya. All rights reserved.
 */

#include "Patient.h"

// Default Constructor
// Description: Create a patient with a care card number of "0000000000".
// Postcondition: All data members set to "To be entered",
//                except the care card number which is set to "0000000000".
Patient::Patient() {
    name = "To be entered";
    address = "To be entered";
    phone = "To be entered";
    email = "To be entered";
    careCard = "0000000000";

    //uptodate = false;
}

// Parameterized Constructor
// Description: Create a patient with the given care card number.
// Postcondition: If aCareCard does not have 10 digits, then care card is set to "0000000000".
//                All other data members set to "To be entered".
Patient::Patient(string aCareCard) {
    name = "To be entered";
    address = "To be entered";
    phone = "To be entered";
    email = "To be entered";
    careCard = aCareCard;

    //uptodate = false;
}

/**
 * Accessors
 */
string Patient::getName() const{
    return name;
}

string Patient::getAddress() const {
    return address;
}

string Patient::getPhone() const {
    return phone;
}

string Patient::getEmail() const {
    return email;
}

string Patient::getCareCard() const {
    return careCard;
}


/**
 * Mutators
 */
void Patient::setName(const string aName) {
    name = aName;
    return;
}

void Patient::setAddress(const string anAddress) {
    address = anAddress;
    return;
}

void Patient::setPhone(const string aPhone) {
    phone = aPhone;
    return;
}

void Patient::setEmail(const string anEmail) {
    email = anEmail;
    return;
}



// Overloaded Operators
// Description: Comparison operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if both Patient objects have the same care card number.
bool Patient::operator == (const Patient & rhs) {

    // Compare both Patient objects
    if (this->careCard == rhs.careCard )
        return true;
    else
        return false;

} // end of operator ==

// Description: Greater than operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if the care card number of "this" Patient object is > the care card
//              number of "rhs" Patient object
bool Patient::operator > (const Patient & rhs) {

    // Compare both Patient objects
    if (careCard > rhs.careCard )
        return true;
    else
        return false;

} // end of operator >

// Description: Prints the content of "this".
ostream & operator<<(ostream & os, const Patient & p) {

    os << "Name: " << p.name << endl
       << "Address: " << p.address << endl
       << "Phone: " << p.phone << endl
       << "Email: " << p.email << endl
       << "Care card number: " << p.careCard << endl;

    return os;

} // end of operator<<

// end of Patient.cpp