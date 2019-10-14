/**
    This file is part of qtfuzzylegacy.

    qtfuzzylegacy is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    qtfuzzylegacy is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with qtfuzzylegacy.  If not, see <http://www.gnu.org/licenses/>.

    Juan Rada-Vilela, 01 February 2013
    jcrada@fuzzylegacy.com
 **/

/*
 * qtfuzzylegacy.h
 *
 *  Created on: 18/12/2012
 *      Author: jcrada
 */

#include "fl/qt/qtfuzzylegacy.h"

namespace fl {
    namespace qt {

        std::string qtfuzzylegacy::name() {
            return "qtfuzzylegacy";
        }

        std::string qtfuzzylegacy::fullname() {
            return name() + "-" + longVersion();
        }

        std::string qtfuzzylegacy::version() {
            return FLQT_VERSION;
        }

        std::string qtfuzzylegacy::longVersion() {
            return FLQT_VERSION "b" FLQT_DATE;
        }

        std::string qtfuzzylegacy::author() {
            return "Juan Rada-Vilela";
        }

        std::string qtfuzzylegacy::date() {
            return FLQT_DATE;
        }

        std::string qtfuzzylegacy::platform() {
#ifdef FL_UNIX
            return "Unix";
#elif defined FL_WINDOWS
            return "Windows";
#else 
            return "?";
#endif
        }

        std::string qtfuzzylegacy::configuration() {
#ifdef FL_DEBUG
            return "Debug";
#else
            return "Release";
#endif
        }

        std::string qtfuzzylegacy::floatingPoint() {
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

    }
}

