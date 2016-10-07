//I affirm that all code given below was written solely by me, Ryan Teo, and that any help I received
//adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

Movie::Movie()
{
	//default movie title, genre, and showtime
	title = "Anchorman";
	genre = "Comedy";
	showTime = 15;
}

Movie::Movie(string Title, string Genre, int ShowTime)
{
	title = Title; 
	
	//checks if genre is one of the allowed genres
	if (Genre == "Action" || Genre == "Comedy" || Genre == "Horror" || Genre == "Documentary")
	{
		genre = Genre; 
	}
	//if the genre isn't one of the above then it gets set to the default which is comedy
	else
	{
		genre = "Comedy";
	}
	
		showTime = ShowTime;

}

string Movie::GetTitle()
{
	return title;
}

string Movie::GetGenre()
{
	return genre;
}

int Movie::GetShowtime()
{
	return showTime;
}