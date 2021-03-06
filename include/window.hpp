/// @file

#pragma once

#include <stdint.h>
#include <SDL.h>

#include "fragengine.hpp"
#include <string>

namespace frag {

/// Class for representing the game window.
class Window {
public:
    /// Creates a new Window object.
    ///
    /// title - Name of the window
    ///
    /// width - Width of the window in pixels
    ///
    /// height - Height of the window in pixels
    ///
    /// gl - OpenGL version
    Window(std::string title, uint16_t width, uint16_t height,
           GLVersion gl);
    ~Window();
    /// Destroy the window.
    void destroyWindow();
    /// Clear the screen.
    void clear();
    /// Draw the window buffer to the screen
    void present();

public:
    SDL_GLContext glcontext;
    uint16_t width;
    uint16_t height;
    SDL_Window* sdlwindow;
    uint8_t fps_max = 60;
};

}
