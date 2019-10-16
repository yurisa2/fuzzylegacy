/*   Copyright 2019 Yuri Sa @yurisa2

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/* 
 * File:   Norm.h
 * Author: @yurisa2
 *
 * Created on 7 April 2019, 10:06 PM
 */

#ifndef FL_NORM_H
#define	FL_NORM_H

#include "fl/fuzzylegacy.h"

#include "fl/Operation.h"

#include <string>

namespace fl {

    class FL_EXPORT Norm {
    public:

        Norm() { }

        virtual ~Norm() { }

        virtual std::string className() const = 0;
        virtual scalar compute(scalar a, scalar b) const = 0;

    };
}
#endif	/* FL_NORM_H */

