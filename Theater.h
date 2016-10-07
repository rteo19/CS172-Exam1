#pragma once
#include <string>
#include "Movie.h"
using namespace std;

class Theater
{
private:
	string name;
	string phone;
	int numMovies; //counts the number of movies
	Movie movie[100]; //creates a movie object with a 100 element arrary which should
					  //cover the amount of movies a theater is playing at any given moment
public:
	Theater(string Name, string Phone); //The name for this theater
	void AddMovie(Movie& Movie); //Add a movie at a specific time
	string GetMovieForHour(int Hour); //Return the movie shown at or after the given hour
									  // Return "" if none are upcoming
	int GetShowTimeForGenre(string Genre);//When will the movie of the given genre be shown?
										  // Return -1 if none exist
	int GetPopcornPrice(); //Make up a cost in dollars for popcorn
	int GetCokePrice(); //Make up a cost on Coke
};