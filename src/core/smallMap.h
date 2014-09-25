/*
    File: smallMap.h
*/

/*
Copyright (c) 2014, Christian E. Schafmeister
 
CLASP is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.
 
See directory 'clasp/licenses' for full details.
 
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
/* -^- */
       
       
//
// (C) 2004 Christian E. Schafmeister
//


#ifndef SmallMap_H
#define SmallMap_H
#include <stdio.h>
#include <string>
#include <vector>
#include <set>
#include "foundation.h"
#include "object.h"
#include "lispVector.h"
#include "hashTableEq.h"
#include "cons.h"


namespace core
{
    SMART(SmallMap);
    class SmallMap_O : public T_O
    {
	LISP_BASE1(T_O);
	LISP_CLASS(core,CorePkg,SmallMap_O,"SmallMap");
    private:
        typedef gctools::SmallMap<T_sp,T_sp> map_type;
        map_type                map;
    public:

        T_sp    find(T_sp key, T_sp defval);
        void    setf(T_sp key, T_sp val);
        int     size() const { return this->map.size(); };
        int     capacity() const { return this->map.capacity(); };

	DEFAULT_CTOR_DTOR(SmallMap_O);
    };


};


TRANSLATE(core::SmallMap_O);
#endif
