/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once

#include "BlackRoot\Pubc\JSON.h"

namespace Toolbox {
namespace Core {

	class ILogMan {
	public:
        virtual ~ILogMan() { ; }

        virtual void Initialise(BlackRoot::Format::JSON &) = 0;
        virtual void Deinitialise(BlackRoot::Format::JSON &) = 0;
	};

}
}