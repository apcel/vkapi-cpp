/*************************************************************************/
void vkapi::accountBanUser (std::string user_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };
    request("account.banUser", requestParameters);
};
/*************************************************************************/
void vkapi::accountGetActiveOffers (std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("account.getActiveOffers", requestParameters);
};
/*************************************************************************/
void vkapi::accountChangePassword (std::string restore_sid, std::string change_password_hash, std::string old_password, std::string new_password) {
    std::string requestParameters = "?";
    if (restore_sid != "") {
        requestParameters += ("restore_sid=" + httpsObject->escape(restore_sid));
    };

    if (change_password_hash != "") {
        requestParameters += ("&change_password_hash=" + httpsObject->escape(change_password_hash));
    };

    if (old_password != "") {
        requestParameters += ("&old_password=" + httpsObject->escape(old_password));
    };

    if (new_password != "") {
        requestParameters += ("&new_password=" + httpsObject->escape(new_password));
    };
    request("account.changePassword", requestParameters);
};
/*************************************************************************/
void vkapi::accountGetAppPermissions (std::string user_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };
    request("account.getAppPermissions", requestParameters);
};
/*************************************************************************/
void vkapi::accountGetBanned (std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("account.getBanned", requestParameters);
};
/*************************************************************************/
void vkapi::accountGetCounters (std::string filter) {
    std::string requestParameters = "?";
    if (filter != "") {
        requestParameters += ("filter=" + httpsObject->escape(filter));
    };
    request("account.getCounters", requestParameters);
};
/*************************************************************************/
void vkapi::accountGetInfo (std::string fields) {
    std::string requestParameters = "?";
    if (fields != "") {
        requestParameters += ("fields=" + httpsObject->escape(fields));
    };
    request("account.getInfo", requestParameters);
};
/*************************************************************************/
void vkapi::accountGetProfileInfo () {
    request("account.getProfileInfo");
};
/*************************************************************************/
void vkapi::accountLookupContacts (std::string contacts, std::string service, std::string mycontact, std::string return_all, std::string fields) {
    std::string requestParameters = "?";
    if (contacts != "") {
        requestParameters += ("contacts=" + httpsObject->escape(contacts));
    };

    if (service != "") {
        requestParameters += ("&service=" + httpsObject->escape(service));
    };

    if (mycontact != "") {
        requestParameters += ("&mycontact=" + httpsObject->escape(mycontact));
    };

    if (return_all != "") {
        requestParameters += ("&return_all=" + httpsObject->escape(return_all));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("account.lookupContacts", requestParameters);
};
/*************************************************************************/
void vkapi::accountGetPushSettings (std::string device_id, std::string token) {
    std::string requestParameters = "?";
    if (device_id != "") {
        requestParameters += ("device_id=" + httpsObject->escape(device_id));
    };

    if (token != "") {
        requestParameters += ("&token=" + httpsObject->escape(token));
    };
    request("account.getPushSettings", requestParameters);
};
/*************************************************************************/
void vkapi::accountSaveProfileInfo (std::string first_name, std::string last_name, std::string maiden_name, std::string screen_name, std::string cancel_request_id, std::string sex, std::string relation, std::string relation_partner_id, std::string bdate, std::string bdate_visibility, std::string home_town, std::string country_id, std::string city_id, std::string status) {
    std::string requestParameters = "?";
    if (first_name != "") {
        requestParameters += ("first_name=" + httpsObject->escape(first_name));
    };

    if (last_name != "") {
        requestParameters += ("&last_name=" + httpsObject->escape(last_name));
    };

    if (maiden_name != "") {
        requestParameters += ("&maiden_name=" + httpsObject->escape(maiden_name));
    };

    if (screen_name != "") {
        requestParameters += ("&screen_name=" + httpsObject->escape(screen_name));
    };

    if (cancel_request_id != "") {
        requestParameters += ("&cancel_request_id=" + httpsObject->escape(cancel_request_id));
    };

    if (sex != "") {
        requestParameters += ("&sex=" + httpsObject->escape(sex));
    };

    if (relation != "") {
        requestParameters += ("&relation=" + httpsObject->escape(relation));
    };

    if (relation_partner_id != "") {
        requestParameters += ("&relation_partner_id=" + httpsObject->escape(relation_partner_id));
    };

    if (bdate != "") {
        requestParameters += ("&bdate=" + httpsObject->escape(bdate));
    };

    if (bdate_visibility != "") {
        requestParameters += ("&bdate_visibility=" + httpsObject->escape(bdate_visibility));
    };

    if (home_town != "") {
        requestParameters += ("&home_town=" + httpsObject->escape(home_town));
    };

    if (country_id != "") {
        requestParameters += ("&country_id=" + httpsObject->escape(country_id));
    };

    if (city_id != "") {
        requestParameters += ("&city_id=" + httpsObject->escape(city_id));
    };

    if (status != "") {
        requestParameters += ("&status=" + httpsObject->escape(status));
    };
    request("account.saveProfileInfo", requestParameters);
};
/*************************************************************************/
void vkapi::accountSetInfo (std::string intro, std::string own_posts_default, std::string no_wall_replies) {
    std::string requestParameters = "?";
    if (intro != "") {
        requestParameters += ("intro=" + httpsObject->escape(intro));
    };

    if (own_posts_default != "") {
        requestParameters += ("&own_posts_default=" + httpsObject->escape(own_posts_default));
    };

    if (no_wall_replies != "") {
        requestParameters += ("&no_wall_replies=" + httpsObject->escape(no_wall_replies));
    };
    request("account.setInfo", requestParameters);
};
/*************************************************************************/
void vkapi::accountRegisterDevice (std::string token, std::string device_model, std::string device_year, std::string device_id, std::string system_version, std::string settings, std::string sandbox, std::string no_text, std::string subscribe) {
    std::string requestParameters = "?";
    if (token != "") {
        requestParameters += ("token=" + httpsObject->escape(token));
    };

    if (device_model != "") {
        requestParameters += ("&device_model=" + httpsObject->escape(device_model));
    };

    if (device_year != "") {
        requestParameters += ("&device_year=" + httpsObject->escape(device_year));
    };

    if (device_id != "") {
        requestParameters += ("&device_id=" + httpsObject->escape(device_id));
    };

    if (system_version != "") {
        requestParameters += ("&system_version=" + httpsObject->escape(system_version));
    };

    if (settings != "") {
        requestParameters += ("&settings=" + httpsObject->escape(settings));
    };

    if (sandbox != "") {
        requestParameters += ("&sandbox=" + httpsObject->escape(sandbox));
    };

    if (no_text != "") {
        requestParameters += ("&no_text=" + httpsObject->escape(no_text));
    };

    if (subscribe != "") {
        requestParameters += ("&subscribe=" + httpsObject->escape(subscribe));
    };
    request("account.registerDevice", requestParameters);
};
/*************************************************************************/
void vkapi::accountSetNameInMenu (std::string user_id, std::string name) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (name != "") {
        requestParameters += ("&name=" + httpsObject->escape(name));
    };
    request("account.setNameInMenu", requestParameters);
};
/*************************************************************************/
void vkapi::accountSetOffline () {
    request("account.setOffline");
};
/*************************************************************************/
void vkapi::accountSetOnline (std::string voip) {
    std::string requestParameters = "?";
    if (voip != "") {
        requestParameters += ("voip=" + httpsObject->escape(voip));
    };
    request("account.setOnline", requestParameters);
};
/*************************************************************************/
void vkapi::accountSetPushSettings (std::string device_id, std::string settings, std::string key, std::string value) {
    std::string requestParameters = "?";
    if (device_id != "") {
        requestParameters += ("device_id=" + httpsObject->escape(device_id));
    };

    if (settings != "") {
        requestParameters += ("&settings=" + httpsObject->escape(settings));
    };

    if (key != "") {
        requestParameters += ("&key=" + httpsObject->escape(key));
    };

    if (value != "") {
        requestParameters += ("&value=" + httpsObject->escape(value));
    };
    request("account.setPushSettings", requestParameters);
};
/*************************************************************************/
void vkapi::accountSetSilenceMode (std::string device_id, std::string time, std::string chat_id, std::string user_id, std::string sound, std::string token) {
    std::string requestParameters = "?";
    if (device_id != "") {
        requestParameters += ("device_id=" + httpsObject->escape(device_id));
    };

    if (time != "") {
        requestParameters += ("&time=" + httpsObject->escape(time));
    };

    if (chat_id != "") {
        requestParameters += ("&chat_id=" + httpsObject->escape(chat_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (sound != "") {
        requestParameters += ("&sound=" + httpsObject->escape(sound));
    };

    if (token != "") {
        requestParameters += ("&token=" + httpsObject->escape(token));
    };
    request("account.setSilenceMode", requestParameters);
};
/*************************************************************************/
void vkapi::accountUnbanUser (std::string user_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };
    request("account.unbanUser", requestParameters);
};
/*************************************************************************/
void vkapi::accountUnregisterDevice (std::string device_id, std::string sandbox, std::string token) {
    std::string requestParameters = "?";
    if (device_id != "") {
        requestParameters += ("device_id=" + httpsObject->escape(device_id));
    };

    if (sandbox != "") {
        requestParameters += ("&sandbox=" + httpsObject->escape(sandbox));
    };

    if (token != "") {
        requestParameters += ("&token=" + httpsObject->escape(token));
    };
    request("account.unregisterDevice", requestParameters);
};
/*************************************************************************/
void vkapi::appsGet (std::string app_id, std::string app_ids, std::string platform, std::string extended, std::string return_friends, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (app_id != "") {
        requestParameters += ("app_id=" + httpsObject->escape(app_id));
    };

    if (app_ids != "") {
        requestParameters += ("&app_ids=" + httpsObject->escape(app_ids));
    };

    if (platform != "") {
        requestParameters += ("&platform=" + httpsObject->escape(platform));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (return_friends != "") {
        requestParameters += ("&return_friends=" + httpsObject->escape(return_friends));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("apps.get", requestParameters);
};
/*************************************************************************/
void vkapi::appsDeleteAppRequests () {
    request("apps.deleteAppRequests");
};
/*************************************************************************/
void vkapi::appsGetLeaderboard (std::string type, std::string global, std::string extended) {
    std::string requestParameters = "?";
    if (type != "") {
        requestParameters += ("type=" + httpsObject->escape(type));
    };

    if (global != "") {
        requestParameters += ("&global=" + httpsObject->escape(global));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("apps.getLeaderboard", requestParameters);
};
/*************************************************************************/
void vkapi::appsGetFriendsList (std::string extended, std::string count, std::string offset, std::string type, std::string fields) {
    std::string requestParameters = "?";
    if (extended != "") {
        requestParameters += ("extended=" + httpsObject->escape(extended));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (type != "") {
        requestParameters += ("&type=" + httpsObject->escape(type));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("apps.getFriendsList", requestParameters);
};
/*************************************************************************/
void vkapi::appsGetCatalog (std::string sort, std::string offset, std::string count, std::string platform, std::string extended, std::string return_friends, std::string fields, std::string name_case, std::string q, std::string genre_id, std::string filter) {
    std::string requestParameters = "?";
    if (sort != "") {
        requestParameters += ("sort=" + httpsObject->escape(sort));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (platform != "") {
        requestParameters += ("&platform=" + httpsObject->escape(platform));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (return_friends != "") {
        requestParameters += ("&return_friends=" + httpsObject->escape(return_friends));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };

    if (q != "") {
        requestParameters += ("&q=" + httpsObject->escape(q));
    };

    if (genre_id != "") {
        requestParameters += ("&genre_id=" + httpsObject->escape(genre_id));
    };

    if (filter != "") {
        requestParameters += ("&filter=" + httpsObject->escape(filter));
    };
    request("apps.getCatalog", requestParameters);
};
/*************************************************************************/
void vkapi::appsGetScore (std::string user_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };
    request("apps.getScore", requestParameters);
};
/*************************************************************************/
void vkapi::appsSendRequest (std::string user_id, std::string text, std::string type, std::string name, std::string key, std::string separate) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (type != "") {
        requestParameters += ("&type=" + httpsObject->escape(type));
    };

    if (name != "") {
        requestParameters += ("&name=" + httpsObject->escape(name));
    };

    if (key != "") {
        requestParameters += ("&key=" + httpsObject->escape(key));
    };

    if (separate != "") {
        requestParameters += ("&separate=" + httpsObject->escape(separate));
    };
    request("apps.sendRequest", requestParameters);
};
/*************************************************************************/
void vkapi::audioAddAlbum (std::string group_id, std::string title) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };
    request("audio.addAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::audioAdd (std::string audio_id, std::string owner_id, std::string group_id, std::string album_id) {
    std::string requestParameters = "?";
    if (audio_id != "") {
        requestParameters += ("audio_id=" + httpsObject->escape(audio_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };
    request("audio.add", requestParameters);
};
/*************************************************************************/
void vkapi::audioDelete (std::string audio_id, std::string owner_id) {
    std::string requestParameters = "?";
    if (audio_id != "") {
        requestParameters += ("audio_id=" + httpsObject->escape(audio_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };
    request("audio.delete", requestParameters);
};
/*************************************************************************/
void vkapi::audioDeleteAlbum (std::string group_id, std::string album_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };
    request("audio.deleteAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::audioEditAlbum (std::string group_id, std::string album_id, std::string title) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };
    request("audio.editAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::audioGet (std::string owner_id, std::string album_id, std::string audio_ids, std::string need_user, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (audio_ids != "") {
        requestParameters += ("&audio_ids=" + httpsObject->escape(audio_ids));
    };

    if (need_user != "") {
        requestParameters += ("&need_user=" + httpsObject->escape(need_user));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("audio.get", requestParameters);
};
/*************************************************************************/
void vkapi::audioGetBroadcastList (std::string filter, std::string active) {
    std::string requestParameters = "?";
    if (filter != "") {
        requestParameters += ("filter=" + httpsObject->escape(filter));
    };

    if (active != "") {
        requestParameters += ("&active=" + httpsObject->escape(active));
    };
    request("audio.getBroadcastList", requestParameters);
};
/*************************************************************************/
void vkapi::audioGetAlbums (std::string owner_id, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("audio.getAlbums", requestParameters);
};
/*************************************************************************/
void vkapi::audioEdit (std::string owner_id, std::string audio_id, std::string artist, std::string title, std::string text, std::string genre_id, std::string no_search) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (audio_id != "") {
        requestParameters += ("&audio_id=" + httpsObject->escape(audio_id));
    };

    if (artist != "") {
        requestParameters += ("&artist=" + httpsObject->escape(artist));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (genre_id != "") {
        requestParameters += ("&genre_id=" + httpsObject->escape(genre_id));
    };

    if (no_search != "") {
        requestParameters += ("&no_search=" + httpsObject->escape(no_search));
    };
    request("audio.edit", requestParameters);
};
/*************************************************************************/
void vkapi::audioGetLyrics (std::string lyrics_id) {
    std::string requestParameters = "?";
    if (lyrics_id != "") {
        requestParameters += ("lyrics_id=" + httpsObject->escape(lyrics_id));
    };
    request("audio.getLyrics", requestParameters);
};
/*************************************************************************/
void vkapi::audioGetById (std::string audios) {
    std::string requestParameters = "?";
    if (audios != "") {
        requestParameters += ("audios=" + httpsObject->escape(audios));
    };
    request("audio.getById", requestParameters);
};
/*************************************************************************/
void vkapi::audioGetCount (std::string owner_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };
    request("audio.getCount", requestParameters);
};
/*************************************************************************/
void vkapi::audioGetPopular (std::string only_eng, std::string genre_id, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (only_eng != "") {
        requestParameters += ("only_eng=" + httpsObject->escape(only_eng));
    };

    if (genre_id != "") {
        requestParameters += ("&genre_id=" + httpsObject->escape(genre_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("audio.getPopular", requestParameters);
};
/*************************************************************************/
void vkapi::audioGetRecommendations (std::string target_audio, std::string user_id, std::string offset, std::string count, std::string shuffle) {
    std::string requestParameters = "?";
    if (target_audio != "") {
        requestParameters += ("target_audio=" + httpsObject->escape(target_audio));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (shuffle != "") {
        requestParameters += ("&shuffle=" + httpsObject->escape(shuffle));
    };
    request("audio.getRecommendations", requestParameters);
};
/*************************************************************************/
void vkapi::audioGetUploadServer () {
    request("audio.getUploadServer");
};
/*************************************************************************/
void vkapi::audioMoveToAlbum (std::string group_id, std::string album_id, std::string audio_ids) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (audio_ids != "") {
        requestParameters += ("&audio_ids=" + httpsObject->escape(audio_ids));
    };
    request("audio.moveToAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::audioReorder (std::string audio_id, std::string owner_id, std::string before, std::string after) {
    std::string requestParameters = "?";
    if (audio_id != "") {
        requestParameters += ("audio_id=" + httpsObject->escape(audio_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (before != "") {
        requestParameters += ("&before=" + httpsObject->escape(before));
    };

    if (after != "") {
        requestParameters += ("&after=" + httpsObject->escape(after));
    };
    request("audio.reorder", requestParameters);
};
/*************************************************************************/
void vkapi::audioRestore (std::string audio_id, std::string owner_id) {
    std::string requestParameters = "?";
    if (audio_id != "") {
        requestParameters += ("audio_id=" + httpsObject->escape(audio_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };
    request("audio.restore", requestParameters);
};
/*************************************************************************/
void vkapi::audioSearch (std::string q, std::string auto_complete, std::string lyrics, std::string performer_only, std::string sort, std::string search_own, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (auto_complete != "") {
        requestParameters += ("&auto_complete=" + httpsObject->escape(auto_complete));
    };

    if (lyrics != "") {
        requestParameters += ("&lyrics=" + httpsObject->escape(lyrics));
    };

    if (performer_only != "") {
        requestParameters += ("&performer_only=" + httpsObject->escape(performer_only));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (search_own != "") {
        requestParameters += ("&search_own=" + httpsObject->escape(search_own));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("audio.search", requestParameters);
};
/*************************************************************************/
void vkapi::authCheckPhone (std::string phone, std::string client_id, std::string client_secret) {
    std::string requestParameters = "?";
    if (phone != "") {
        requestParameters += ("phone=" + httpsObject->escape(phone));
    };

    if (client_id != "") {
        requestParameters += ("&client_id=" + httpsObject->escape(client_id));
    };

    if (client_secret != "") {
        requestParameters += ("&client_secret=" + httpsObject->escape(client_secret));
    };
    request("auth.checkPhone", requestParameters);
};
/*************************************************************************/
void vkapi::audioSave (std::string server, std::string audio, std::string hash, std::string artist, std::string title) {
    std::string requestParameters = "?";
    if (server != "") {
        requestParameters += ("server=" + httpsObject->escape(server));
    };

    if (audio != "") {
        requestParameters += ("&audio=" + httpsObject->escape(audio));
    };

    if (hash != "") {
        requestParameters += ("&hash=" + httpsObject->escape(hash));
    };

    if (artist != "") {
        requestParameters += ("&artist=" + httpsObject->escape(artist));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };
    request("audio.save", requestParameters);
};
/*************************************************************************/
void vkapi::authRestore (std::string phone) {
    std::string requestParameters = "?";
    if (phone != "") {
        requestParameters += ("phone=" + httpsObject->escape(phone));
    };
    request("auth.restore", requestParameters);
};
/*************************************************************************/
void vkapi::boardCloseTopic (std::string group_id, std::string topic_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };
    request("board.closeTopic", requestParameters);
};
/*************************************************************************/
void vkapi::boardDeleteComment (std::string group_id, std::string topic_id, std::string comment_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };
    request("board.deleteComment", requestParameters);
};
/*************************************************************************/
void vkapi::boardEditTopic (std::string group_id, std::string topic_id, std::string title) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };
    request("board.editTopic", requestParameters);
};
/*************************************************************************/
void vkapi::boardFixTopic (std::string group_id, std::string topic_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };
    request("board.fixTopic", requestParameters);
};
/*************************************************************************/
void vkapi::boardGetComments (std::string group_id, std::string topic_id, std::string need_likes, std::string start_comment_id, std::string offset, std::string count, std::string extended, std::string sort) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };

    if (need_likes != "") {
        requestParameters += ("&need_likes=" + httpsObject->escape(need_likes));
    };

    if (start_comment_id != "") {
        requestParameters += ("&start_comment_id=" + httpsObject->escape(start_comment_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };
    request("board.getComments", requestParameters);
};
/*************************************************************************/
void vkapi::boardEditComment (std::string group_id, std::string topic_id, std::string comment_id, std::string text, std::string attachments) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };
    request("board.editComment", requestParameters);
};
/*************************************************************************/
void vkapi::authConfirm (std::string client_id, std::string client_secret, std::string phone, std::string code, std::string password, std::string test_mode, std::string intro) {
    std::string requestParameters = "?";
    if (client_id != "") {
        requestParameters += ("client_id=" + httpsObject->escape(client_id));
    };

    if (client_secret != "") {
        requestParameters += ("&client_secret=" + httpsObject->escape(client_secret));
    };

    if (phone != "") {
        requestParameters += ("&phone=" + httpsObject->escape(phone));
    };

    if (code != "") {
        requestParameters += ("&code=" + httpsObject->escape(code));
    };

    if (password != "") {
        requestParameters += ("&password=" + httpsObject->escape(password));
    };

    if (test_mode != "") {
        requestParameters += ("&test_mode=" + httpsObject->escape(test_mode));
    };

    if (intro != "") {
        requestParameters += ("&intro=" + httpsObject->escape(intro));
    };
    request("auth.confirm", requestParameters);
};
/*************************************************************************/
void vkapi::boardGetTopics (std::string group_id, std::string topic_ids, std::string order, std::string offset, std::string count, std::string extended, std::string preview, std::string preview_length) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_ids != "") {
        requestParameters += ("&topic_ids=" + httpsObject->escape(topic_ids));
    };

    if (order != "") {
        requestParameters += ("&order=" + httpsObject->escape(order));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (preview != "") {
        requestParameters += ("&preview=" + httpsObject->escape(preview));
    };

    if (preview_length != "") {
        requestParameters += ("&preview_length=" + httpsObject->escape(preview_length));
    };
    request("board.getTopics", requestParameters);
};
/*************************************************************************/
void vkapi::boardAddComment (std::string group_id, std::string topic_id, std::string text, std::string attachments, std::string from_group, std::string sticker_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };

    if (from_group != "") {
        requestParameters += ("&from_group=" + httpsObject->escape(from_group));
    };

    if (sticker_id != "") {
        requestParameters += ("&sticker_id=" + httpsObject->escape(sticker_id));
    };
    request("board.addComment", requestParameters);
};
/*************************************************************************/
void vkapi::authSignup (std::string first_name, std::string last_name, std::string client_id, std::string client_secret, std::string phone, std::string password, std::string test_mode, std::string voice, std::string sex, std::string sid) {
    std::string requestParameters = "?";
    if (first_name != "") {
        requestParameters += ("first_name=" + httpsObject->escape(first_name));
    };

    if (last_name != "") {
        requestParameters += ("&last_name=" + httpsObject->escape(last_name));
    };

    if (client_id != "") {
        requestParameters += ("&client_id=" + httpsObject->escape(client_id));
    };

    if (client_secret != "") {
        requestParameters += ("&client_secret=" + httpsObject->escape(client_secret));
    };

    if (phone != "") {
        requestParameters += ("&phone=" + httpsObject->escape(phone));
    };

    if (password != "") {
        requestParameters += ("&password=" + httpsObject->escape(password));
    };

    if (test_mode != "") {
        requestParameters += ("&test_mode=" + httpsObject->escape(test_mode));
    };

    if (voice != "") {
        requestParameters += ("&voice=" + httpsObject->escape(voice));
    };

    if (sex != "") {
        requestParameters += ("&sex=" + httpsObject->escape(sex));
    };

    if (sid != "") {
        requestParameters += ("&sid=" + httpsObject->escape(sid));
    };
    request("auth.signup", requestParameters);
};
/*************************************************************************/
void vkapi::audioSetBroadcast (std::string audio, std::string target_ids) {
    std::string requestParameters = "?";
    if (audio != "") {
        requestParameters += ("audio=" + httpsObject->escape(audio));
    };

    if (target_ids != "") {
        requestParameters += ("&target_ids=" + httpsObject->escape(target_ids));
    };
    request("audio.setBroadcast", requestParameters);
};
/*************************************************************************/
void vkapi::boardDeleteTopic (std::string group_id, std::string topic_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };
    request("board.deleteTopic", requestParameters);
};
/*************************************************************************/
void vkapi::boardRestoreComment (std::string group_id, std::string topic_id, std::string comment_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };
    request("board.restoreComment", requestParameters);
};
/*************************************************************************/
void vkapi::boardAddTopic (std::string group_id, std::string title, std::string text, std::string from_group, std::string attachments) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (from_group != "") {
        requestParameters += ("&from_group=" + httpsObject->escape(from_group));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };
    request("board.addTopic", requestParameters);
};
/*************************************************************************/
void vkapi::boardUnfixTopic (std::string group_id, std::string topic_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };
    request("board.unfixTopic", requestParameters);
};
/*************************************************************************/
void vkapi::boardOpenTopic (std::string group_id, std::string topic_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (topic_id != "") {
        requestParameters += ("&topic_id=" + httpsObject->escape(topic_id));
    };
    request("board.openTopic", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetCountries (std::string need_all, std::string code, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (need_all != "") {
        requestParameters += ("need_all=" + httpsObject->escape(need_all));
    };

    if (code != "") {
        requestParameters += ("&code=" + httpsObject->escape(code));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("database.getCountries", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetCountriesById (std::string country_ids) {
    std::string requestParameters = "?";
    if (country_ids != "") {
        requestParameters += ("country_ids=" + httpsObject->escape(country_ids));
    };
    request("database.getCountriesById", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetCities (std::string country_id, std::string region_id, std::string q, std::string need_all, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (country_id != "") {
        requestParameters += ("country_id=" + httpsObject->escape(country_id));
    };

    if (region_id != "") {
        requestParameters += ("&region_id=" + httpsObject->escape(region_id));
    };

    if (q != "") {
        requestParameters += ("&q=" + httpsObject->escape(q));
    };

    if (need_all != "") {
        requestParameters += ("&need_all=" + httpsObject->escape(need_all));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("database.getCities", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetChairs (std::string faculty_id, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (faculty_id != "") {
        requestParameters += ("faculty_id=" + httpsObject->escape(faculty_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("database.getChairs", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetCitiesById (std::string city_ids) {
    std::string requestParameters = "?";
    if (city_ids != "") {
        requestParameters += ("city_ids=" + httpsObject->escape(city_ids));
    };
    request("database.getCitiesById", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetRegions (std::string country_id, std::string q, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (country_id != "") {
        requestParameters += ("country_id=" + httpsObject->escape(country_id));
    };

    if (q != "") {
        requestParameters += ("&q=" + httpsObject->escape(q));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("database.getRegions", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetFaculties (std::string university_id, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (university_id != "") {
        requestParameters += ("university_id=" + httpsObject->escape(university_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("database.getFaculties", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetSchoolClasses (std::string country_id) {
    std::string requestParameters = "?";
    if (country_id != "") {
        requestParameters += ("country_id=" + httpsObject->escape(country_id));
    };
    request("database.getSchoolClasses", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetUniversities (std::string q, std::string country_id, std::string city_id, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (country_id != "") {
        requestParameters += ("&country_id=" + httpsObject->escape(country_id));
    };

    if (city_id != "") {
        requestParameters += ("&city_id=" + httpsObject->escape(city_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("database.getUniversities", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetSchools (std::string q, std::string city_id, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (city_id != "") {
        requestParameters += ("&city_id=" + httpsObject->escape(city_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("database.getSchools", requestParameters);
};
/*************************************************************************/
void vkapi::docsAdd (std::string owner_id, std::string doc_id, std::string access_key) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (doc_id != "") {
        requestParameters += ("&doc_id=" + httpsObject->escape(doc_id));
    };

    if (access_key != "") {
        requestParameters += ("&access_key=" + httpsObject->escape(access_key));
    };
    request("docs.add", requestParameters);
};
/*************************************************************************/
void vkapi::docsDelete (std::string owner_id, std::string doc_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (doc_id != "") {
        requestParameters += ("&doc_id=" + httpsObject->escape(doc_id));
    };
    request("docs.delete", requestParameters);
};
/*************************************************************************/
void vkapi::docsGetById (std::string docs) {
    std::string requestParameters = "?";
    if (docs != "") {
        requestParameters += ("docs=" + httpsObject->escape(docs));
    };
    request("docs.getById", requestParameters);
};
/*************************************************************************/
void vkapi::databaseGetStreetsById (std::string street_ids) {
    std::string requestParameters = "?";
    if (street_ids != "") {
        requestParameters += ("street_ids=" + httpsObject->escape(street_ids));
    };
    request("database.getStreetsById", requestParameters);
};
/*************************************************************************/
void vkapi::docsGet (std::string count, std::string offset, std::string owner_id) {
    std::string requestParameters = "?";
    if (count != "") {
        requestParameters += ("count=" + httpsObject->escape(count));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };
    request("docs.get", requestParameters);
};
/*************************************************************************/
void vkapi::docsGetUploadServer (std::string group_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };
    request("docs.getUploadServer", requestParameters);
};
/*************************************************************************/
void vkapi::docsGetWallUploadServer (std::string group_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };
    request("docs.getWallUploadServer", requestParameters);
};
/*************************************************************************/
void vkapi::execute (std::string code) {
    std::string requestParameters = "?";
    if (code != "") {
        requestParameters += ("code=" + httpsObject->escape(code));
    };
    request("execute", requestParameters);
};
/*************************************************************************/
void vkapi::docsSave (std::string file, std::string title, std::string tags) {
    std::string requestParameters = "?";
    if (file != "") {
        requestParameters += ("file=" + httpsObject->escape(file));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (tags != "") {
        requestParameters += ("&tags=" + httpsObject->escape(tags));
    };
    request("docs.save", requestParameters);
};
/*************************************************************************/
void vkapi::faveAddGroup (std::string group_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };
    request("fave.addGroup", requestParameters);
};
/*************************************************************************/
void vkapi::faveAddLink (std::string link, std::string text) {
    std::string requestParameters = "?";
    if (link != "") {
        requestParameters += ("link=" + httpsObject->escape(link));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };
    request("fave.addLink", requestParameters);
};
/*************************************************************************/
void vkapi::faveGetLinks (std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("fave.getLinks", requestParameters);
};
/*************************************************************************/
void vkapi::faveGetPhotos (std::string offset, std::string count, std::string photo_sizes) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (photo_sizes != "") {
        requestParameters += ("&photo_sizes=" + httpsObject->escape(photo_sizes));
    };
    request("fave.getPhotos", requestParameters);
};
/*************************************************************************/
void vkapi::faveGetPosts (std::string offset, std::string count, std::string extended) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("fave.getPosts", requestParameters);
};
/*************************************************************************/
void vkapi::faveAddUser (std::string user_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };
    request("fave.addUser", requestParameters);
};
/*************************************************************************/
void vkapi::faveGetUsers (std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("fave.getUsers", requestParameters);
};
/*************************************************************************/
void vkapi::faveGetVideos (std::string offset, std::string count, std::string extended) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("fave.getVideos", requestParameters);
};
/*************************************************************************/
void vkapi::faveRemoveLink (std::string link_id) {
    std::string requestParameters = "?";
    if (link_id != "") {
        requestParameters += ("link_id=" + httpsObject->escape(link_id));
    };
    request("fave.removeLink", requestParameters);
};
/*************************************************************************/
void vkapi::friendsAddList (std::string name, std::string user_ids) {
    std::string requestParameters = "?";
    if (name != "") {
        requestParameters += ("name=" + httpsObject->escape(name));
    };

    if (user_ids != "") {
        requestParameters += ("&user_ids=" + httpsObject->escape(user_ids));
    };
    request("friends.addList", requestParameters);
};
/*************************************************************************/
void vkapi::faveRemoveGroup (std::string group_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };
    request("fave.removeGroup", requestParameters);
};
/*************************************************************************/
void vkapi::friendsAreFriends (std::string user_ids, std::string need_sign) {
    std::string requestParameters = "?";
    if (user_ids != "") {
        requestParameters += ("user_ids=" + httpsObject->escape(user_ids));
    };

    if (need_sign != "") {
        requestParameters += ("&need_sign=" + httpsObject->escape(need_sign));
    };
    request("friends.areFriends", requestParameters);
};
/*************************************************************************/
void vkapi::friendsAdd (std::string user_id, std::string text, std::string follow) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (follow != "") {
        requestParameters += ("&follow=" + httpsObject->escape(follow));
    };
    request("friends.add", requestParameters);
};
/*************************************************************************/
void vkapi::friendsDeleteAllRequests () {
    request("friends.deleteAllRequests");
};
/*************************************************************************/
void vkapi::friendsDelete (std::string user_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };
    request("friends.delete", requestParameters);
};
/*************************************************************************/
void vkapi::friendsDeleteList (std::string list_id) {
    std::string requestParameters = "?";
    if (list_id != "") {
        requestParameters += ("list_id=" + httpsObject->escape(list_id));
    };
    request("friends.deleteList", requestParameters);
};
/*************************************************************************/
void vkapi::friendsGet (std::string user_id, std::string order, std::string list_id, std::string count, std::string offset, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (order != "") {
        requestParameters += ("&order=" + httpsObject->escape(order));
    };

    if (list_id != "") {
        requestParameters += ("&list_id=" + httpsObject->escape(list_id));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("friends.get", requestParameters);
};
/*************************************************************************/
void vkapi::friendsEdit (std::string user_id, std::string list_ids) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (list_ids != "") {
        requestParameters += ("&list_ids=" + httpsObject->escape(list_ids));
    };
    request("friends.edit", requestParameters);
};
/*************************************************************************/
void vkapi::friendsEditList (std::string name, std::string list_id, std::string user_ids, std::string add_user_ids, std::string delete_user_ids) {
    std::string requestParameters = "?";
    if (name != "") {
        requestParameters += ("name=" + httpsObject->escape(name));
    };

    if (list_id != "") {
        requestParameters += ("&list_id=" + httpsObject->escape(list_id));
    };

    if (user_ids != "") {
        requestParameters += ("&user_ids=" + httpsObject->escape(user_ids));
    };

    if (add_user_ids != "") {
        requestParameters += ("&add_user_ids=" + httpsObject->escape(add_user_ids));
    };

    if (delete_user_ids != "") {
        requestParameters += ("&delete_user_ids=" + httpsObject->escape(delete_user_ids));
    };
    request("friends.editList", requestParameters);
};
/*************************************************************************/
void vkapi::friendsGetAppUsers () {
    request("friends.getAppUsers");
};
/*************************************************************************/
void vkapi::friendsGetByPhones (std::string phones, std::string fields) {
    std::string requestParameters = "?";
    if (phones != "") {
        requestParameters += ("phones=" + httpsObject->escape(phones));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("friends.getByPhones", requestParameters);
};
/*************************************************************************/
void vkapi::friendsGetLists (std::string user_id, std::string return_system) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (return_system != "") {
        requestParameters += ("&return_system=" + httpsObject->escape(return_system));
    };
    request("friends.getLists", requestParameters);
};
/*************************************************************************/
void vkapi::friendsGetAvailableForCall (std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (fields != "") {
        requestParameters += ("fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("friends.getAvailableForCall", requestParameters);
};
/*************************************************************************/
void vkapi::friendsGetMutual (std::string source_uid, std::string target_uid, std::string target_uids, std::string order, std::string count, std::string offset) {
    std::string requestParameters = "?";
    if (source_uid != "") {
        requestParameters += ("source_uid=" + httpsObject->escape(source_uid));
    };

    if (target_uid != "") {
        requestParameters += ("&target_uid=" + httpsObject->escape(target_uid));
    };

    if (target_uids != "") {
        requestParameters += ("&target_uids=" + httpsObject->escape(target_uids));
    };

    if (order != "") {
        requestParameters += ("&order=" + httpsObject->escape(order));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };
    request("friends.getMutual", requestParameters);
};
/*************************************************************************/
void vkapi::friendsGetOnline (std::string user_id, std::string list_id, std::string online_mobile, std::string order, std::string count, std::string offset) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (list_id != "") {
        requestParameters += ("&list_id=" + httpsObject->escape(list_id));
    };

    if (online_mobile != "") {
        requestParameters += ("&online_mobile=" + httpsObject->escape(online_mobile));
    };

    if (order != "") {
        requestParameters += ("&order=" + httpsObject->escape(order));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };
    request("friends.getOnline", requestParameters);
};
/*************************************************************************/
void vkapi::friendsGetRecent (std::string count) {
    std::string requestParameters = "?";
    if (count != "") {
        requestParameters += ("count=" + httpsObject->escape(count));
    };
    request("friends.getRecent", requestParameters);
};
/*************************************************************************/
void vkapi::friendsGetSuggestions (std::string filter, std::string count, std::string offset, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (filter != "") {
        requestParameters += ("filter=" + httpsObject->escape(filter));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("friends.getSuggestions", requestParameters);
};
/*************************************************************************/
void vkapi::friendsGetRequests (std::string offset, std::string count, std::string extended, std::string need_mutual, std::string out, std::string sort, std::string suggested) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (need_mutual != "") {
        requestParameters += ("&need_mutual=" + httpsObject->escape(need_mutual));
    };

    if (out != "") {
        requestParameters += ("&out=" + httpsObject->escape(out));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (suggested != "") {
        requestParameters += ("&suggested=" + httpsObject->escape(suggested));
    };
    request("friends.getRequests", requestParameters);
};
/*************************************************************************/
void vkapi::friendsSearch (std::string user_id, std::string q, std::string fields, std::string name_case, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (q != "") {
        requestParameters += ("&q=" + httpsObject->escape(q));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("friends.search", requestParameters);
};
/*************************************************************************/
void vkapi::giftsGet (std::string user_id, std::string count, std::string offset) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };
    request("gifts.get", requestParameters);
};
/*************************************************************************/
void vkapi::groupsAddLink (std::string group_id, std::string link, std::string text) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (link != "") {
        requestParameters += ("&link=" + httpsObject->escape(link));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };
    request("groups.addLink", requestParameters);
};
/*************************************************************************/
void vkapi::groupsApproveRequest (std::string group_id, std::string user_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };
    request("groups.approveRequest", requestParameters);
};
/*************************************************************************/
void vkapi::groupsBanUser (std::string group_id, std::string user_id, std::string end_date, std::string reason, std::string comment, std::string comment_visible) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (end_date != "") {
        requestParameters += ("&end_date=" + httpsObject->escape(end_date));
    };

    if (reason != "") {
        requestParameters += ("&reason=" + httpsObject->escape(reason));
    };

    if (comment != "") {
        requestParameters += ("&comment=" + httpsObject->escape(comment));
    };

    if (comment_visible != "") {
        requestParameters += ("&comment_visible=" + httpsObject->escape(comment_visible));
    };
    request("groups.banUser", requestParameters);
};
/*************************************************************************/
void vkapi::groupsCreate (std::string title, std::string description, std::string type, std::string subtype) {
    std::string requestParameters = "?";
    if (title != "") {
        requestParameters += ("title=" + httpsObject->escape(title));
    };

    if (description != "") {
        requestParameters += ("&description=" + httpsObject->escape(description));
    };

    if (type != "") {
        requestParameters += ("&type=" + httpsObject->escape(type));
    };

    if (subtype != "") {
        requestParameters += ("&subtype=" + httpsObject->escape(subtype));
    };
    request("groups.create", requestParameters);
};
/*************************************************************************/
void vkapi::groupsEdit (std::string group_id, std::string title, std::string description, std::string screen_name, std::string access, std::string website, std::string subject, std::string email, std::string phone, std::string rss, std::string event_start_date, std::string event_finish_date, std::string event_group_id, std::string public_category, std::string public_subcategory, std::string public_date, std::string wall, std::string topics, std::string photos, std::string video, std::string audio, std::string links, std::string events, std::string places, std::string contacts, std::string docs, std::string wiki) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (description != "") {
        requestParameters += ("&description=" + httpsObject->escape(description));
    };

    if (screen_name != "") {
        requestParameters += ("&screen_name=" + httpsObject->escape(screen_name));
    };

    if (access != "") {
        requestParameters += ("&access=" + httpsObject->escape(access));
    };

    if (website != "") {
        requestParameters += ("&website=" + httpsObject->escape(website));
    };

    if (subject != "") {
        requestParameters += ("&subject=" + httpsObject->escape(subject));
    };

    if (email != "") {
        requestParameters += ("&email=" + httpsObject->escape(email));
    };

    if (phone != "") {
        requestParameters += ("&phone=" + httpsObject->escape(phone));
    };

    if (rss != "") {
        requestParameters += ("&rss=" + httpsObject->escape(rss));
    };

    if (event_start_date != "") {
        requestParameters += ("&event_start_date=" + httpsObject->escape(event_start_date));
    };

    if (event_finish_date != "") {
        requestParameters += ("&event_finish_date=" + httpsObject->escape(event_finish_date));
    };

    if (event_group_id != "") {
        requestParameters += ("&event_group_id=" + httpsObject->escape(event_group_id));
    };

    if (public_category != "") {
        requestParameters += ("&public_category=" + httpsObject->escape(public_category));
    };

    if (public_subcategory != "") {
        requestParameters += ("&public_subcategory=" + httpsObject->escape(public_subcategory));
    };

    if (public_date != "") {
        requestParameters += ("&public_date=" + httpsObject->escape(public_date));
    };

    if (wall != "") {
        requestParameters += ("&wall=" + httpsObject->escape(wall));
    };

    if (topics != "") {
        requestParameters += ("&topics=" + httpsObject->escape(topics));
    };

    if (photos != "") {
        requestParameters += ("&photos=" + httpsObject->escape(photos));
    };

    if (video != "") {
        requestParameters += ("&video=" + httpsObject->escape(video));
    };

    if (audio != "") {
        requestParameters += ("&audio=" + httpsObject->escape(audio));
    };

    if (links != "") {
        requestParameters += ("&links=" + httpsObject->escape(links));
    };

    if (events != "") {
        requestParameters += ("&events=" + httpsObject->escape(events));
    };

    if (places != "") {
        requestParameters += ("&places=" + httpsObject->escape(places));
    };

    if (contacts != "") {
        requestParameters += ("&contacts=" + httpsObject->escape(contacts));
    };

    if (docs != "") {
        requestParameters += ("&docs=" + httpsObject->escape(docs));
    };

    if (wiki != "") {
        requestParameters += ("&wiki=" + httpsObject->escape(wiki));
    };
    request("groups.edit", requestParameters);
};
/*************************************************************************/
void vkapi::groupsDeleteLink (std::string group_id, std::string link_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (link_id != "") {
        requestParameters += ("&link_id=" + httpsObject->escape(link_id));
    };
    request("groups.deleteLink", requestParameters);
};
/*************************************************************************/
void vkapi::groupsEditLink (std::string group_id, std::string link_id, std::string text) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (link_id != "") {
        requestParameters += ("&link_id=" + httpsObject->escape(link_id));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };
    request("groups.editLink", requestParameters);
};
/*************************************************************************/
void vkapi::groupsEditManager (std::string group_id, std::string user_id, std::string role, std::string is_contact, std::string contact_position, std::string contact_phone, std::string contact_email) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (role != "") {
        requestParameters += ("&role=" + httpsObject->escape(role));
    };

    if (is_contact != "") {
        requestParameters += ("&is_contact=" + httpsObject->escape(is_contact));
    };

    if (contact_position != "") {
        requestParameters += ("&contact_position=" + httpsObject->escape(contact_position));
    };

    if (contact_phone != "") {
        requestParameters += ("&contact_phone=" + httpsObject->escape(contact_phone));
    };

    if (contact_email != "") {
        requestParameters += ("&contact_email=" + httpsObject->escape(contact_email));
    };
    request("groups.editManager", requestParameters);
};
/*************************************************************************/
void vkapi::groupsEditPlace (std::string group_id, std::string title, std::string address, std::string country_id, std::string city_id, std::string latitude, std::string longitude) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (address != "") {
        requestParameters += ("&address=" + httpsObject->escape(address));
    };

    if (country_id != "") {
        requestParameters += ("&country_id=" + httpsObject->escape(country_id));
    };

    if (city_id != "") {
        requestParameters += ("&city_id=" + httpsObject->escape(city_id));
    };

    if (latitude != "") {
        requestParameters += ("&latitude=" + httpsObject->escape(latitude));
    };

    if (longitude != "") {
        requestParameters += ("&longitude=" + httpsObject->escape(longitude));
    };
    request("groups.editPlace", requestParameters);
};
/*************************************************************************/
void vkapi::groupsGetBanned (std::string group_id, std::string offset, std::string count, std::string fields, std::string user_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };
    request("groups.getBanned", requestParameters);
};
/*************************************************************************/
void vkapi::groupsGet (std::string user_id, std::string extended, std::string filter, std::string fields, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (filter != "") {
        requestParameters += ("&filter=" + httpsObject->escape(filter));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("groups.get", requestParameters);
};
/*************************************************************************/
void vkapi::groupsGetInvites (std::string offset, std::string count, std::string extended) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("groups.getInvites", requestParameters);
};
/*************************************************************************/
void vkapi::groupsGetInvitedUsers (std::string group_id, std::string offset, std::string count, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("groups.getInvitedUsers", requestParameters);
};
/*************************************************************************/
void vkapi::groupsGetById (std::string group_ids, std::string group_id, std::string fields) {
    std::string requestParameters = "?";
    if (group_ids != "") {
        requestParameters += ("group_ids=" + httpsObject->escape(group_ids));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("groups.getById", requestParameters);
};
/*************************************************************************/
void vkapi::groupsGetMembers (std::string group_id, std::string sort, std::string offset, std::string count, std::string fields, std::string filter) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (filter != "") {
        requestParameters += ("&filter=" + httpsObject->escape(filter));
    };
    request("groups.getMembers", requestParameters);
};
/*************************************************************************/
void vkapi::groupsGetRequests (std::string group_id, std::string offset, std::string count, std::string fields) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("groups.getRequests", requestParameters);
};
/*************************************************************************/
void vkapi::groupsGetSettings (std::string group_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };
    request("groups.getSettings", requestParameters);
};
/*************************************************************************/
void vkapi::groupsInvite (std::string group_id, std::string user_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };
    request("groups.invite", requestParameters);
};
/*************************************************************************/
void vkapi::groupsIsMember (std::string group_id, std::string user_id, std::string user_ids, std::string extended) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (user_ids != "") {
        requestParameters += ("&user_ids=" + httpsObject->escape(user_ids));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("groups.isMember", requestParameters);
};
/*************************************************************************/
void vkapi::groupsJoin (std::string group_id, std::string not_sure) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (not_sure != "") {
        requestParameters += ("&not_sure=" + httpsObject->escape(not_sure));
    };
    request("groups.join", requestParameters);
};
/*************************************************************************/
void vkapi::groupsLeave (std::string group_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };
    request("groups.leave", requestParameters);
};
/*************************************************************************/
void vkapi::groupsRemoveUser (std::string group_id, std::string user_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };
    request("groups.removeUser", requestParameters);
};
/*************************************************************************/
void vkapi::groupsReorderLink (std::string group_id, std::string link_id, std::string after) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (link_id != "") {
        requestParameters += ("&link_id=" + httpsObject->escape(link_id));
    };

    if (after != "") {
        requestParameters += ("&after=" + httpsObject->escape(after));
    };
    request("groups.reorderLink", requestParameters);
};
/*************************************************************************/
void vkapi::groupsSearch (std::string q, std::string type, std::string country_id, std::string city_id, std::string future, std::string sort, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (type != "") {
        requestParameters += ("&type=" + httpsObject->escape(type));
    };

    if (country_id != "") {
        requestParameters += ("&country_id=" + httpsObject->escape(country_id));
    };

    if (city_id != "") {
        requestParameters += ("&city_id=" + httpsObject->escape(city_id));
    };

    if (future != "") {
        requestParameters += ("&future=" + httpsObject->escape(future));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("groups.search", requestParameters);
};
/*************************************************************************/
void vkapi::groupsUnbanUser (std::string group_id, std::string user_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };
    request("groups.unbanUser", requestParameters);
};
/*************************************************************************/
void vkapi::likesAdd (std::string type, std::string owner_id, std::string item_id, std::string access_key, std::string ref) {
    std::string requestParameters = "?";
    if (type != "") {
        requestParameters += ("type=" + httpsObject->escape(type));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (item_id != "") {
        requestParameters += ("&item_id=" + httpsObject->escape(item_id));
    };

    if (access_key != "") {
        requestParameters += ("&access_key=" + httpsObject->escape(access_key));
    };

    if (ref != "") {
        requestParameters += ("&ref=" + httpsObject->escape(ref));
    };
    request("likes.add", requestParameters);
};
/*************************************************************************/
void vkapi::likesDelete (std::string type, std::string owner_id, std::string item_id) {
    std::string requestParameters = "?";
    if (type != "") {
        requestParameters += ("type=" + httpsObject->escape(type));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (item_id != "") {
        requestParameters += ("&item_id=" + httpsObject->escape(item_id));
    };
    request("likes.delete", requestParameters);
};
/*************************************************************************/
void vkapi::messagesCreateChat (std::string user_ids, std::string title) {
    std::string requestParameters = "?";
    if (user_ids != "") {
        requestParameters += ("user_ids=" + httpsObject->escape(user_ids));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };
    request("messages.createChat", requestParameters);
};
/*************************************************************************/
void vkapi::messagesAddChatUser (std::string chat_id, std::string user_id) {
    std::string requestParameters = "?";
    if (chat_id != "") {
        requestParameters += ("chat_id=" + httpsObject->escape(chat_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };
    request("messages.addChatUser", requestParameters);
};
/*************************************************************************/
void vkapi::likesGetList (std::string type, std::string owner_id, std::string item_id, std::string page_url, std::string filter, std::string friends_only, std::string extended, std::string offset, std::string count, std::string skip_own) {
    std::string requestParameters = "?";
    if (type != "") {
        requestParameters += ("type=" + httpsObject->escape(type));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (item_id != "") {
        requestParameters += ("&item_id=" + httpsObject->escape(item_id));
    };

    if (page_url != "") {
        requestParameters += ("&page_url=" + httpsObject->escape(page_url));
    };

    if (filter != "") {
        requestParameters += ("&filter=" + httpsObject->escape(filter));
    };

    if (friends_only != "") {
        requestParameters += ("&friends_only=" + httpsObject->escape(friends_only));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (skip_own != "") {
        requestParameters += ("&skip_own=" + httpsObject->escape(skip_own));
    };
    request("likes.getList", requestParameters);
};
/*************************************************************************/
void vkapi::likesIsLiked (std::string user_id, std::string type, std::string owner_id, std::string item_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (type != "") {
        requestParameters += ("&type=" + httpsObject->escape(type));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (item_id != "") {
        requestParameters += ("&item_id=" + httpsObject->escape(item_id));
    };
    request("likes.isLiked", requestParameters);
};
/*************************************************************************/
void vkapi::messagesDeleteChatPhoto (std::string chat_id) {
    std::string requestParameters = "?";
    if (chat_id != "") {
        requestParameters += ("chat_id=" + httpsObject->escape(chat_id));
    };
    request("messages.deleteChatPhoto", requestParameters);
};
/*************************************************************************/
void vkapi::messagesDelete (std::string message_ids) {
    std::string requestParameters = "?";
    if (message_ids != "") {
        requestParameters += ("message_ids=" + httpsObject->escape(message_ids));
    };
    request("messages.delete", requestParameters);
};
/*************************************************************************/
void vkapi::messagesDeleteDialog (std::string user_id, std::string peer_id, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (peer_id != "") {
        requestParameters += ("&peer_id=" + httpsObject->escape(peer_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("messages.deleteDialog", requestParameters);
};
/*************************************************************************/
void vkapi::messagesEditChat (std::string chat_id, std::string title) {
    std::string requestParameters = "?";
    if (chat_id != "") {
        requestParameters += ("chat_id=" + httpsObject->escape(chat_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };
    request("messages.editChat", requestParameters);
};
/*************************************************************************/
void vkapi::messagesGet (std::string out, std::string offset, std::string count, std::string time_offset, std::string filters, std::string preview_length, std::string last_message_id) {
    std::string requestParameters = "?";
    if (out != "") {
        requestParameters += ("out=" + httpsObject->escape(out));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (time_offset != "") {
        requestParameters += ("&time_offset=" + httpsObject->escape(time_offset));
    };

    if (filters != "") {
        requestParameters += ("&filters=" + httpsObject->escape(filters));
    };

    if (preview_length != "") {
        requestParameters += ("&preview_length=" + httpsObject->escape(preview_length));
    };

    if (last_message_id != "") {
        requestParameters += ("&last_message_id=" + httpsObject->escape(last_message_id));
    };
    request("messages.get", requestParameters);
};
/*************************************************************************/
void vkapi::messagesGetById (std::string message_ids, std::string preview_length) {
    std::string requestParameters = "?";
    if (message_ids != "") {
        requestParameters += ("message_ids=" + httpsObject->escape(message_ids));
    };

    if (preview_length != "") {
        requestParameters += ("&preview_length=" + httpsObject->escape(preview_length));
    };
    request("messages.getById", requestParameters);
};
/*************************************************************************/
void vkapi::messagesGetChat (std::string chat_id, std::string chat_ids, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (chat_id != "") {
        requestParameters += ("chat_id=" + httpsObject->escape(chat_id));
    };

    if (chat_ids != "") {
        requestParameters += ("&chat_ids=" + httpsObject->escape(chat_ids));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("messages.getChat", requestParameters);
};
/*************************************************************************/
void vkapi::messagesGetChatUsers (std::string chat_id, std::string chat_ids, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (chat_id != "") {
        requestParameters += ("chat_id=" + httpsObject->escape(chat_id));
    };

    if (chat_ids != "") {
        requestParameters += ("&chat_ids=" + httpsObject->escape(chat_ids));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("messages.getChatUsers", requestParameters);
};
/*************************************************************************/
void vkapi::messagesGetDialogs (std::string offset, std::string count, std::string start_message_id, std::string preview_length, std::string unread, std::string user_id) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (start_message_id != "") {
        requestParameters += ("&start_message_id=" + httpsObject->escape(start_message_id));
    };

    if (preview_length != "") {
        requestParameters += ("&preview_length=" + httpsObject->escape(preview_length));
    };

    if (unread != "") {
        requestParameters += ("&unread=" + httpsObject->escape(unread));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };
    request("messages.getDialogs", requestParameters);
};
/*************************************************************************/
void vkapi::messagesGetHistory (std::string offset, std::string count, std::string user_id, std::string chat_id, std::string peer_id, std::string start_message_id, std::string rev) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (chat_id != "") {
        requestParameters += ("&chat_id=" + httpsObject->escape(chat_id));
    };

    if (peer_id != "") {
        requestParameters += ("&peer_id=" + httpsObject->escape(peer_id));
    };

    if (start_message_id != "") {
        requestParameters += ("&start_message_id=" + httpsObject->escape(start_message_id));
    };

    if (rev != "") {
        requestParameters += ("&rev=" + httpsObject->escape(rev));
    };
    request("messages.getHistory", requestParameters);
};
/*************************************************************************/
void vkapi::messagesGetLastActivity (std::string user_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };
    request("messages.getLastActivity", requestParameters);
};
/*************************************************************************/
void vkapi::messagesGetLongPollHistory (std::string ts, std::string pts, std::string preview_length, std::string onlines, std::string fields, std::string events_limit, std::string msgs_limit, std::string max_msg_id) {
    std::string requestParameters = "?";
    if (ts != "") {
        requestParameters += ("ts=" + httpsObject->escape(ts));
    };

    if (pts != "") {
        requestParameters += ("&pts=" + httpsObject->escape(pts));
    };

    if (preview_length != "") {
        requestParameters += ("&preview_length=" + httpsObject->escape(preview_length));
    };

    if (onlines != "") {
        requestParameters += ("&onlines=" + httpsObject->escape(onlines));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (events_limit != "") {
        requestParameters += ("&events_limit=" + httpsObject->escape(events_limit));
    };

    if (msgs_limit != "") {
        requestParameters += ("&msgs_limit=" + httpsObject->escape(msgs_limit));
    };

    if (max_msg_id != "") {
        requestParameters += ("&max_msg_id=" + httpsObject->escape(max_msg_id));
    };
    request("messages.getLongPollHistory", requestParameters);
};
/*************************************************************************/
void vkapi::messagesGetLongPollServer (std::string use_ssl, std::string need_pts) {
    std::string requestParameters = "?";
    if (use_ssl != "") {
        requestParameters += ("use_ssl=" + httpsObject->escape(use_ssl));
    };

    if (need_pts != "") {
        requestParameters += ("&need_pts=" + httpsObject->escape(need_pts));
    };
    request("messages.getLongPollServer", requestParameters);
};
/*************************************************************************/
void vkapi::messagesMarkAsImportant (std::string message_ids, std::string important) {
    std::string requestParameters = "?";
    if (message_ids != "") {
        requestParameters += ("message_ids=" + httpsObject->escape(message_ids));
    };

    if (important != "") {
        requestParameters += ("&important=" + httpsObject->escape(important));
    };
    request("messages.markAsImportant", requestParameters);
};
/*************************************************************************/
void vkapi::messagesMarkAsRead (std::string message_ids, std::string peer_id, std::string start_message_id) {
    std::string requestParameters = "?";
    if (message_ids != "") {
        requestParameters += ("message_ids=" + httpsObject->escape(message_ids));
    };

    if (peer_id != "") {
        requestParameters += ("&peer_id=" + httpsObject->escape(peer_id));
    };

    if (start_message_id != "") {
        requestParameters += ("&start_message_id=" + httpsObject->escape(start_message_id));
    };
    request("messages.markAsRead", requestParameters);
};
/*************************************************************************/
void vkapi::messagesRemoveChatUser (std::string chat_id, std::string user_id) {
    std::string requestParameters = "?";
    if (chat_id != "") {
        requestParameters += ("chat_id=" + httpsObject->escape(chat_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };
    request("messages.removeChatUser", requestParameters);
};
/*************************************************************************/
void vkapi::messagesRestore (std::string message_id) {
    std::string requestParameters = "?";
    if (message_id != "") {
        requestParameters += ("message_id=" + httpsObject->escape(message_id));
    };
    request("messages.restore", requestParameters);
};
/*************************************************************************/
void vkapi::messagesSearch (std::string q, std::string preview_length, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (preview_length != "") {
        requestParameters += ("&preview_length=" + httpsObject->escape(preview_length));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("messages.search", requestParameters);
};
/*************************************************************************/
void vkapi::messagesSetActivity (std::string user_id, std::string type, std::string peer_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (type != "") {
        requestParameters += ("&type=" + httpsObject->escape(type));
    };

    if (peer_id != "") {
        requestParameters += ("&peer_id=" + httpsObject->escape(peer_id));
    };
    request("messages.setActivity", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedDeleteBan (std::string user_ids, std::string group_ids) {
    std::string requestParameters = "?";
    if (user_ids != "") {
        requestParameters += ("user_ids=" + httpsObject->escape(user_ids));
    };

    if (group_ids != "") {
        requestParameters += ("&group_ids=" + httpsObject->escape(group_ids));
    };
    request("newsfeed.deleteBan", requestParameters);
};
/*************************************************************************/
void vkapi::messagesSend (std::string user_id, std::string peer_id, std::string domain, std::string chat_id, std::string user_ids, std::string message, std::string guid, std::string lat, std::string long_, std::string attachment, std::string forward_messages, std::string sticker_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (peer_id != "") {
        requestParameters += ("&peer_id=" + httpsObject->escape(peer_id));
    };

    if (domain != "") {
        requestParameters += ("&domain=" + httpsObject->escape(domain));
    };

    if (chat_id != "") {
        requestParameters += ("&chat_id=" + httpsObject->escape(chat_id));
    };

    if (user_ids != "") {
        requestParameters += ("&user_ids=" + httpsObject->escape(user_ids));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };

    if (guid != "") {
        requestParameters += ("&guid=" + httpsObject->escape(guid));
    };

    if (lat != "") {
        requestParameters += ("&lat=" + httpsObject->escape(lat));
    };

    if (long_ != "") {
        requestParameters += ("&long=" + httpsObject->escape(long_));
    };

    if (attachment != "") {
        requestParameters += ("&attachment=" + httpsObject->escape(attachment));
    };

    if (forward_messages != "") {
        requestParameters += ("&forward_messages=" + httpsObject->escape(forward_messages));
    };

    if (sticker_id != "") {
        requestParameters += ("&sticker_id=" + httpsObject->escape(sticker_id));
    };
    request("messages.send", requestParameters);
};
/*************************************************************************/
void vkapi::messagesSetChatPhoto (std::string file) {
    std::string requestParameters = "?";
    if (file != "") {
        requestParameters += ("file=" + httpsObject->escape(file));
    };
    request("messages.setChatPhoto", requestParameters);
};
/*************************************************************************/
void vkapi::messagesSearchDialogs (std::string q, std::string limit, std::string fields) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (limit != "") {
        requestParameters += ("&limit=" + httpsObject->escape(limit));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("messages.searchDialogs", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedDeleteList (std::string list_id) {
    std::string requestParameters = "?";
    if (list_id != "") {
        requestParameters += ("list_id=" + httpsObject->escape(list_id));
    };
    request("newsfeed.deleteList", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedGet (std::string filters, std::string return_banned, std::string start_time, std::string end_time, std::string max_photos, std::string source_ids, std::string start_from, std::string count, std::string fields, std::string from, std::string offset) {
    std::string requestParameters = "?";
    if (filters != "") {
        requestParameters += ("filters=" + httpsObject->escape(filters));
    };

    if (return_banned != "") {
        requestParameters += ("&return_banned=" + httpsObject->escape(return_banned));
    };

    if (start_time != "") {
        requestParameters += ("&start_time=" + httpsObject->escape(start_time));
    };

    if (end_time != "") {
        requestParameters += ("&end_time=" + httpsObject->escape(end_time));
    };

    if (max_photos != "") {
        requestParameters += ("&max_photos=" + httpsObject->escape(max_photos));
    };

    if (source_ids != "") {
        requestParameters += ("&source_ids=" + httpsObject->escape(source_ids));
    };

    if (start_from != "") {
        requestParameters += ("&start_from=" + httpsObject->escape(start_from));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (from != "") {
        requestParameters += ("&from=" + httpsObject->escape(from));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };
    request("newsfeed.get", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedGetBanned (std::string extended, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (extended != "") {
        requestParameters += ("extended=" + httpsObject->escape(extended));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("newsfeed.getBanned", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedGetComments (std::string count, std::string filters, std::string reposts, std::string start_time, std::string end_time, std::string last_comments_count, std::string start_from, std::string fields, std::string from, std::string last_comments) {
    std::string requestParameters = "?";
    if (count != "") {
        requestParameters += ("count=" + httpsObject->escape(count));
    };

    if (filters != "") {
        requestParameters += ("&filters=" + httpsObject->escape(filters));
    };

    if (reposts != "") {
        requestParameters += ("&reposts=" + httpsObject->escape(reposts));
    };

    if (start_time != "") {
        requestParameters += ("&start_time=" + httpsObject->escape(start_time));
    };

    if (end_time != "") {
        requestParameters += ("&end_time=" + httpsObject->escape(end_time));
    };

    if (last_comments_count != "") {
        requestParameters += ("&last_comments_count=" + httpsObject->escape(last_comments_count));
    };

    if (start_from != "") {
        requestParameters += ("&start_from=" + httpsObject->escape(start_from));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (from != "") {
        requestParameters += ("&from=" + httpsObject->escape(from));
    };

    if (last_comments != "") {
        requestParameters += ("&last_comments=" + httpsObject->escape(last_comments));
    };
    request("newsfeed.getComments", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedGetLists (std::string list_ids, std::string extended) {
    std::string requestParameters = "?";
    if (list_ids != "") {
        requestParameters += ("list_ids=" + httpsObject->escape(list_ids));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("newsfeed.getLists", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedGetMentions (std::string owner_id, std::string start_time, std::string end_time, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (start_time != "") {
        requestParameters += ("&start_time=" + httpsObject->escape(start_time));
    };

    if (end_time != "") {
        requestParameters += ("&end_time=" + httpsObject->escape(end_time));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("newsfeed.getMentions", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedIgnoreItem (std::string type, std::string owner_id, std::string item_id) {
    std::string requestParameters = "?";
    if (type != "") {
        requestParameters += ("type=" + httpsObject->escape(type));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (item_id != "") {
        requestParameters += ("&item_id=" + httpsObject->escape(item_id));
    };
    request("newsfeed.ignoreItem", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedGetSuggestedSources (std::string offset, std::string count, std::string shuffle, std::string fields) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (shuffle != "") {
        requestParameters += ("&shuffle=" + httpsObject->escape(shuffle));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("newsfeed.getSuggestedSources", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedGetRecommended (std::string start_time, std::string end_time, std::string max_photos, std::string start_from, std::string count, std::string fields, std::string from, std::string offset) {
    std::string requestParameters = "?";
    if (start_time != "") {
        requestParameters += ("start_time=" + httpsObject->escape(start_time));
    };

    if (end_time != "") {
        requestParameters += ("&end_time=" + httpsObject->escape(end_time));
    };

    if (max_photos != "") {
        requestParameters += ("&max_photos=" + httpsObject->escape(max_photos));
    };

    if (start_from != "") {
        requestParameters += ("&start_from=" + httpsObject->escape(start_from));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (from != "") {
        requestParameters += ("&from=" + httpsObject->escape(from));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };
    request("newsfeed.getRecommended", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedSaveList (std::string list_id, std::string title, std::string source_ids, std::string no_reposts) {
    std::string requestParameters = "?";
    if (list_id != "") {
        requestParameters += ("list_id=" + httpsObject->escape(list_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (source_ids != "") {
        requestParameters += ("&source_ids=" + httpsObject->escape(source_ids));
    };

    if (no_reposts != "") {
        requestParameters += ("&no_reposts=" + httpsObject->escape(no_reposts));
    };
    request("newsfeed.saveList", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedSearch (std::string q, std::string extended, std::string count, std::string latitude, std::string longitude, std::string start_time, std::string end_time, std::string start_from, std::string fields, std::string start_id, std::string offset) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (latitude != "") {
        requestParameters += ("&latitude=" + httpsObject->escape(latitude));
    };

    if (longitude != "") {
        requestParameters += ("&longitude=" + httpsObject->escape(longitude));
    };

    if (start_time != "") {
        requestParameters += ("&start_time=" + httpsObject->escape(start_time));
    };

    if (end_time != "") {
        requestParameters += ("&end_time=" + httpsObject->escape(end_time));
    };

    if (start_from != "") {
        requestParameters += ("&start_from=" + httpsObject->escape(start_from));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (start_id != "") {
        requestParameters += ("&start_id=" + httpsObject->escape(start_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };
    request("newsfeed.search", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedUnignoreItem (std::string type, std::string owner_id, std::string item_id) {
    std::string requestParameters = "?";
    if (type != "") {
        requestParameters += ("type=" + httpsObject->escape(type));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (item_id != "") {
        requestParameters += ("&item_id=" + httpsObject->escape(item_id));
    };
    request("newsfeed.unignoreItem", requestParameters);
};
/*************************************************************************/
void vkapi::newsfeedUnsubscribe (std::string type, std::string owner_id, std::string item_id) {
    std::string requestParameters = "?";
    if (type != "") {
        requestParameters += ("type=" + httpsObject->escape(type));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (item_id != "") {
        requestParameters += ("&item_id=" + httpsObject->escape(item_id));
    };
    request("newsfeed.unsubscribe", requestParameters);
};
/*************************************************************************/
void vkapi::notesAdd (std::string title, std::string text, std::string privacy_view, std::string privacy_comment, std::string privacy, std::string comment_privacy) {
    std::string requestParameters = "?";
    if (title != "") {
        requestParameters += ("title=" + httpsObject->escape(title));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (privacy_view != "") {
        requestParameters += ("&privacy_view=" + httpsObject->escape(privacy_view));
    };

    if (privacy_comment != "") {
        requestParameters += ("&privacy_comment=" + httpsObject->escape(privacy_comment));
    };

    if (privacy != "") {
        requestParameters += ("&privacy=" + httpsObject->escape(privacy));
    };

    if (comment_privacy != "") {
        requestParameters += ("&comment_privacy=" + httpsObject->escape(comment_privacy));
    };
    request("notes.add", requestParameters);
};
/*************************************************************************/
void vkapi::notesCreateComment (std::string note_id, std::string owner_id, std::string reply_to, std::string message) {
    std::string requestParameters = "?";
    if (note_id != "") {
        requestParameters += ("note_id=" + httpsObject->escape(note_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (reply_to != "") {
        requestParameters += ("&reply_to=" + httpsObject->escape(reply_to));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };
    request("notes.createComment", requestParameters);
};
/*************************************************************************/
void vkapi::notesDelete (std::string note_id) {
    std::string requestParameters = "?";
    if (note_id != "") {
        requestParameters += ("note_id=" + httpsObject->escape(note_id));
    };
    request("notes.delete", requestParameters);
};
/*************************************************************************/
void vkapi::notesEdit (std::string note_id, std::string title, std::string text, std::string privacy_view, std::string privacy_comment, std::string privacy, std::string comment_privacy) {
    std::string requestParameters = "?";
    if (note_id != "") {
        requestParameters += ("note_id=" + httpsObject->escape(note_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (privacy_view != "") {
        requestParameters += ("&privacy_view=" + httpsObject->escape(privacy_view));
    };

    if (privacy_comment != "") {
        requestParameters += ("&privacy_comment=" + httpsObject->escape(privacy_comment));
    };

    if (privacy != "") {
        requestParameters += ("&privacy=" + httpsObject->escape(privacy));
    };

    if (comment_privacy != "") {
        requestParameters += ("&comment_privacy=" + httpsObject->escape(comment_privacy));
    };
    request("notes.edit", requestParameters);
};
/*************************************************************************/
void vkapi::notesDeleteComment (std::string comment_id, std::string owner_id) {
    std::string requestParameters = "?";
    if (comment_id != "") {
        requestParameters += ("comment_id=" + httpsObject->escape(comment_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };
    request("notes.deleteComment", requestParameters);
};
/*************************************************************************/
void vkapi::notesEditComment (std::string comment_id, std::string owner_id, std::string message) {
    std::string requestParameters = "?";
    if (comment_id != "") {
        requestParameters += ("comment_id=" + httpsObject->escape(comment_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };
    request("notes.editComment", requestParameters);
};
/*************************************************************************/
void vkapi::notesGet (std::string note_ids, std::string user_id, std::string offset, std::string count, std::string sort) {
    std::string requestParameters = "?";
    if (note_ids != "") {
        requestParameters += ("note_ids=" + httpsObject->escape(note_ids));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };
    request("notes.get", requestParameters);
};
/*************************************************************************/
void vkapi::notesGetById (std::string note_id, std::string owner_id, std::string need_wiki) {
    std::string requestParameters = "?";
    if (note_id != "") {
        requestParameters += ("note_id=" + httpsObject->escape(note_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (need_wiki != "") {
        requestParameters += ("&need_wiki=" + httpsObject->escape(need_wiki));
    };
    request("notes.getById", requestParameters);
};
/*************************************************************************/
void vkapi::notesGetComments (std::string note_id, std::string owner_id, std::string sort, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (note_id != "") {
        requestParameters += ("note_id=" + httpsObject->escape(note_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("notes.getComments", requestParameters);
};
/*************************************************************************/
void vkapi::notesRestoreComment (std::string comment_id, std::string owner_id) {
    std::string requestParameters = "?";
    if (comment_id != "") {
        requestParameters += ("comment_id=" + httpsObject->escape(comment_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };
    request("notes.restoreComment", requestParameters);
};
/*************************************************************************/
void vkapi::notesGetFriendsNotes (std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("notes.getFriendsNotes", requestParameters);
};
/*************************************************************************/
void vkapi::notificationsGet (std::string count, std::string start_from, std::string filters, std::string start_time, std::string end_time, std::string from, std::string offset) {
    std::string requestParameters = "?";
    if (count != "") {
        requestParameters += ("count=" + httpsObject->escape(count));
    };

    if (start_from != "") {
        requestParameters += ("&start_from=" + httpsObject->escape(start_from));
    };

    if (filters != "") {
        requestParameters += ("&filters=" + httpsObject->escape(filters));
    };

    if (start_time != "") {
        requestParameters += ("&start_time=" + httpsObject->escape(start_time));
    };

    if (end_time != "") {
        requestParameters += ("&end_time=" + httpsObject->escape(end_time));
    };

    if (from != "") {
        requestParameters += ("&from=" + httpsObject->escape(from));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };
    request("notifications.get", requestParameters);
};
/*************************************************************************/
void vkapi::notificationsMarkAsViewed () {
    request("notifications.markAsViewed");
};
/*************************************************************************/
void vkapi::pagesGet (std::string owner_id, std::string page_id, std::string global, std::string site_preview, std::string title, std::string need_source, std::string need_html) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (page_id != "") {
        requestParameters += ("&page_id=" + httpsObject->escape(page_id));
    };

    if (global != "") {
        requestParameters += ("&global=" + httpsObject->escape(global));
    };

    if (site_preview != "") {
        requestParameters += ("&site_preview=" + httpsObject->escape(site_preview));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (need_source != "") {
        requestParameters += ("&need_source=" + httpsObject->escape(need_source));
    };

    if (need_html != "") {
        requestParameters += ("&need_html=" + httpsObject->escape(need_html));
    };
    request("pages.get", requestParameters);
};
/*************************************************************************/
void vkapi::pagesClearCache (std::string url) {
    std::string requestParameters = "?";
    if (url != "") {
        requestParameters += ("url=" + httpsObject->escape(url));
    };
    request("pages.clearCache", requestParameters);
};
/*************************************************************************/
void vkapi::pagesGetHistory (std::string page_id, std::string group_id, std::string user_id) {
    std::string requestParameters = "?";
    if (page_id != "") {
        requestParameters += ("page_id=" + httpsObject->escape(page_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };
    request("pages.getHistory", requestParameters);
};
/*************************************************************************/
void vkapi::pagesGetVersion (std::string version_id, std::string group_id, std::string user_id, std::string need_html) {
    std::string requestParameters = "?";
    if (version_id != "") {
        requestParameters += ("version_id=" + httpsObject->escape(version_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (need_html != "") {
        requestParameters += ("&need_html=" + httpsObject->escape(need_html));
    };
    request("pages.getVersion", requestParameters);
};
/*************************************************************************/
void vkapi::pagesGetTitles (std::string group_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };
    request("pages.getTitles", requestParameters);
};
/*************************************************************************/
void vkapi::pagesParseWiki (std::string text, std::string group_id) {
    std::string requestParameters = "?";
    if (text != "") {
        requestParameters += ("text=" + httpsObject->escape(text));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };
    request("pages.parseWiki", requestParameters);
};
/*************************************************************************/
void vkapi::pagesSave (std::string text, std::string page_id, std::string group_id, std::string user_id, std::string title) {
    std::string requestParameters = "?";
    if (text != "") {
        requestParameters += ("text=" + httpsObject->escape(text));
    };

    if (page_id != "") {
        requestParameters += ("&page_id=" + httpsObject->escape(page_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };
    request("pages.save", requestParameters);
};
/*************************************************************************/
void vkapi::pagesSaveAccess (std::string page_id, std::string group_id, std::string user_id, std::string view, std::string edit) {
    std::string requestParameters = "?";
    if (page_id != "") {
        requestParameters += ("page_id=" + httpsObject->escape(page_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (view != "") {
        requestParameters += ("&view=" + httpsObject->escape(view));
    };

    if (edit != "") {
        requestParameters += ("&edit=" + httpsObject->escape(edit));
    };
    request("pages.saveAccess", requestParameters);
};
/*************************************************************************/
void vkapi::photosConfirmTag (std::string owner_id, std::string photo_id, std::string tag_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (tag_id != "") {
        requestParameters += ("&tag_id=" + httpsObject->escape(tag_id));
    };
    request("photos.confirmTag", requestParameters);
};
/*************************************************************************/
void vkapi::photosCopy (std::string owner_id, std::string photo_id, std::string access_key) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (access_key != "") {
        requestParameters += ("&access_key=" + httpsObject->escape(access_key));
    };
    request("photos.copy", requestParameters);
};
/*************************************************************************/
void vkapi::photosCreateAlbum (std::string title, std::string group_id, std::string description, std::string privacy_view, std::string privacy_comment, std::string upload_by_admins_only, std::string comments_disabled, std::string privacy, std::string comment_privacy) {
    std::string requestParameters = "?";
    if (title != "") {
        requestParameters += ("title=" + httpsObject->escape(title));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (description != "") {
        requestParameters += ("&description=" + httpsObject->escape(description));
    };

    if (privacy_view != "") {
        requestParameters += ("&privacy_view=" + httpsObject->escape(privacy_view));
    };

    if (privacy_comment != "") {
        requestParameters += ("&privacy_comment=" + httpsObject->escape(privacy_comment));
    };

    if (upload_by_admins_only != "") {
        requestParameters += ("&upload_by_admins_only=" + httpsObject->escape(upload_by_admins_only));
    };

    if (comments_disabled != "") {
        requestParameters += ("&comments_disabled=" + httpsObject->escape(comments_disabled));
    };

    if (privacy != "") {
        requestParameters += ("&privacy=" + httpsObject->escape(privacy));
    };

    if (comment_privacy != "") {
        requestParameters += ("&comment_privacy=" + httpsObject->escape(comment_privacy));
    };
    request("photos.createAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::photosCreateComment (std::string owner_id, std::string photo_id, std::string message, std::string attachments, std::string from_group, std::string reply_to_comment, std::string sticker_id, std::string access_key, std::string guid) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };

    if (from_group != "") {
        requestParameters += ("&from_group=" + httpsObject->escape(from_group));
    };

    if (reply_to_comment != "") {
        requestParameters += ("&reply_to_comment=" + httpsObject->escape(reply_to_comment));
    };

    if (sticker_id != "") {
        requestParameters += ("&sticker_id=" + httpsObject->escape(sticker_id));
    };

    if (access_key != "") {
        requestParameters += ("&access_key=" + httpsObject->escape(access_key));
    };

    if (guid != "") {
        requestParameters += ("&guid=" + httpsObject->escape(guid));
    };
    request("photos.createComment", requestParameters);
};
/*************************************************************************/
void vkapi::photosDeleteAlbum (std::string album_id, std::string group_id) {
    std::string requestParameters = "?";
    if (album_id != "") {
        requestParameters += ("album_id=" + httpsObject->escape(album_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };
    request("photos.deleteAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::photosDelete (std::string owner_id, std::string photo_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };
    request("photos.delete", requestParameters);
};
/*************************************************************************/
void vkapi::photosDeleteComment (std::string owner_id, std::string comment_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };
    request("photos.deleteComment", requestParameters);
};
/*************************************************************************/
void vkapi::photosEdit (std::string owner_id, std::string photo_id, std::string caption, std::string latitude, std::string longitude, std::string place_str, std::string foursquare_id, std::string delete_place) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (caption != "") {
        requestParameters += ("&caption=" + httpsObject->escape(caption));
    };

    if (latitude != "") {
        requestParameters += ("&latitude=" + httpsObject->escape(latitude));
    };

    if (longitude != "") {
        requestParameters += ("&longitude=" + httpsObject->escape(longitude));
    };

    if (place_str != "") {
        requestParameters += ("&place_str=" + httpsObject->escape(place_str));
    };

    if (foursquare_id != "") {
        requestParameters += ("&foursquare_id=" + httpsObject->escape(foursquare_id));
    };

    if (delete_place != "") {
        requestParameters += ("&delete_place=" + httpsObject->escape(delete_place));
    };
    request("photos.edit", requestParameters);
};
/*************************************************************************/
void vkapi::photosEditComment (std::string owner_id, std::string comment_id, std::string message, std::string attachments) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };
    request("photos.editComment", requestParameters);
};
/*************************************************************************/
void vkapi::photosEditAlbum (std::string album_id, std::string title, std::string description, std::string owner_id, std::string privacy_view, std::string privacy_comment, std::string upload_by_admins_only, std::string comments_disabled, std::string privacy, std::string comment_privacy) {
    std::string requestParameters = "?";
    if (album_id != "") {
        requestParameters += ("album_id=" + httpsObject->escape(album_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (description != "") {
        requestParameters += ("&description=" + httpsObject->escape(description));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (privacy_view != "") {
        requestParameters += ("&privacy_view=" + httpsObject->escape(privacy_view));
    };

    if (privacy_comment != "") {
        requestParameters += ("&privacy_comment=" + httpsObject->escape(privacy_comment));
    };

    if (upload_by_admins_only != "") {
        requestParameters += ("&upload_by_admins_only=" + httpsObject->escape(upload_by_admins_only));
    };

    if (comments_disabled != "") {
        requestParameters += ("&comments_disabled=" + httpsObject->escape(comments_disabled));
    };

    if (privacy != "") {
        requestParameters += ("&privacy=" + httpsObject->escape(privacy));
    };

    if (comment_privacy != "") {
        requestParameters += ("&comment_privacy=" + httpsObject->escape(comment_privacy));
    };
    request("photos.editAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::photosGet (std::string owner_id, std::string album_id, std::string photo_ids, std::string rev, std::string extended, std::string feed_type, std::string feed, std::string photo_sizes, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (photo_ids != "") {
        requestParameters += ("&photo_ids=" + httpsObject->escape(photo_ids));
    };

    if (rev != "") {
        requestParameters += ("&rev=" + httpsObject->escape(rev));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (feed_type != "") {
        requestParameters += ("&feed_type=" + httpsObject->escape(feed_type));
    };

    if (feed != "") {
        requestParameters += ("&feed=" + httpsObject->escape(feed));
    };

    if (photo_sizes != "") {
        requestParameters += ("&photo_sizes=" + httpsObject->escape(photo_sizes));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("photos.get", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetAlbums (std::string owner_id, std::string album_ids, std::string offset, std::string count, std::string need_system, std::string need_covers, std::string photo_sizes) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (album_ids != "") {
        requestParameters += ("&album_ids=" + httpsObject->escape(album_ids));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (need_system != "") {
        requestParameters += ("&need_system=" + httpsObject->escape(need_system));
    };

    if (need_covers != "") {
        requestParameters += ("&need_covers=" + httpsObject->escape(need_covers));
    };

    if (photo_sizes != "") {
        requestParameters += ("&photo_sizes=" + httpsObject->escape(photo_sizes));
    };
    request("photos.getAlbums", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetAlbumsCount (std::string user_id, std::string group_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };
    request("photos.getAlbumsCount", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetAll (std::string owner_id, std::string extended, std::string offset, std::string count, std::string photo_sizes, std::string no_service_albums, std::string need_hidden, std::string skip_hidden) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (photo_sizes != "") {
        requestParameters += ("&photo_sizes=" + httpsObject->escape(photo_sizes));
    };

    if (no_service_albums != "") {
        requestParameters += ("&no_service_albums=" + httpsObject->escape(no_service_albums));
    };

    if (need_hidden != "") {
        requestParameters += ("&need_hidden=" + httpsObject->escape(need_hidden));
    };

    if (skip_hidden != "") {
        requestParameters += ("&skip_hidden=" + httpsObject->escape(skip_hidden));
    };
    request("photos.getAll", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetAllComments (std::string owner_id, std::string album_id, std::string need_likes, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (need_likes != "") {
        requestParameters += ("&need_likes=" + httpsObject->escape(need_likes));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("photos.getAllComments", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetById (std::string photos, std::string extended, std::string photo_sizes) {
    std::string requestParameters = "?";
    if (photos != "") {
        requestParameters += ("photos=" + httpsObject->escape(photos));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (photo_sizes != "") {
        requestParameters += ("&photo_sizes=" + httpsObject->escape(photo_sizes));
    };
    request("photos.getById", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetChatUploadServer (std::string chat_id, std::string crop_x, std::string crop_y, std::string crop_width) {
    std::string requestParameters = "?";
    if (chat_id != "") {
        requestParameters += ("chat_id=" + httpsObject->escape(chat_id));
    };

    if (crop_x != "") {
        requestParameters += ("&crop_x=" + httpsObject->escape(crop_x));
    };

    if (crop_y != "") {
        requestParameters += ("&crop_y=" + httpsObject->escape(crop_y));
    };

    if (crop_width != "") {
        requestParameters += ("&crop_width=" + httpsObject->escape(crop_width));
    };
    request("photos.getChatUploadServer", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetComments (std::string owner_id, std::string photo_id, std::string need_likes, std::string start_comment_id, std::string offset, std::string count, std::string sort, std::string access_key, std::string extended, std::string fields, std::string skip_before_id, std::string skip_after_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (need_likes != "") {
        requestParameters += ("&need_likes=" + httpsObject->escape(need_likes));
    };

    if (start_comment_id != "") {
        requestParameters += ("&start_comment_id=" + httpsObject->escape(start_comment_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (access_key != "") {
        requestParameters += ("&access_key=" + httpsObject->escape(access_key));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (skip_before_id != "") {
        requestParameters += ("&skip_before_id=" + httpsObject->escape(skip_before_id));
    };

    if (skip_after_id != "") {
        requestParameters += ("&skip_after_id=" + httpsObject->escape(skip_after_id));
    };
    request("photos.getComments", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetNewTags (std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("photos.getNewTags", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetMessagesUploadServer () {
    request("photos.getMessagesUploadServer");
};
/*************************************************************************/
void vkapi::photosGetOwnerPhotoUploadServer (std::string owner_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };
    request("photos.getOwnerPhotoUploadServer", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetTags (std::string owner_id, std::string photo_id, std::string access_key) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (access_key != "") {
        requestParameters += ("&access_key=" + httpsObject->escape(access_key));
    };
    request("photos.getTags", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetUploadServer (std::string album_id, std::string group_id) {
    std::string requestParameters = "?";
    if (album_id != "") {
        requestParameters += ("album_id=" + httpsObject->escape(album_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };
    request("photos.getUploadServer", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetWallUploadServer (std::string group_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };
    request("photos.getWallUploadServer", requestParameters);
};
/*************************************************************************/
void vkapi::photosGetUserPhotos (std::string user_id, std::string offset, std::string count, std::string extended, std::string sort) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };
    request("photos.getUserPhotos", requestParameters);
};
/*************************************************************************/
void vkapi::photosMakeCover (std::string owner_id, std::string photo_id, std::string album_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };
    request("photos.makeCover", requestParameters);
};
/*************************************************************************/
void vkapi::photosMove (std::string owner_id, std::string target_album_id, std::string photo_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (target_album_id != "") {
        requestParameters += ("&target_album_id=" + httpsObject->escape(target_album_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };
    request("photos.move", requestParameters);
};
/*************************************************************************/
void vkapi::photosRemoveTag (std::string owner_id, std::string photo_id, std::string tag_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (tag_id != "") {
        requestParameters += ("&tag_id=" + httpsObject->escape(tag_id));
    };
    request("photos.removeTag", requestParameters);
};
/*************************************************************************/
void vkapi::photosReorderPhotos (std::string owner_id, std::string photo_id, std::string before, std::string after) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (before != "") {
        requestParameters += ("&before=" + httpsObject->escape(before));
    };

    if (after != "") {
        requestParameters += ("&after=" + httpsObject->escape(after));
    };
    request("photos.reorderPhotos", requestParameters);
};
/*************************************************************************/
void vkapi::photosReorderAlbums (std::string owner_id, std::string album_id, std::string before, std::string after) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (before != "") {
        requestParameters += ("&before=" + httpsObject->escape(before));
    };

    if (after != "") {
        requestParameters += ("&after=" + httpsObject->escape(after));
    };
    request("photos.reorderAlbums", requestParameters);
};
/*************************************************************************/
void vkapi::photosPutTag (std::string owner_id, std::string photo_id, std::string user_id, std::string x, std::string y) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (x != "") {
        requestParameters += ("&x=" + httpsObject->escape(x));
    };

    if (y != "") {
        requestParameters += ("&y=" + httpsObject->escape(y));
    };
    request("photos.putTag", requestParameters);
};
/*************************************************************************/
void vkapi::photosReport (std::string owner_id, std::string photo_id, std::string reason) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };

    if (reason != "") {
        requestParameters += ("&reason=" + httpsObject->escape(reason));
    };
    request("photos.report", requestParameters);
};
/*************************************************************************/
void vkapi::photosRestore (std::string owner_id, std::string photo_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (photo_id != "") {
        requestParameters += ("&photo_id=" + httpsObject->escape(photo_id));
    };
    request("photos.restore", requestParameters);
};
/*************************************************************************/
void vkapi::photosReportComment (std::string owner_id, std::string comment_id, std::string reason) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };

    if (reason != "") {
        requestParameters += ("&reason=" + httpsObject->escape(reason));
    };
    request("photos.reportComment", requestParameters);
};
/*************************************************************************/
void vkapi::photosRestoreComment (std::string owner_id, std::string comment_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };
    request("photos.restoreComment", requestParameters);
};
/*************************************************************************/
void vkapi::photosSave (std::string album_id, std::string group_id, std::string server, std::string photos_list, std::string hash, std::string latitude, std::string longitude, std::string caption) {
    std::string requestParameters = "?";
    if (album_id != "") {
        requestParameters += ("album_id=" + httpsObject->escape(album_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (server != "") {
        requestParameters += ("&server=" + httpsObject->escape(server));
    };

    if (photos_list != "") {
        requestParameters += ("&photos_list=" + httpsObject->escape(photos_list));
    };

    if (hash != "") {
        requestParameters += ("&hash=" + httpsObject->escape(hash));
    };

    if (latitude != "") {
        requestParameters += ("&latitude=" + httpsObject->escape(latitude));
    };

    if (longitude != "") {
        requestParameters += ("&longitude=" + httpsObject->escape(longitude));
    };

    if (caption != "") {
        requestParameters += ("&caption=" + httpsObject->escape(caption));
    };
    request("photos.save", requestParameters);
};
/*************************************************************************/
void vkapi::photosSaveMessagesPhoto (std::string photo) {
    std::string requestParameters = "?";
    if (photo != "") {
        requestParameters += ("photo=" + httpsObject->escape(photo));
    };
    request("photos.saveMessagesPhoto", requestParameters);
};
/*************************************************************************/
void vkapi::photosSaveOwnerPhoto (std::string server, std::string hash, std::string photo) {
    std::string requestParameters = "?";
    if (server != "") {
        requestParameters += ("server=" + httpsObject->escape(server));
    };

    if (hash != "") {
        requestParameters += ("&hash=" + httpsObject->escape(hash));
    };

    if (photo != "") {
        requestParameters += ("&photo=" + httpsObject->escape(photo));
    };
    request("photos.saveOwnerPhoto", requestParameters);
};
/*************************************************************************/
void vkapi::photosSaveWallPhoto (std::string user_id, std::string group_id, std::string photo, std::string server, std::string hash) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (photo != "") {
        requestParameters += ("&photo=" + httpsObject->escape(photo));
    };

    if (server != "") {
        requestParameters += ("&server=" + httpsObject->escape(server));
    };

    if (hash != "") {
        requestParameters += ("&hash=" + httpsObject->escape(hash));
    };
    request("photos.saveWallPhoto", requestParameters);
};
/*************************************************************************/
void vkapi::placesAdd (std::string type, std::string title, std::string latitude, std::string longitude, std::string country, std::string city, std::string address) {
    std::string requestParameters = "?";
    if (type != "") {
        requestParameters += ("type=" + httpsObject->escape(type));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (latitude != "") {
        requestParameters += ("&latitude=" + httpsObject->escape(latitude));
    };

    if (longitude != "") {
        requestParameters += ("&longitude=" + httpsObject->escape(longitude));
    };

    if (country != "") {
        requestParameters += ("&country=" + httpsObject->escape(country));
    };

    if (city != "") {
        requestParameters += ("&city=" + httpsObject->escape(city));
    };

    if (address != "") {
        requestParameters += ("&address=" + httpsObject->escape(address));
    };
    request("places.add", requestParameters);
};
/*************************************************************************/
void vkapi::photosSearch (std::string q, std::string lat, std::string long_, std::string start_time, std::string end_time, std::string sort, std::string offset, std::string count, std::string radius) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (lat != "") {
        requestParameters += ("&lat=" + httpsObject->escape(lat));
    };

    if (long_ != "") {
        requestParameters += ("&long=" + httpsObject->escape(long_));
    };

    if (start_time != "") {
        requestParameters += ("&start_time=" + httpsObject->escape(start_time));
    };

    if (end_time != "") {
        requestParameters += ("&end_time=" + httpsObject->escape(end_time));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (radius != "") {
        requestParameters += ("&radius=" + httpsObject->escape(radius));
    };
    request("photos.search", requestParameters);
};
/*************************************************************************/
void vkapi::placesCheckin (std::string place_id, std::string text, std::string latitude, std::string longitude, std::string friends_only, std::string services) {
    std::string requestParameters = "?";
    if (place_id != "") {
        requestParameters += ("place_id=" + httpsObject->escape(place_id));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (latitude != "") {
        requestParameters += ("&latitude=" + httpsObject->escape(latitude));
    };

    if (longitude != "") {
        requestParameters += ("&longitude=" + httpsObject->escape(longitude));
    };

    if (friends_only != "") {
        requestParameters += ("&friends_only=" + httpsObject->escape(friends_only));
    };

    if (services != "") {
        requestParameters += ("&services=" + httpsObject->escape(services));
    };
    request("places.checkin", requestParameters);
};
/*************************************************************************/
void vkapi::placesGetById (std::string places) {
    std::string requestParameters = "?";
    if (places != "") {
        requestParameters += ("places=" + httpsObject->escape(places));
    };
    request("places.getById", requestParameters);
};
/*************************************************************************/
void vkapi::placesGetCheckins (std::string latitude, std::string longitude, std::string place, std::string user_id, std::string offset, std::string count, std::string timestamp, std::string friends_only, std::string need_places) {
    std::string requestParameters = "?";
    if (latitude != "") {
        requestParameters += ("latitude=" + httpsObject->escape(latitude));
    };

    if (longitude != "") {
        requestParameters += ("&longitude=" + httpsObject->escape(longitude));
    };

    if (place != "") {
        requestParameters += ("&place=" + httpsObject->escape(place));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (timestamp != "") {
        requestParameters += ("&timestamp=" + httpsObject->escape(timestamp));
    };

    if (friends_only != "") {
        requestParameters += ("&friends_only=" + httpsObject->escape(friends_only));
    };

    if (need_places != "") {
        requestParameters += ("&need_places=" + httpsObject->escape(need_places));
    };
    request("places.getCheckins", requestParameters);
};
/*************************************************************************/
void vkapi::placesGetTypes () {
    request("places.getTypes");
};
/*************************************************************************/
void vkapi::placesSearch (std::string q, std::string city, std::string latitude, std::string longitude, std::string radius, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (city != "") {
        requestParameters += ("&city=" + httpsObject->escape(city));
    };

    if (latitude != "") {
        requestParameters += ("&latitude=" + httpsObject->escape(latitude));
    };

    if (longitude != "") {
        requestParameters += ("&longitude=" + httpsObject->escape(longitude));
    };

    if (radius != "") {
        requestParameters += ("&radius=" + httpsObject->escape(radius));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("places.search", requestParameters);
};
/*************************************************************************/
void vkapi::pollsAddVote (std::string owner_id, std::string poll_id, std::string answer_id, std::string is_board) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (poll_id != "") {
        requestParameters += ("&poll_id=" + httpsObject->escape(poll_id));
    };

    if (answer_id != "") {
        requestParameters += ("&answer_id=" + httpsObject->escape(answer_id));
    };

    if (is_board != "") {
        requestParameters += ("&is_board=" + httpsObject->escape(is_board));
    };
    request("polls.addVote", requestParameters);
};
/*************************************************************************/
void vkapi::pollsCreate (std::string question, std::string is_anonymous, std::string owner_id, std::string add_answers) {
    std::string requestParameters = "?";
    if (question != "") {
        requestParameters += ("question=" + httpsObject->escape(question));
    };

    if (is_anonymous != "") {
        requestParameters += ("&is_anonymous=" + httpsObject->escape(is_anonymous));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (add_answers != "") {
        requestParameters += ("&add_answers=" + httpsObject->escape(add_answers));
    };
    request("polls.create", requestParameters);
};
/*************************************************************************/
void vkapi::pollsDeleteVote (std::string owner_id, std::string poll_id, std::string answer_id, std::string is_board) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (poll_id != "") {
        requestParameters += ("&poll_id=" + httpsObject->escape(poll_id));
    };

    if (answer_id != "") {
        requestParameters += ("&answer_id=" + httpsObject->escape(answer_id));
    };

    if (is_board != "") {
        requestParameters += ("&is_board=" + httpsObject->escape(is_board));
    };
    request("polls.deleteVote", requestParameters);
};
/*************************************************************************/
void vkapi::pollsEdit (std::string owner_id, std::string poll_id, std::string question, std::string add_answers, std::string edit_answers, std::string delete_answers) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (poll_id != "") {
        requestParameters += ("&poll_id=" + httpsObject->escape(poll_id));
    };

    if (question != "") {
        requestParameters += ("&question=" + httpsObject->escape(question));
    };

    if (add_answers != "") {
        requestParameters += ("&add_answers=" + httpsObject->escape(add_answers));
    };

    if (edit_answers != "") {
        requestParameters += ("&edit_answers=" + httpsObject->escape(edit_answers));
    };

    if (delete_answers != "") {
        requestParameters += ("&delete_answers=" + httpsObject->escape(delete_answers));
    };
    request("polls.edit", requestParameters);
};
/*************************************************************************/
void vkapi::pollsGetById (std::string owner_id, std::string is_board, std::string poll_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (is_board != "") {
        requestParameters += ("&is_board=" + httpsObject->escape(is_board));
    };

    if (poll_id != "") {
        requestParameters += ("&poll_id=" + httpsObject->escape(poll_id));
    };
    request("polls.getById", requestParameters);
};
/*************************************************************************/
void vkapi::pollsGetVoters (std::string owner_id, std::string poll_id, std::string answer_ids, std::string is_board, std::string friends_only, std::string offset, std::string count, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (poll_id != "") {
        requestParameters += ("&poll_id=" + httpsObject->escape(poll_id));
    };

    if (answer_ids != "") {
        requestParameters += ("&answer_ids=" + httpsObject->escape(answer_ids));
    };

    if (is_board != "") {
        requestParameters += ("&is_board=" + httpsObject->escape(is_board));
    };

    if (friends_only != "") {
        requestParameters += ("&friends_only=" + httpsObject->escape(friends_only));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("polls.getVoters", requestParameters);
};
/*************************************************************************/
void vkapi::statsGet (std::string group_id, std::string app_id, std::string date_from, std::string date_to) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (app_id != "") {
        requestParameters += ("&app_id=" + httpsObject->escape(app_id));
    };

    if (date_from != "") {
        requestParameters += ("&date_from=" + httpsObject->escape(date_from));
    };

    if (date_to != "") {
        requestParameters += ("&date_to=" + httpsObject->escape(date_to));
    };
    request("stats.get", requestParameters);
};
/*************************************************************************/
void vkapi::searchGetHints (std::string q, std::string limit, std::string filters, std::string search_global) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (limit != "") {
        requestParameters += ("&limit=" + httpsObject->escape(limit));
    };

    if (filters != "") {
        requestParameters += ("&filters=" + httpsObject->escape(filters));
    };

    if (search_global != "") {
        requestParameters += ("&search_global=" + httpsObject->escape(search_global));
    };
    request("search.getHints", requestParameters);
};
/*************************************************************************/
void vkapi::statsGetPostReach (std::string owner_id, std::string post_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };
    request("stats.getPostReach", requestParameters);
};
/*************************************************************************/
void vkapi::statusGet (std::string user_id, std::string group_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };
    request("status.get", requestParameters);
};
/*************************************************************************/
void vkapi::statsTrackVisitor () {
    request("stats.trackVisitor");
};
/*************************************************************************/
void vkapi::storageGet (std::string key, std::string keys, std::string user_id, std::string global) {
    std::string requestParameters = "?";
    if (key != "") {
        requestParameters += ("key=" + httpsObject->escape(key));
    };

    if (keys != "") {
        requestParameters += ("&keys=" + httpsObject->escape(keys));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (global != "") {
        requestParameters += ("&global=" + httpsObject->escape(global));
    };
    request("storage.get", requestParameters);
};
/*************************************************************************/
void vkapi::statusSet (std::string text, std::string group_id) {
    std::string requestParameters = "?";
    if (text != "") {
        requestParameters += ("text=" + httpsObject->escape(text));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };
    request("status.set", requestParameters);
};
/*************************************************************************/
void vkapi::storageGetKeys (std::string user_id, std::string global, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (global != "") {
        requestParameters += ("&global=" + httpsObject->escape(global));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("storage.getKeys", requestParameters);
};
/*************************************************************************/
void vkapi::usersGet (std::string user_ids, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (user_ids != "") {
        requestParameters += ("user_ids=" + httpsObject->escape(user_ids));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("users.get", requestParameters);
};
/*************************************************************************/
void vkapi::storageSet (std::string key, std::string value, std::string user_id, std::string global) {
    std::string requestParameters = "?";
    if (key != "") {
        requestParameters += ("key=" + httpsObject->escape(key));
    };

    if (value != "") {
        requestParameters += ("&value=" + httpsObject->escape(value));
    };

    if (user_id != "") {
        requestParameters += ("&user_id=" + httpsObject->escape(user_id));
    };

    if (global != "") {
        requestParameters += ("&global=" + httpsObject->escape(global));
    };
    request("storage.set", requestParameters);
};
/*************************************************************************/
void vkapi::usersGetNearby (std::string latitude, std::string longitude, std::string accuracy, std::string timeout, std::string radius, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (latitude != "") {
        requestParameters += ("latitude=" + httpsObject->escape(latitude));
    };

    if (longitude != "") {
        requestParameters += ("&longitude=" + httpsObject->escape(longitude));
    };

    if (accuracy != "") {
        requestParameters += ("&accuracy=" + httpsObject->escape(accuracy));
    };

    if (timeout != "") {
        requestParameters += ("&timeout=" + httpsObject->escape(timeout));
    };

    if (radius != "") {
        requestParameters += ("&radius=" + httpsObject->escape(radius));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("users.getNearby", requestParameters);
};
/*************************************************************************/
void vkapi::usersGetFollowers (std::string user_id, std::string offset, std::string count, std::string fields, std::string name_case) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (name_case != "") {
        requestParameters += ("&name_case=" + httpsObject->escape(name_case));
    };
    request("users.getFollowers", requestParameters);
};
/*************************************************************************/
void vkapi::usersIsAppUser (std::string user_id) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };
    request("users.isAppUser", requestParameters);
};
/*************************************************************************/
void vkapi::usersReport (std::string user_id, std::string type, std::string comment) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (type != "") {
        requestParameters += ("&type=" + httpsObject->escape(type));
    };

    if (comment != "") {
        requestParameters += ("&comment=" + httpsObject->escape(comment));
    };
    request("users.report", requestParameters);
};
/*************************************************************************/
void vkapi::usersSearch (std::string q, std::string sort, std::string offset, std::string count, std::string fields, std::string city, std::string country, std::string hometown, std::string university_country, std::string university, std::string university_year, std::string university_faculty, std::string university_chair, std::string sex, std::string status, std::string age_from, std::string age_to, std::string birth_day, std::string birth_month, std::string birth_year, std::string online, std::string has_photo, std::string school_country, std::string school_city, std::string school_class, std::string school, std::string school_year, std::string religion, std::string interests, std::string company, std::string position, std::string group_id, std::string from_list) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (city != "") {
        requestParameters += ("&city=" + httpsObject->escape(city));
    };

    if (country != "") {
        requestParameters += ("&country=" + httpsObject->escape(country));
    };

    if (hometown != "") {
        requestParameters += ("&hometown=" + httpsObject->escape(hometown));
    };

    if (university_country != "") {
        requestParameters += ("&university_country=" + httpsObject->escape(university_country));
    };

    if (university != "") {
        requestParameters += ("&university=" + httpsObject->escape(university));
    };

    if (university_year != "") {
        requestParameters += ("&university_year=" + httpsObject->escape(university_year));
    };

    if (university_faculty != "") {
        requestParameters += ("&university_faculty=" + httpsObject->escape(university_faculty));
    };

    if (university_chair != "") {
        requestParameters += ("&university_chair=" + httpsObject->escape(university_chair));
    };

    if (sex != "") {
        requestParameters += ("&sex=" + httpsObject->escape(sex));
    };

    if (status != "") {
        requestParameters += ("&status=" + httpsObject->escape(status));
    };

    if (age_from != "") {
        requestParameters += ("&age_from=" + httpsObject->escape(age_from));
    };

    if (age_to != "") {
        requestParameters += ("&age_to=" + httpsObject->escape(age_to));
    };

    if (birth_day != "") {
        requestParameters += ("&birth_day=" + httpsObject->escape(birth_day));
    };

    if (birth_month != "") {
        requestParameters += ("&birth_month=" + httpsObject->escape(birth_month));
    };

    if (birth_year != "") {
        requestParameters += ("&birth_year=" + httpsObject->escape(birth_year));
    };

    if (online != "") {
        requestParameters += ("&online=" + httpsObject->escape(online));
    };

    if (has_photo != "") {
        requestParameters += ("&has_photo=" + httpsObject->escape(has_photo));
    };

    if (school_country != "") {
        requestParameters += ("&school_country=" + httpsObject->escape(school_country));
    };

    if (school_city != "") {
        requestParameters += ("&school_city=" + httpsObject->escape(school_city));
    };

    if (school_class != "") {
        requestParameters += ("&school_class=" + httpsObject->escape(school_class));
    };

    if (school != "") {
        requestParameters += ("&school=" + httpsObject->escape(school));
    };

    if (school_year != "") {
        requestParameters += ("&school_year=" + httpsObject->escape(school_year));
    };

    if (religion != "") {
        requestParameters += ("&religion=" + httpsObject->escape(religion));
    };

    if (interests != "") {
        requestParameters += ("&interests=" + httpsObject->escape(interests));
    };

    if (company != "") {
        requestParameters += ("&company=" + httpsObject->escape(company));
    };

    if (position != "") {
        requestParameters += ("&position=" + httpsObject->escape(position));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (from_list != "") {
        requestParameters += ("&from_list=" + httpsObject->escape(from_list));
    };
    request("users.search", requestParameters);
};
/*************************************************************************/
void vkapi::utilsCheckLink (std::string url) {
    std::string requestParameters = "?";
    if (url != "") {
        requestParameters += ("url=" + httpsObject->escape(url));
    };
    request("utils.checkLink", requestParameters);
};
/*************************************************************************/
void vkapi::usersGetSubscriptions (std::string user_id, std::string extended, std::string offset, std::string count, std::string fields) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("users.getSubscriptions", requestParameters);
};
/*************************************************************************/
void vkapi::utilsGetServerTime () {
    request("utils.getServerTime");
};
/*************************************************************************/
void vkapi::utilsResolveScreenName (std::string screen_name) {
    std::string requestParameters = "?";
    if (screen_name != "") {
        requestParameters += ("screen_name=" + httpsObject->escape(screen_name));
    };
    request("utils.resolveScreenName", requestParameters);
};
/*************************************************************************/
void vkapi::videoAdd (std::string target_id, std::string video_id, std::string owner_id) {
    std::string requestParameters = "?";
    if (target_id != "") {
        requestParameters += ("target_id=" + httpsObject->escape(target_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };
    request("video.add", requestParameters);
};
/*************************************************************************/
void vkapi::videoAddAlbum (std::string group_id, std::string title, std::string privacy) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (privacy != "") {
        requestParameters += ("&privacy=" + httpsObject->escape(privacy));
    };
    request("video.addAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::videoAddToAlbum (std::string target_id, std::string album_id, std::string album_ids, std::string owner_id, std::string video_id) {
    std::string requestParameters = "?";
    if (target_id != "") {
        requestParameters += ("target_id=" + httpsObject->escape(target_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (album_ids != "") {
        requestParameters += ("&album_ids=" + httpsObject->escape(album_ids));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };
    request("video.addToAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::videoDelete (std::string video_id, std::string owner_id, std::string target_id) {
    std::string requestParameters = "?";
    if (video_id != "") {
        requestParameters += ("video_id=" + httpsObject->escape(video_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (target_id != "") {
        requestParameters += ("&target_id=" + httpsObject->escape(target_id));
    };
    request("video.delete", requestParameters);
};
/*************************************************************************/
void vkapi::videoDeleteAlbum (std::string group_id, std::string album_id) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };
    request("video.deleteAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::videoCreateComment (std::string owner_id, std::string video_id, std::string message, std::string attachments, std::string from_group, std::string reply_to_comment, std::string sticker_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };

    if (from_group != "") {
        requestParameters += ("&from_group=" + httpsObject->escape(from_group));
    };

    if (reply_to_comment != "") {
        requestParameters += ("&reply_to_comment=" + httpsObject->escape(reply_to_comment));
    };

    if (sticker_id != "") {
        requestParameters += ("&sticker_id=" + httpsObject->escape(sticker_id));
    };
    request("video.createComment", requestParameters);
};
/*************************************************************************/
void vkapi::videoDeleteComment (std::string owner_id, std::string comment_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };
    request("video.deleteComment", requestParameters);
};
/*************************************************************************/
void vkapi::videoEditAlbum (std::string group_id, std::string album_id, std::string title, std::string privacy) {
    std::string requestParameters = "?";
    if (group_id != "") {
        requestParameters += ("group_id=" + httpsObject->escape(group_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (title != "") {
        requestParameters += ("&title=" + httpsObject->escape(title));
    };

    if (privacy != "") {
        requestParameters += ("&privacy=" + httpsObject->escape(privacy));
    };
    request("video.editAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::videoEdit (std::string owner_id, std::string video_id, std::string name, std::string desc, std::string privacy_view, std::string privacy_comment, std::string no_comments, std::string repeat) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };

    if (name != "") {
        requestParameters += ("&name=" + httpsObject->escape(name));
    };

    if (desc != "") {
        requestParameters += ("&desc=" + httpsObject->escape(desc));
    };

    if (privacy_view != "") {
        requestParameters += ("&privacy_view=" + httpsObject->escape(privacy_view));
    };

    if (privacy_comment != "") {
        requestParameters += ("&privacy_comment=" + httpsObject->escape(privacy_comment));
    };

    if (no_comments != "") {
        requestParameters += ("&no_comments=" + httpsObject->escape(no_comments));
    };

    if (repeat != "") {
        requestParameters += ("&repeat=" + httpsObject->escape(repeat));
    };
    request("video.edit", requestParameters);
};
/*************************************************************************/
void vkapi::videoEditComment (std::string owner_id, std::string comment_id, std::string message, std::string attachments) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };
    request("video.editComment", requestParameters);
};
/*************************************************************************/
void vkapi::videoGetAlbumById (std::string owner_id, std::string album_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };
    request("video.getAlbumById", requestParameters);
};
/*************************************************************************/
void vkapi::videoGetAlbums (std::string owner_id, std::string offset, std::string count, std::string extended, std::string need_system) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (need_system != "") {
        requestParameters += ("&need_system=" + httpsObject->escape(need_system));
    };
    request("video.getAlbums", requestParameters);
};
/*************************************************************************/
void vkapi::videoGetComments (std::string owner_id, std::string video_id, std::string need_likes, std::string start_comment_id, std::string offset, std::string count, std::string sort, std::string extended) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };

    if (need_likes != "") {
        requestParameters += ("&need_likes=" + httpsObject->escape(need_likes));
    };

    if (start_comment_id != "") {
        requestParameters += ("&start_comment_id=" + httpsObject->escape(start_comment_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("video.getComments", requestParameters);
};
/*************************************************************************/
void vkapi::videoGet (std::string owner_id, std::string videos, std::string album_id, std::string count, std::string offset, std::string extended) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (videos != "") {
        requestParameters += ("&videos=" + httpsObject->escape(videos));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("video.get", requestParameters);
};
/*************************************************************************/
void vkapi::videoGetAlbumsByVideo (std::string target_id, std::string owner_id, std::string video_id, std::string extended) {
    std::string requestParameters = "?";
    if (target_id != "") {
        requestParameters += ("target_id=" + httpsObject->escape(target_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("video.getAlbumsByVideo", requestParameters);
};
/*************************************************************************/
void vkapi::videoGetNewTags (std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (offset != "") {
        requestParameters += ("offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("video.getNewTags", requestParameters);
};
/*************************************************************************/
void vkapi::videoGetTags (std::string owner_id, std::string video_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };
    request("video.getTags", requestParameters);
};
/*************************************************************************/
void vkapi::videoGetUserVideos (std::string user_id, std::string offset, std::string count, std::string extended) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("video.getUserVideos", requestParameters);
};
/*************************************************************************/
void vkapi::videoPutTag (std::string user_id, std::string owner_id, std::string video_id, std::string tagged_name) {
    std::string requestParameters = "?";
    if (user_id != "") {
        requestParameters += ("user_id=" + httpsObject->escape(user_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };

    if (tagged_name != "") {
        requestParameters += ("&tagged_name=" + httpsObject->escape(tagged_name));
    };
    request("video.putTag", requestParameters);
};
/*************************************************************************/
void vkapi::videoRemoveFromAlbum (std::string target_id, std::string album_id, std::string album_ids, std::string owner_id, std::string video_id) {
    std::string requestParameters = "?";
    if (target_id != "") {
        requestParameters += ("target_id=" + httpsObject->escape(target_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (album_ids != "") {
        requestParameters += ("&album_ids=" + httpsObject->escape(album_ids));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };
    request("video.removeFromAlbum", requestParameters);
};
/*************************************************************************/
void vkapi::videoRemoveTag (std::string tag_id, std::string owner_id, std::string video_id) {
    std::string requestParameters = "?";
    if (tag_id != "") {
        requestParameters += ("tag_id=" + httpsObject->escape(tag_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };
    request("video.removeTag", requestParameters);
};
/*************************************************************************/
void vkapi::videoReorderAlbums (std::string owner_id, std::string album_id, std::string before, std::string after) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (before != "") {
        requestParameters += ("&before=" + httpsObject->escape(before));
    };

    if (after != "") {
        requestParameters += ("&after=" + httpsObject->escape(after));
    };
    request("video.reorderAlbums", requestParameters);
};
/*************************************************************************/
void vkapi::videoReport (std::string owner_id, std::string video_id, std::string reason, std::string comment, std::string search_query) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (video_id != "") {
        requestParameters += ("&video_id=" + httpsObject->escape(video_id));
    };

    if (reason != "") {
        requestParameters += ("&reason=" + httpsObject->escape(reason));
    };

    if (comment != "") {
        requestParameters += ("&comment=" + httpsObject->escape(comment));
    };

    if (search_query != "") {
        requestParameters += ("&search_query=" + httpsObject->escape(search_query));
    };
    request("video.report", requestParameters);
};
/*************************************************************************/
void vkapi::videoRestore (std::string video_id, std::string owner_id) {
    std::string requestParameters = "?";
    if (video_id != "") {
        requestParameters += ("video_id=" + httpsObject->escape(video_id));
    };

    if (owner_id != "") {
        requestParameters += ("&owner_id=" + httpsObject->escape(owner_id));
    };
    request("video.restore", requestParameters);
};
/*************************************************************************/
void vkapi::videoReportComment (std::string owner_id, std::string comment_id, std::string reason) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };

    if (reason != "") {
        requestParameters += ("&reason=" + httpsObject->escape(reason));
    };
    request("video.reportComment", requestParameters);
};
/*************************************************************************/
void vkapi::videoRestoreComment (std::string owner_id, std::string comment_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };
    request("video.restoreComment", requestParameters);
};
/*************************************************************************/
void vkapi::videoSave (std::string name, std::string description, std::string is_private, std::string wallpost, std::string link, std::string group_id, std::string album_id, std::string privacy_view, std::string privacy_comment, std::string no_comments, std::string repeat) {
    std::string requestParameters = "?";
    if (name != "") {
        requestParameters += ("name=" + httpsObject->escape(name));
    };

    if (description != "") {
        requestParameters += ("&description=" + httpsObject->escape(description));
    };

    if (is_private != "") {
        requestParameters += ("&is_private=" + httpsObject->escape(is_private));
    };

    if (wallpost != "") {
        requestParameters += ("&wallpost=" + httpsObject->escape(wallpost));
    };

    if (link != "") {
        requestParameters += ("&link=" + httpsObject->escape(link));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (album_id != "") {
        requestParameters += ("&album_id=" + httpsObject->escape(album_id));
    };

    if (privacy_view != "") {
        requestParameters += ("&privacy_view=" + httpsObject->escape(privacy_view));
    };

    if (privacy_comment != "") {
        requestParameters += ("&privacy_comment=" + httpsObject->escape(privacy_comment));
    };

    if (no_comments != "") {
        requestParameters += ("&no_comments=" + httpsObject->escape(no_comments));
    };

    if (repeat != "") {
        requestParameters += ("&repeat=" + httpsObject->escape(repeat));
    };
    request("video.save", requestParameters);
};
/*************************************************************************/
void vkapi::videoSearch (std::string q, std::string sort, std::string hd, std::string adult, std::string filters, std::string search_own, std::string offset, std::string longer, std::string shorter, std::string count, std::string extended) {
    std::string requestParameters = "?";
    if (q != "") {
        requestParameters += ("q=" + httpsObject->escape(q));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (hd != "") {
        requestParameters += ("&hd=" + httpsObject->escape(hd));
    };

    if (adult != "") {
        requestParameters += ("&adult=" + httpsObject->escape(adult));
    };

    if (filters != "") {
        requestParameters += ("&filters=" + httpsObject->escape(filters));
    };

    if (search_own != "") {
        requestParameters += ("&search_own=" + httpsObject->escape(search_own));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (longer != "") {
        requestParameters += ("&longer=" + httpsObject->escape(longer));
    };

    if (shorter != "") {
        requestParameters += ("&shorter=" + httpsObject->escape(shorter));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("video.search", requestParameters);
};
/*************************************************************************/
void vkapi::wallAddComment (std::string owner_id, std::string post_id, std::string from_group, std::string text, std::string reply_to_comment, std::string attachments, std::string sticker_id, std::string ref) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };

    if (from_group != "") {
        requestParameters += ("&from_group=" + httpsObject->escape(from_group));
    };

    if (text != "") {
        requestParameters += ("&text=" + httpsObject->escape(text));
    };

    if (reply_to_comment != "") {
        requestParameters += ("&reply_to_comment=" + httpsObject->escape(reply_to_comment));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };

    if (sticker_id != "") {
        requestParameters += ("&sticker_id=" + httpsObject->escape(sticker_id));
    };

    if (ref != "") {
        requestParameters += ("&ref=" + httpsObject->escape(ref));
    };
    request("wall.addComment", requestParameters);
};
/*************************************************************************/
void vkapi::wallDelete (std::string owner_id, std::string post_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };
    request("wall.delete", requestParameters);
};
/*************************************************************************/
void vkapi::wallDeleteComment (std::string owner_id, std::string comment_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };
    request("wall.deleteComment", requestParameters);
};
/*************************************************************************/
void vkapi::wallEditComment (std::string owner_id, std::string comment_id, std::string message, std::string attachments) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };
    request("wall.editComment", requestParameters);
};
/*************************************************************************/
void vkapi::wallEdit (std::string owner_id, std::string post_id, std::string friends_only, std::string message, std::string attachments, std::string services, std::string signed_, std::string publish_date, std::string lat, std::string long_, std::string place_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };

    if (friends_only != "") {
        requestParameters += ("&friends_only=" + httpsObject->escape(friends_only));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };

    if (services != "") {
        requestParameters += ("&services=" + httpsObject->escape(services));
    };

    if (signed_ != "") {
        requestParameters += ("&signed=" + httpsObject->escape(signed_));
    };

    if (publish_date != "") {
        requestParameters += ("&publish_date=" + httpsObject->escape(publish_date));
    };

    if (lat != "") {
        requestParameters += ("&lat=" + httpsObject->escape(lat));
    };

    if (long_ != "") {
        requestParameters += ("&long=" + httpsObject->escape(long_));
    };

    if (place_id != "") {
        requestParameters += ("&place_id=" + httpsObject->escape(place_id));
    };
    request("wall.edit", requestParameters);
};
/*************************************************************************/
void vkapi::wallGet (std::string owner_id, std::string domain, std::string offset, std::string count, std::string filter, std::string extended, std::string fields) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (domain != "") {
        requestParameters += ("&domain=" + httpsObject->escape(domain));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (filter != "") {
        requestParameters += ("&filter=" + httpsObject->escape(filter));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("wall.get", requestParameters);
};
/*************************************************************************/
void vkapi::wallGetById (std::string posts, std::string extended, std::string copy_history_depth, std::string fields) {
    std::string requestParameters = "?";
    if (posts != "") {
        requestParameters += ("posts=" + httpsObject->escape(posts));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (copy_history_depth != "") {
        requestParameters += ("&copy_history_depth=" + httpsObject->escape(copy_history_depth));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("wall.getById", requestParameters);
};
/*************************************************************************/
void vkapi::wallGetComments (std::string owner_id, std::string post_id, std::string need_likes, std::string start_comment_id, std::string offset, std::string count, std::string sort, std::string preview_length, std::string extended) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };

    if (need_likes != "") {
        requestParameters += ("&need_likes=" + httpsObject->escape(need_likes));
    };

    if (start_comment_id != "") {
        requestParameters += ("&start_comment_id=" + httpsObject->escape(start_comment_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (sort != "") {
        requestParameters += ("&sort=" + httpsObject->escape(sort));
    };

    if (preview_length != "") {
        requestParameters += ("&preview_length=" + httpsObject->escape(preview_length));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };
    request("wall.getComments", requestParameters);
};
/*************************************************************************/
void vkapi::wallGetReposts (std::string owner_id, std::string post_id, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("wall.getReposts", requestParameters);
};
/*************************************************************************/
void vkapi::wallPin (std::string owner_id, std::string post_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };
    request("wall.pin", requestParameters);
};
/*************************************************************************/
void vkapi::wallReportComment (std::string owner_id, std::string comment_id, std::string reason) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };

    if (reason != "") {
        requestParameters += ("&reason=" + httpsObject->escape(reason));
    };
    request("wall.reportComment", requestParameters);
};
/*************************************************************************/
void vkapi::wallReportPost (std::string owner_id, std::string post_id, std::string reason) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };

    if (reason != "") {
        requestParameters += ("&reason=" + httpsObject->escape(reason));
    };
    request("wall.reportPost", requestParameters);
};
/*************************************************************************/
void vkapi::wallRepost (std::string object, std::string message, std::string group_id, std::string ref) {
    std::string requestParameters = "?";
    if (object != "") {
        requestParameters += ("object=" + httpsObject->escape(object));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };

    if (group_id != "") {
        requestParameters += ("&group_id=" + httpsObject->escape(group_id));
    };

    if (ref != "") {
        requestParameters += ("&ref=" + httpsObject->escape(ref));
    };
    request("wall.repost", requestParameters);
};
/*************************************************************************/
void vkapi::wallPost (std::string owner_id, std::string friends_only, std::string from_group, std::string message, std::string attachments, std::string services, std::string signed_, std::string publish_date, std::string lat, std::string long_, std::string place_id, std::string post_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (friends_only != "") {
        requestParameters += ("&friends_only=" + httpsObject->escape(friends_only));
    };

    if (from_group != "") {
        requestParameters += ("&from_group=" + httpsObject->escape(from_group));
    };

    if (message != "") {
        requestParameters += ("&message=" + httpsObject->escape(message));
    };

    if (attachments != "") {
        requestParameters += ("&attachments=" + httpsObject->escape(attachments));
    };

    if (services != "") {
        requestParameters += ("&services=" + httpsObject->escape(services));
    };

    if (signed_ != "") {
        requestParameters += ("&signed=" + httpsObject->escape(signed_));
    };

    if (publish_date != "") {
        requestParameters += ("&publish_date=" + httpsObject->escape(publish_date));
    };

    if (lat != "") {
        requestParameters += ("&lat=" + httpsObject->escape(lat));
    };

    if (long_ != "") {
        requestParameters += ("&long=" + httpsObject->escape(long_));
    };

    if (place_id != "") {
        requestParameters += ("&place_id=" + httpsObject->escape(place_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };
    request("wall.post", requestParameters);
};
/*************************************************************************/
void vkapi::wallRestore (std::string owner_id, std::string post_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };
    request("wall.restore", requestParameters);
};
/*************************************************************************/
void vkapi::wallSearch (std::string owner_id, std::string domain, std::string query, std::string owners_only, std::string count, std::string offset, std::string extended, std::string fields) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (domain != "") {
        requestParameters += ("&domain=" + httpsObject->escape(domain));
    };

    if (query != "") {
        requestParameters += ("&query=" + httpsObject->escape(query));
    };

    if (owners_only != "") {
        requestParameters += ("&owners_only=" + httpsObject->escape(owners_only));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (extended != "") {
        requestParameters += ("&extended=" + httpsObject->escape(extended));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };
    request("wall.search", requestParameters);
};
/*************************************************************************/
void vkapi::wallUnpin (std::string owner_id, std::string post_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (post_id != "") {
        requestParameters += ("&post_id=" + httpsObject->escape(post_id));
    };
    request("wall.unpin", requestParameters);
};
/*************************************************************************/
void vkapi::widgetsGetComments (std::string widget_api_id, std::string url, std::string page_id, std::string order, std::string fields, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (widget_api_id != "") {
        requestParameters += ("widget_api_id=" + httpsObject->escape(widget_api_id));
    };

    if (url != "") {
        requestParameters += ("&url=" + httpsObject->escape(url));
    };

    if (page_id != "") {
        requestParameters += ("&page_id=" + httpsObject->escape(page_id));
    };

    if (order != "") {
        requestParameters += ("&order=" + httpsObject->escape(order));
    };

    if (fields != "") {
        requestParameters += ("&fields=" + httpsObject->escape(fields));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("widgets.getComments", requestParameters);
};
/*************************************************************************/
void vkapi::wallRestoreComment (std::string owner_id, std::string comment_id) {
    std::string requestParameters = "?";
    if (owner_id != "") {
        requestParameters += ("owner_id=" + httpsObject->escape(owner_id));
    };

    if (comment_id != "") {
        requestParameters += ("&comment_id=" + httpsObject->escape(comment_id));
    };
    request("wall.restoreComment", requestParameters);
};
/*************************************************************************/
void vkapi::widgetsGetPages (std::string widget_api_id, std::string order, std::string period, std::string offset, std::string count) {
    std::string requestParameters = "?";
    if (widget_api_id != "") {
        requestParameters += ("widget_api_id=" + httpsObject->escape(widget_api_id));
    };

    if (order != "") {
        requestParameters += ("&order=" + httpsObject->escape(order));
    };

    if (period != "") {
        requestParameters += ("&period=" + httpsObject->escape(period));
    };

    if (offset != "") {
        requestParameters += ("&offset=" + httpsObject->escape(offset));
    };

    if (count != "") {
        requestParameters += ("&count=" + httpsObject->escape(count));
    };
    request("widgets.getPages", requestParameters);
};
