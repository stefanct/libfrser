#ifndef LIBFRSER_UI_H
#define LIBFRSER_UI_H

#include <stdbool.h>

void libfrser_ui_init(void);
void libfrser_idle(bool on); /**< Active after init done, inctive while processing. */
void libfrser_err(bool on); /**< Activated on errors. */

#endif
