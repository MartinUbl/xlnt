// file      : xml/qname.cxx
// copyright : Copyright (c) 2013-2017 Code Synthesis Tools CC
// license   : MIT; see accompanying LICENSE file

#include <ostream>

#include <xml/qname>

namespace xml
{
  std::string qname::
  string() const
  {
    std::string r;
    if (!ns_.empty ())
    {
      r += ns_;
      r += '#';
    }

    r += name_;
    return r;
  }

  std::ostream&
  operator<< (std::ostream& os, const qname& qn)
  {
    return os << qn.string ();
  }
}
