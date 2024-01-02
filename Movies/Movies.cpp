//
//  Movies.cpp
//  Movies
//
//  Created by Raunak Maheshwari on 1/1/24.
//

#include "Movies.h"
#include "Movie.h"
#include <iostream>

int total;
bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (int i = 0; i < movies_vec.size(); i++) {
        if (movies_vec[i].get_movie_name() == name) {
            std::cout << name << " already exists" << std::endl;
            return true;
        }
    }
    movies_vec.push_back(Movie(name, rating, watched));
    std::cout << name << " added" << std::endl;
    return true;
    
}

void Movies::display() {
    if (movies_vec.size() == 0) {
        std::cout << "No movies to display" << std::endl;
    } else {
        for (int i = 0; i < movies_vec.size(); i++) {
            std::cout << movies_vec[i].get_movie_name() << " " << movies_vec[i].get_movie_rating() << " "<< movies_vec[i].get_num_watched() << std::endl;
        }
        
    }
    }
    
bool Movies::increment_watched(Movies &movies, std::string name) {
    for (int i = 0; i < movies_vec.size(); i++) {
        if (movies_vec[i].get_movie_name() == name) {
            movies_vec[i].increment();
            std::cout << movies_vec[i].get_movie_name() << " incremented" << std::endl;
            return true;
        }
    }
    std::cout << name << " not found" << std::endl;
    return false;
}

