#include <frser_ui.h>


void __attribute__((weak)) libfrser_ui_init(void) {
}

void __attribute__((weak)) libfrser_idle(bool on) {
	(void)on;
}

void __attribute__((weak)) libfrser_err(bool on) {
	(void)on;
}
