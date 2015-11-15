# vkapi-cpp
This is a simple [vk.com developers' api](https://vk.com/dev) implementation written
(generated with some scripts which use official methods' pages) on c++
##What *does* work
As for now, you (I, lol) can send server a request using 
* 'token' file with access_token stored 
* method name (nope. **messages.get** should be replaced with **messagesGet** and so on) 
and it's parameters according to [method's description](https://vk.com/dev/methods) 
(for now, unused parameters should be empty strings.)

Other
* save server's response to a file

##What *does not* work:
* Server response parcing (seriously)
* access_token attaching as it wasn't described at methods' pages
