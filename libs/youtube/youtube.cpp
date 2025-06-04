//
// Created by haidang on 6/4/25.
//

#include "youtube.h"

youtube::youtube() {

}

youtube::~youtube() {

}

void youtube::auth(std::string client_id) {
    std::string auth_endpoint = "https://accounts.google.com/o/oauth2/v2/auth";
    std::string redirect_uri = "https://admintruonghaidang.name.vn:8443/youtube/callback";
    std::string scope[7] = {
        "https://www.googleapis.com/auth/youtube",
        "https://www.googleapis.com/auth/youtube.channel-memberships.creator",
        "https://www.googleapis.com/auth/youtube.force-ssl",
        "https://www.googleapis.com/auth/youtube.readonly",
        "https://www.googleapis.com/auth/youtube.upload",
        "https://www.googleapis.com/auth/youtubepartner",
        "https://www.googleapis.com/auth/youtubepartner-channel-audit"
    };
    bool include_granted_scopes = true;
    std::string response_type = "token";
}
