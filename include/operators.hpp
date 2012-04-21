#ifndef OPERATORS_HPP
#define OPERATORS_HPP

#include <iostream>

#include <boost/utility/enable_if.hpp>
#include <boost/type_traits/is_base_of.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/not.hpp>
#include "console.hpp"

#if(1)
template <class T>
Console& operator<<(Console& con, const T& x)
{
  std::ostream& base = con;
  base << x;
  return con;
}
template <class T>
Console& operator>>(Console& con, T& x)
{
  std::istream& base = con;
  base >> x;
  return con;
}
#else
template <class OutputStream, class T>
typename boost::disable_if<
    boost::mpl::not_<
      boost::is_base_of<std::ostream, OutputStream> >,
  OutputStream>::type& operator<<(
    OutputStream& os, const T& x)
{
  std::ostream& base = os;
  std::operator<<(base, x);
  return os;
}

template <class InputStream, class T>
typename boost::disable_if<
    boost::mpl::not_<
      boost::is_base_of<std::istream, InputStream> >,
  InputStream>::type& operator>>(
    InputStream& is, const T& x)
{
  std::istream& base = is;
  std::operator>>(base, x);
  return is;
}
#endif
#endif // OPERATORS_HPP
