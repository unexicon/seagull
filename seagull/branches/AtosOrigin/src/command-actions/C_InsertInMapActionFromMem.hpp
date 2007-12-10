/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * (c)Copyright 2006 Hewlett-Packard Development Company, LP.
 *
 */

#ifndef _C_INSERTINMAPACTIONFROMMEM_H
#define _C_INSERTINMAPACTIONFROMMEM_H

#include "C_InsertInMapAction.hpp"

class C_InsertInMapActionFromMem : public C_InsertInMapAction { 

public:

  C_InsertInMapActionFromMem (T_CmdAction        P_cmdAction,
                              T_pControllers P_controllers);

  ~C_InsertInMapActionFromMem() ;


  T_exeCode execute (T_pCmd_scenario P_pCmd,
                     T_pCallContext  P_callCtxt,
                     C_MessageFrame *P_msg,
                     C_MessageFrame *P_ref) ;

protected:


} ;

typedef C_InsertInMapActionFromMem *T_pC_InsertInMapActionFromMem ;


#endif  // _C_INSERTINMAPACTIONFROMMEM_H




