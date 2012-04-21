#ifndef OPERATORS_HPP
#define OPERATORS_HPP

#include <iostream>

#include <boost/utility/enable_if.hpp>
#include <boost/type_traits/is_base_of.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/not.hpp>
#include "console.hpp"

template <class OutputStream, class T>
typename boost::disable_if<
  boost::mpl::or_<
    boost::mpl::not_<
      boost::is_base_of<std::ostream, OutputStream> >,
    boost::is_same<OutputStream, std::ostream> >,
  OutputStream&>::type& operator<<(
    OutputStream& os, const T& x)
{
  std::ostream& base = os;
  base << x;
  return os;
}

template <class InputStream, class T>
typename boost::disable_if<
  boost::mpl::or_<
    boost::mpl::not_<
      boost::is_base_of<std::istream, InputStream> >,
    boost::is_same<InputStream, std::istream> >,
  InputStream&>::type& operator>>(
    InputStream& is, T& x)
{
  std::istream& base = is;
  base >> x;
  return is;
}

#endif // OPERATORS_HPP
