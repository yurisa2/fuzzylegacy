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
 * File:   About.cpp
 * Author: jcrada
 *
 * Created on 25 January 2013, 6:00 PM
 */

#include <fl/Headers.h>

#include "fl/qt/About.h"
#include "fl/qt/qtfuzzylegacy.h"
#include "fl/qt/Window.h"

#include <QDesktopServices>
#include <QUrl>

namespace fl {
    namespace qt {

        About::About(QWidget* parent, Qt::WindowFlags f)
        : QDialog(parent, f), ui(new Ui::About) {
            setWindowFlags(Qt::Dialog
                    | Qt::WindowSystemMenuHint
                    | Qt::WindowCloseButtonHint
                    | Qt::WindowStaysOnTopHint
                    | Qt::CustomizeWindowHint
                    );
        }

        About::~About() {

            delete ui;
        }

        void About::setup() {
            ui->setupUi(this);

            adjustSize();
            QRect scr = Window::mainWindow()->geometry();
            move(scr.center().x() - rect().center().x(), scr.top());
        }


    }
}
