// Copyright [2015] Pebble Technology

#pragma once

/* 
This header file declares drawing methods that are defined in rect.c or
round.c, depending on the platform being built. Since the methods share the
same function signature, they can share the same header file, even though the
implementations of the functions themselves are different.
*/

#define PADDING 10

void set_number_time_units(uint8_t number_time_units);
void draw_seconds(GContext *ctx, uint8_t seconds, Layer *layer);
void draw_minutes(GContext *ctx, uint8_t minutes, Layer *layer);
void draw_hours(GContext *ctx, uint8_t hours, Layer *layer);
