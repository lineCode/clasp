/*
    File: lispReader.h
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
#ifndef _core_lispReader_H_
#define _core_lispReader_H_

#include "core/foundation.h"
#include "core/object.h"
#include "core/lispReader.h"


namespace core
{

    extern Cons_sp read_list(Stream_sp sin, char end_char, bool allow_consing_dot);

    extern T_mv lisp_object_query(Stream_sp, bool eofErrorP, T_sp eofValue, bool recursiveP);
    
    extern T_sp read_lisp_object(Stream_sp, bool eofErrorP, T_sp eofValue, bool recursiveP);
    
    extern void exposeCore_lisp_reader();
};
#endif /* _lispReader_H_ */
