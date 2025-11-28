/*
 * MIT License
 *
 * Copyright (c) 2025 <#author_name#>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

#include "movement.h"

/*
 * A DESCRIPTION OF YOUR WATCH FACE
 *
 * and a description of how use it
 *
 */

typedef struct {
    // Anything you need to keep track of, put it here!
    uint8_t unused;
    unsigned int counter;
} wordoftheday_state_t;

void wordoftheday_face_setup(uint8_t watch_face_index, void ** context_ptr);
void wordoftheday_face_activate(void *context);
bool wordoftheday_face_loop(movement_event_t event, void *context);
void wordoftheday_face_resign(void *context);

#define wordoftheday_face ((const watch_face_t){ \
    wordoftheday_face_setup, \
    wordoftheday_face_activate, \
    wordoftheday_face_loop, \
    wordoftheday_face_resign, \
    NULL, \
})

static const char words[][7] = {
  "AbLUFt", "AbriSS", "abSurd", "AdOniS"
};
