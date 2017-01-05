
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>

#include <string>



using namespace std;


int main(int argc,char** argv) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDLNet_Init();
    IPaddress ip;
    SDLNet_ResolveHost(&ip, NULL, 1234);
    TCPsocket server = SDLNet_TCP_Open(&ip);
    TCPsocket client;

    std::string input;

    std::cout << "Type message plz" << endl;
    getline(std::cin, input);
    unsigned int input_lenght = input.length();
    /*const char* text = new char[input.length() + 1];
    strcopy_s(text, input_lenght, input);
    int message_lenght = sizeof(text)/sizeof(char) + 1;
    */
    char text[input_lenght + 1];
    for (unsigned int i = 0; i < input.length(); ++i) {
      text[i] = input[i];
    }
    text[input_lenght] = '\0';
    int message_lenght = sizeof(text)/sizeof(char) + 1;

    cout << "this is the char array: " << text << endl;
    while (1) {
        client = SDLNet_TCP_Accept(server);
        if (client) {
            SDLNet_TCP_Send(client, text, message_lenght);
            SDLNet_TCP_Close(client);
            break;
        }
    }

    return 0;
    }
