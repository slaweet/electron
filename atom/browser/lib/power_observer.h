// Copyright (c) 2017 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ATOM_BROWSER_LIB_POWER_OBSERVER_H_
#define ATOM_BROWSER_LIB_POWER_OBSERVER_H_

#include "base/macros.h"

#if defined(OS_LINUX)
#include "atom/browser/lib/power_observer_linux.h"
namespace atom {

typedef PowerObserverLinux PowerObserver;

}  // namespace atom
#else
#include "base/power_monitor/power_observer.h"
namespace atom {

typedef base::PowerObserver PowerObserver;

}  // namespace atom
#endif

#endif  // ATOM_BROWSER_LIB_POWER_OBSERVER_H_
