#ifndef CONTACTS_H
#define CONTACTS_H
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/bind.hpp>
#include <set>
#include "Contact.h"
using namespace boost::multi_index;
using namespace std;
typedef multi_index_container <Contact, indexed_by<
hashed_non_unique<member<Contact, string, &Contact::imie>>,
hashed_non_unique<member<Contact, string, &Contact::nazwisko>>,
hashed_non_unique<member<Contact, int, &Contact::wiek>>,
hashed_unique<member<Contact, string, &Contact::tel>>,
hashed_non_unique<member<Contact, string, &Contact::ulica>>
>> ksiazka;
typedef ksiazka::nth_index<3>::type tel_type;
typedef ksiazka::nth_index<4>::type ulica_type;
typedef ksiazka::nth_index<2>::type wiek_type;
typedef ksiazka::nth_index<1>::type nazwisko_type;

#endif