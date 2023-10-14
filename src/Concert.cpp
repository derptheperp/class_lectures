#include "Concert.h"

#include <string>
    using std::string;

#include <iostream>



Concert(): artistName{""}, maxTicket{0}
{

}


explicit Concert(string name, int max): artistName{name} , maxTicket{max}, ticketsSoldPerSection{5,0}
{
    maxTicketsPerSection.push_back(max*.10)
    maxTicketsPerSection.push_back(max*.20)
    maxTicketsPerSection.push_back(max*.25)
    maxTicketsPerSection.push_back(max*.15)
    maxTicketsPerSection.push_back(max*.30)




}


void setArtistName(const string &name)
{
    artistName = name;
}

string getArtistName() const
{
    return artistName;

}


// void updateTicketsSold(int &section, int &number)
// {


// }

// int totalTicketsSold(int &index) const
// {

// }
