//I affirm that all code given below was written solely by me, Ryan Teo, and that any help I received
//adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include "Theater.h"
#include "Movie.h"
using namespace std;

Theater::Theater(string Name, string Phone)
{
	name = Name;
	phone = Phone;
	numMovies = 0; //sets the initial number of movies to 0
}


void Theater::AddMovie(Movie& Movie)
{
		movie[numMovies] = Movie; //assigns the array a new set of values the user can input
		numMovies++;			  //adds one to numMovies everytime a new movie is added
}

string Theater::GetMovieForHour(int Hour)
{
	for (int i = 0; i < 100; i++) //loops through all the movies up to 100
	{
		//checks if the movie at i is at or after the given hour
		//also makes sure a movie time must be between 0 and 24
		if (Hour <= movie[i].GetShowtime() && Hour < 25 && Hour > -1)
		{
			return movie[i].GetTitle(); //returns the movie title at i if the above requirements were met
		}
		
	}
	return ""; //if no movies are upcoming or an invalid hour was given return ""
}

int Theater::GetShowTimeForGenre(string Genre)
{
	for (int i = 0; i < 100; i++) //loops through all the movies up to 100
	{
		//checks if movie at i is the same as the given genre
		if (Genre == movie[i].GetGenre())
		{
			return movie[i].GetShowtime(); //returns the show time of the movie at i if the above requirement was met
		}
		
	}
	return -1; //if no movies of that genre exist return -1
}

int Theater::GetPopcornPrice()
{
	return 3; //returns the price of popcorn
}

int Theater::GetCokePrice()
{
	return 1; //returns the price of coke
}