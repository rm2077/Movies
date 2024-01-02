//
//  Movies.h
//  Movies
//
//  Created by Raunak Maheshwari on 1/1/24.
//

#ifndef Movies_h
#define Movies_h
#include <vector>
#include <string>
#include "Movie.h"
class Movies{

public:

    bool increment_watched(Movies &movies, std::string name);
    bool add_movie(std::string name, std::string rating, int watched);
    void display();
    std::vector<Movie> movies_vec;
    
    
};



#endif /* Movies_h */
