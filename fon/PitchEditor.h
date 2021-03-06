#ifndef _PitchEditor_h_
#define _PitchEditor_h_
/* PitchEditor.h
 *
 * Copyright (C) 1992-2011,2012 Paul Boersma
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include "FunctionEditor.h"
#include "Pitch.h"

Thing_define (PitchEditor, FunctionEditor) {
	// overridden methods:
		virtual void v_createMenus ();
		virtual void v_createHelpMenuItems (EditorMenu menu);
		virtual void v_draw ();
		virtual void v_play (double tmin, double tmax);
		virtual int v_click (double xWC, double yWC, bool shiftKeyPressed);
};

PitchEditor PitchEditor_create (const wchar_t *title, Pitch pitch);

/* End of file PitchEditor.h */
#endif
