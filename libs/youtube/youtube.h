//
// Created by haidang on 6/4/25.
//

#ifndef YOUTUBE_H
#define YOUTUBE_H

#include <string>

using namespace std;

class youtube {
    public:
        youtube();
        ~youtube();

        void auth();

    private:
        std::string token;
        std::string base_url;
};



#endif //YOUTUBE_H
