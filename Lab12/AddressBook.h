#include "Contact.h"
#include "Friend.h"
#include "Acquaintance.h"
#include "Colleague.h"

#define ADRESSBOOK_H
#ifdef ADRESSBOOK_H

using namespace std;

enum class ContactType{
    Friend,
    Acquaintance,
    Colleague
};

class AddressBook{
    public:
    vector<Contact*> contacts;
    ~AddressBook() {
        for (auto contact : contacts) {
            delete contact;
        }
    }

    void addContact(Contact* contact) {
        contacts.push_back(contact);
    }

    Contact* searchContactByName(const string& name) {
        for (auto contact : contacts) {
            if (contact->name == name) {
                return contact;
            }
        }
        return nullptr; // Not found
    }

    void deleteContactByName(const string& name) {
    auto toDelete = std::remove_if(contacts.begin(), contacts.end(), [&name](Contact* contact) {
        return contact->name == name;
    });

    for (auto it = toDelete; it != contacts.end(); ++it) {
        delete *it;
    }

    // Erase the marked elements from the vector
    contacts.erase(toDelete, contacts.end());
}


    vector<Friend*> listFriends() const {
        vector<Friend*> friends;
        for (auto contact : contacts) {
            if (auto f = dynamic_cast<Friend*>(contact)) {
                friends.push_back(f);
            }
        }
        return friends;
    }
};


#endif
