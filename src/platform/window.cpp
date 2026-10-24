// SPDX-License-Identifier: MPL-2.0
// Copyright (c) 2026 VNS (aka Visual Novel Studio) Duchees.

#include <window.hpp>

#include <SDL3/SDL_init.h>

#include <stdexcept>
#include <string>

using namespace vns::platform;

Window::Window(const char* Title, int Width, int Height, SDL_WindowFlags Flags) : Ptr(nullptr) {
  if (!SDL_InitSubSystem(SDL_INIT_VIDEO)) {
    throw std::runtime_error(SDL_GetError());
  }

  Ptr = SDL_CreateWindow(Title, Width, Height, Flags);
  if (!Ptr) {
    std::string msg = SDL_GetError();
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
    throw std::runtime_error(SDL_GetError());
  }
}

Window::~Window() {
  SDL_DestroyWindow(Ptr);
  Ptr = nullptr;
  SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

SDL_Window* Window::GetNativeWindow() const {
  return Ptr;
}