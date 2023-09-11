//
// Created by colaarch on 5/18/23.
//
#pragma once
#include <SDL2/SDL.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <SDL2/SDL_image.h>
#include "../Actor/Actor.h"
#ifndef ACTORCOMPONENTMODEL_GAME_H
#define ACTORCOMPONENTMODEL_GAME_H


class Game {
public:
    // Init game
    Game();
    // Deallocates stuff
    ~Game();

    // The game running cycle as a program
    bool Initialize();
    void RunLoop();
    void Shutdown();
    // Actor related functions
    void AddActor(Actor* actor);
    void RemoveActor(Actor* actor);
    void LoadData();
    SDL_Texture* LoadTexture(const char* fileName);
private:

    // Helper functions for the game loop, they are self explained
    void ProcessInput();
    void UpdateGame();
    void GenerateOutput();

    // Windows that SDL helps us create
    SDL_Window* mWindow;

    // The Renderer that helps us in drawing 2D graphics
    SDL_Renderer* mRenderer;

    //  Actor in scene variables
    std::vector<class Actor*> mActors;
    std::vector<class Actor*> mPendingActors;

    bool mUpdatingActors;

    // Delta time
    Uint32 mTicksCount;
    // A flag that will help us to determine if the game is running
    bool mIsRunning;

};


#endif //ACTORCOMPONENTMODEL_GAME_H
