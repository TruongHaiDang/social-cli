//
// Created by haidang on 6/4/25.
//

#ifndef YOUTUBE_H
#define YOUTUBE_H

#include <string>
#include <curl/curl.h>

using namespace std;

class youtube {
    public:
        youtube();
        ~youtube();

        void auth(std::string client_id);

    private:
        std::string token;
};



#endif //YOUTUBE_H
