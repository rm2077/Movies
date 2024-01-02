//
//  Movie.h
//  Movies
//
//  Created by Raunak Maheshwari on 1/1/24.
//

#ifndef Movie_h
#define Movie_h
#include <string>

class Movie {
private:
    std::string movie_name = "None";
    std::string movie_rating = "None";
    int num_watched = 0;
    friend class Movies;
public:
    Movie(std::string movie_name_val, std::string movie_rating_val, int num_watched_val);
    
    std::string get_movie_name() {
        return movie_name;
    }
    
    std::string get_movie_rating() {
        return movie_rating;
    }
    
    int get_num_watched() {
        return num_watched;
    }
    
    int increment() {
        num_watched += 1;
        return num_watched;
    }
    
    
    
    
};


#endif /* Movie_h */
