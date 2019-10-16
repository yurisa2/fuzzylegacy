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

    Yuri Sa @yurisa2, 21 July 2019
    yuri@sa2.com.br
**/

/* 
 * File:   ImEx.cpp
 * Author: @yurisa2
 *
 * Created on 6 July 2019, 9:09 PM
 */

#include "fl/qt/ImEx.h"

#include <QPushButton>
#include <QDialogButtonBox>

namespace fl {
    namespace qt {

        ImEx::ImEx(QWidget* parent, Qt::WindowFlags f) :
        QDialog(parent, f), ui(new Ui::ImEx) {
            setWindowFlags(Qt::WindowSystemMenuHint
                    | Qt::WindowCloseButtonHint
                    | Qt::WindowMaximizeButtonHint);
            setModal(true);
        }

        ImEx::~ImEx() {
            delete ui;
        }

        void ImEx::setup() {
            ui->setupUi(this);
            ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
            QObject::connect(ui->pte_code, SIGNAL(textChanged()),
                    this, SLOT(onTextChanged()));
        }

        void ImEx::onTextChanged() {
            ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(not
                    ui->pte_code->toPlainText().trimmed().isEmpty());
        }


    }
}