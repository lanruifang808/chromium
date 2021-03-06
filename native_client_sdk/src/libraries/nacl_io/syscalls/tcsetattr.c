// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "nacl_io/kernel_intercept.h"
#include "nacl_io/ostermios.h"

int tcsetattr(int fd, int optional_actions, const struct termios* termios_p) {
  return ki_tcsetattr(fd, optional_actions, termios_p);
}
