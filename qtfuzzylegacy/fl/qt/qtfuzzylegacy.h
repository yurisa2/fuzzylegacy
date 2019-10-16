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

    Yuri Sa @yurisa2, 20 October 2019
    yuri@sa2.com.br
**/

/*
 * qtfuzzylegacy.h
 *
 *  Created on: 18/12/2012
 *      Author: @yurisa2
 */

#include <fl/fuzzylegacy.h>

#ifndef FLQT_DEFINITIONS_H_
#define FLQT_DEFINITIONS_H_

#ifndef FLQT_VERSION
#define FLQT_VERSION "?"
#endif

#ifndef FLQT_DATE
#define FLQT_DATE "?"
#endif

//TODO: Find a way to use this around Qt headers.
//#pragma warning( push )
//#pragma warning ( disable : ALL_CODE_ANALYSIS_WARNINGS )
//#include <third-party include files here>
//#pragma warning( pop )


namespace fl {
    namespace qt {

        class qtfuzzylegacy {
        public:
            static std::string name();
            static std::string fullname();
            static std::string version();
            static std::string longVersion();
            static std::string author();

            static std::string date();
            static std::string platform();
            static std::string configuration();
            static std::string floatingPoint();
        };
    }
}

#endif /* FLQT_DEFINITIONS_H_ */
