#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *background_main;
    lv_obj_t *speed_meter;
    lv_obj_t *speed_label;
    lv_obj_t *lap_label;
    lv_obj_t *speed_area;
    lv_obj_t *lap_number_area;
    lv_obj_t *time_label;
    lv_obj_t *lap_time_area;
    lv_obj_t *total_time_area;
    lv_obj_t *total_time_label;
    lv_obj_t *messages_area;
    lv_obj_t *sc_voltage_bar;
    lv_obj_t *sc_voltage_label;
    lv_obj_t *sc_voltage;
    lv_obj_t *horn_icon;
    lv_obj_t *shortwave_icon;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
};

void create_screen_main();
void tick_screen_main();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/