#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Player/PlayerController.h"

class PlayerView
{
private:

    const sf::String player_texture_path = "assets/textures/player_ship.png";
    const float player_sprite_width = 60.f;
    const float player_sprite_height = 60.f;

    sf::RenderWindow* game_window;

    sf::Texture player_texture;
    sf::Sprite player_sprite;

    void initializePlayerSprite();
    void scalePlayerSprite();

    PlayerController* player_controller;

public:
    PlayerView();
    ~PlayerView();

    void initialize();
    void update();
    void render();

    void initialize(PlayerController* controller); // we pass a pointer of type controller because we need to use this in the view later.
};