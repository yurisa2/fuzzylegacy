/*   Copyright 2013 Juan Rada-Vilela

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
 * fuzzylegacy.cpp
 *
 *  Created on 1 February 2013, 10:47 AM
 *      Author: jcrada
 */

#include "fl/fuzzylegacy.h"

namespace fl {

    int fuzzylegacy::_decimals = 3;
    scalar fuzzylegacy::_macheps = 1e-5;
    bool fuzzylegacy::_debug = FL_DEBUG;
    bool fuzzylegacy::_logging = true;

    std::string fuzzylegacy::name() {
        return "fuzzylegacy";
    }

    std::string fuzzylegacy::fullname(){
        return name() + "-" + longVersion();
    }

    std::string fuzzylegacy::version() {
        return FL_VERSION;
    }

    std::string fuzzylegacy::longVersion() {
        return FL_VERSION "b" FL_DATE;
    }

    std::string fuzzylegacy::author() {
        return "Juan Rada-Vilela";
    }

    std::string fuzzylegacy::date() {
        return FL_DATE;
    }

    std::string fuzzylegacy::platform() {
#ifdef FL_UNIX
        return "Unix";
#elif defined FL_WINDOWS
        return "Windows";
#else 
        return "?";
#endif
    }

    std::string fuzzylegacy::configuration() {
        if (FL_DEBUG)
            return "Debug";
        return "Release";
    }

    std::string fuzzylegacy::floatingPoint() {
        scalar someScalar = 0;
        (void) someScalar;
        std::string type;

        std::ostringstream ss;
#ifdef FL_USE_FLOAT
        type = "float";
#else
        type = "double";
#endif
        ss << "fl::scalar is defined as \'" << type << "\' using " <<
                sizeof (someScalar) << " bytes";
        return ss.str();
    }

    void fuzzylegacy::setDebug(bool debug) {
        _debug = debug;
    }

    bool fuzzylegacy::debug() {
        return _debug;
    }

    void fuzzylegacy::setDecimals(int decimals) {
        _decimals = decimals;
    }

    int fuzzylegacy::decimals() {
        return _decimals;
    }

    void fuzzylegacy::setMachEps(scalar macheps) {
        _macheps = macheps;
    }

    scalar fuzzylegacy::macheps() {
        return _macheps;
    }

    void fuzzylegacy::setLogging(bool logging) {
        _logging = logging;
    }

    bool fuzzylegacy::logging() {
        return _logging;
    }

}
