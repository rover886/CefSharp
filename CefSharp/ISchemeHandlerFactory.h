// Copyright � 2010-2013 The CefSharp Project. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.

#pragma once

#include "ISchemeHandler.h"

namespace CefSharp
{
    public interface class ISchemeHandlerFactory
    {
        ISchemeHandler^ Create();
    };
}