#ifndef CONCERT_H
#define CONCERT_H

#include <string>
    using std::string;

#include <vector>
    using std::vector;



class Concert
{
private:
    string artistName;
    int maxTicket;

    vector<int> ticketsSoldPerSection;
    vector<int> maxTicketsPerSection;



public:

    void setArtistName(const string &name);
    string getArtistName() const;

    





};