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
 * File:   DefuzzifierFactory.h
 * Author: @yurisa2
 *
 * Created on 8 January 2019, 11:17 PM
 */

#ifndef FL_DEFUZZIFIERFACTORY_H
#define	FL_DEFUZZIFIERFACTORY_H

#include "fl/fuzzylegacy.h"

#include "fl/factory/Factory.h"

#include <string>
#include <vector>

namespace fl {
    class Defuzzifier;
    
    class FL_EXPORT DefuzzifierFactory : public Factory<Defuzzifier*>{
    public:
        DefuzzifierFactory();
        virtual ~DefuzzifierFactory();

    };
}
#endif	/* DEFUZZIFIERFACTORY_H */

