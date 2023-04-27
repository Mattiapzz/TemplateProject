/*
(***********************************************************************************)
(*                                                                                 *)
(* The VoidClass project                                                           *)
(*                                                                                 *)
(* Copyright (c) 2023, Mattia Piazza                                               *)
(*                                                                                 *)
(* The VoidClass project and its components are supplied under the terms           *)
(* of the open source BSD 2-Clause License. The contents of the VoidClass          *)
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
/// file: VoidClass.hxx
///

#pragma once

#ifndef INCLUDE_VOIDCLASS
#define INCLUDE_VOIDCLASS

namespace mpl
{
  /**
   * @brief VoidClass class
   * A planner class to interface with Motion Primitives and Clothoids
   */
  class VoidClass
  {
  private:
    /* data */
  public:
    //! VoidClass copy constructor
    /**
     * @brief Construct a new Core VoidClass object
     * 
     */
    VoidClass(VoidClass const &) = default;
    //--------------------------------------------------------------------------------
    //! VoidClass class destructor
    /**
     * @brief Destroy the Core VoidClass object
     * 
     */
    ~VoidClass(void) = default;
    //--------------------------------------------------------------------------------
    //! VoidClass class constructor
    /**
     * @brief Construct a new Core VoidClass object
     * 
     */
    VoidClass(void);
    //--------------------------------------------------------------------------------
  }; // class VoidClass
} // namespace mpl

#endif

