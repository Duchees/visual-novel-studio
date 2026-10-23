// SPDX-License-Identifier: MPL-2.0
// Copyright (c) 2026 VNS (aka Visual Novel Studio) Duchees.

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char* argv[]) {
  (void)argc;
  (void)argv;

  if (!SDL_Init(SDL_INIT_VIDEO)) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "%s", SDL_GetError());
    return 1;
  }

  return 0;
}