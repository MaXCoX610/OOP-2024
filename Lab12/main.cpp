#include "AddressBook.h"
#include "Friend.h"
#include "Colleague.h"
#include "Acquaintance.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    AddressBook addressBook;

    // Create contacts
    Friend georgiana, daniel, adrian;
    Colleague misu;
    Acquaintance narcis;

    // Setting up Georgiana
    georgiana.name = "Costea Georgiana";
    georgiana.date_of_birth.day = 22;
    georgiana.date_of_birth.month = 4;
    georgiana.date_of_birth.year = 2003;
    georgiana.address = "strada principala nr 5, Nicolae Balcescu";
    georgiana.phoneNumber = "0787586155";

    // Setting up other contacts
    daniel.name = "Daniel Caraciun";
    adrian.name = "Adrian Popa";
    misu.name = "Misu";
    misu.phoneNumber = "0765432109";
    misu.address = "Office St, City, Country";
    narcis.name = "Narcis Barbacariu";
    narcis.phoneNumber = "0723456789";

    // Add contacts to the address book
    addressBook.addContact(&georgiana);
    addressBook.addContact(&daniel);
    addressBook.addContact(&adrian);
    addressBook.addContact(&misu);
    addressBook.addContact(&narcis);

    // Print Georgiana's details
    georgiana.printName();
    georgiana.printDoB();
    georgiana.printAddress();
    georgiana.printPhoneNumber();

    // Search for a contact by name
    string searchName = "Adrian Popa";
    Contact* foundContact = addressBook.searchContactByName(searchName);
    if (foundContact) {
        cout << "Contact found: ";
        foundContact->printName();
        cout<<endl;
    } else {
        cout << "Contact not found." << endl;
    }

    // List all friends
    vector<Friend*> friends = addressBook.listFriends();
    cout << "List of friends:" << endl;
    for (Friend* friendContact : friends) {
        friendContact->printName();
    }

    // Delete a contact by name
    string deleteName = "Narcis Barbacariu";
    addressBook.deleteContactByName(deleteName);

    // Verify deletion
    foundContact = addressBook.searchContactByName(deleteName);
    if (foundContact) {
        cout << "Failed to delete contact."<<endl;
    } else {
        cout << "Successfully deleted contact." << endl;
    }

    return 0;
}
