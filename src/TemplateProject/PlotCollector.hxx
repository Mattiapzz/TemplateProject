/*
(***********************************************************************************)
(*                                                                                 *)
(* The BASICMPLCPPPROJECT project                                                  *)
(*                                                                                 *)
(* Copyright (c) 2020, Mattia Piazza, Mattia Piccininit, Enrico Bertolazzi and     *)
(* Francesco Biral                                        )                        *)
(*                                                                                 *)
(* The BASICMPLCPPPROJECT project and its components are supplied under the terms  *)
(* of the open source BSD 2-Clause License. The contents of the BASICMPLCPPPROJECT *)
(* project and its components may not be copied or disclosed except in             *)
(* accordance with the terms of the BSD 2-Clause License.                          *)
(*                                                                                 *)
(* URL: https://opensource.org/licenses/BSD-2-Clause                               *)
(*                                                                                 *)
(*    Mattia Piazza                                                                *)
(*    Department of Industrial Engineering                                         *)
(*    University of Trento                                                         *)
(*    e-mail: mattia.piazza@unitn.it                                               *)
(*                                                                                 *)
(***********************************************************************************)
*/

///
/// file: PlotCollector.hh
///

#pragma once

#ifndef INCLUDE_PLOTCOLLECTOR
#define INCLUDE_PLOTCOLLECTOR

// namespace plt = matplotlibcpp;

namespace mpl
{

  //! PlotCollector class
  /**
   * PlotCollector
   */
  class PlotCollector 
  {
  private:
    // plt::Plot plot1;
    // plt::Plot plot2;
  public:

    //! PlotCollector copy constructor
    PlotCollector(PlotCollector const &) = default;

    ~PlotCollector(void) = default;

    //! PlotCollector class constructor
    PlotCollector(void);

    
  }; // class PlotCollector

} // namespace mpl

#endif

///
/// eof: PlotCollector.hh
///
