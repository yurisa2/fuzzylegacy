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
 * File:   AlgebraicProduct.h
 * Author: @yurisa2
 *
 * Created on 30 November 2019, 1:47 AM
 */

#ifndef FL_ALGEBRAICPRODUCT_H
#define	FL_ALGEBRAICPRODUCT_H

#include "fl/norm/TNorm.h"

namespace fl {

    class FL_EXPORT AlgebraicProduct : public TNorm {
    public:
        std::string className() const;
        scalar compute(scalar a, scalar b) const;
        static TNorm* constructor();
    };

    
}

#endif	/* FL_ALGEBRAICPRODUCT_H */

