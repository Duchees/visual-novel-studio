// SPDX-License-Identifier: MPL-2.0
// Copyright (c) 2026 VNS (aka Visual Novel Studio) Duchees.

// window.hpp - RAII wrapper around an SDL3 window.

#pragma once

#include <SDL3/SDL_video.h>

namespace vns::platform {

class Window {
public:
  Window(const char* Title, int Width, int Height, SDL_WindowFlags Flags);
  ~Window();

  Window(const Window&) = delete;
  Window& operator=(const Window&) = delete;
  Window(Window&&) = delete;
  Window& operator=(Window&&) = delete;

  SDL_Window* GetNativeWindow() const;

private:
  SDL_Window* Ptr;
}; // class Window

} // namespace vns::platform