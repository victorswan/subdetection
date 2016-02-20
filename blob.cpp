/*!
    Copyright 2015 Broija

    This file is part of subdetection library.

    subdetection is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    subdetection is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with subdetection library.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "blob.h"

namespace SubDetection
{

Blob & Blob::operator =(const Blob & _other)
{
    hsvMin = _other.hsvMin;
    hsvMax = _other.hsvMax;
    hsvMedian = _other.hsvMedian;

    bounding = _other.bounding;
    massCenter = _other.massCenter;

    mat = _other.mat.clone();

    return *this;
}//operator =

}//SubDetection
