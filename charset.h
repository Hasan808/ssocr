/* Seven Segment Optical Character Recognition Character Set Functions */

/*  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/* Copyright (C) 2018 Erik Auerswald <auerswal@unix-ag.uni-kl.de> */

#ifndef SSOCR2_CHARSET_H
#define SSOCR2_CHARSET_H

/* functions */

/* print a digit according to charset, return 1 if unknown, else 0 */
int print_digit(int digit, charset_t charset, unsigned int flags);

#endif /* SSOCR2_CHARSET_H */
