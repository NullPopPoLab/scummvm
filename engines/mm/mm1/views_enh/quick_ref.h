/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef MM1_VIEWS_ENH_QUICK_REF_H
#define MM1_VIEWS_ENH_QUICK_REF_H

#include "mm/mm1/views_enh/scroll_popup.h"
#include "mm/mm1/views_enh/map.h"

namespace MM {
namespace MM1 {
namespace ViewsEnh {

class QuickRef : public ScrollPopup {
private:
	/**
	 * Write the line for a single character
	 */
	void writeCharacterLine(int charNum);

	bool isInCombat() const;
public:
	QuickRef();
	virtual ~QuickRef() {}

	bool msgFocus(const FocusMessage &msg) override;
	bool msgUnfocus(const UnfocusMessage &msg) override;
	bool msgAction(const ActionMessage &msg) override;
	void draw() override;
};

} // namespace Views
} // namespace MM1
} // namespace MM

#endif
