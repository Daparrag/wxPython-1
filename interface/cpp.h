/////////////////////////////////////////////////////////////////////////////
// Name:        cpp.h
// Purpose:     interface of global functions
// Author:      wxWidgets team
// RCS-ID:      $Id$
// Licence:     wxWindows license
/////////////////////////////////////////////////////////////////////////////


/** @ingroup group_funcmacro_misc */
//@{
/**
    This macro returns the concatenation of the arguments passed. Unlike when
    using the preprocessor operator, the arguments undergo macro expansion
    before being concatenated.

    @header{wx/cpp.h}
*/
#define wxCONCAT(x1, x2)
#define wxCONCAT3(x1, x2, x3)
#define wxCONCAT4(x1, x2, x3, x4)
#define wxCONCAT5(x1, x2, x3, x4, x5)
//@}

/** @ingroup group_funcmacro_misc */
//@{

/**
    Returns the string representation of the given symbol which can be either a
    literal or a macro (hence the advantage of using this macro instead of the
    standard preprocessor @c # operator which doesn't work with macros).

    Notice that this macro always produces a @c char string, use
    wxSTRINGIZE_T() to build a wide string Unicode build.

    @see wxCONCAT()

    @header{wx/cpp.h}
*/
#define wxSTRINGIZE(x)

/**
    Returns the string representation of the given symbol as either an ASCII or
    Unicode string, depending on the current build. This is the
    Unicode-friendly equivalent of wxSTRINGIZE().

    @header{wx/cpp.h}
*/
#define wxSTRINGIZE_T(x)

//@}

