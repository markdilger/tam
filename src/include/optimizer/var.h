/*-------------------------------------------------------------------------
 *
 * var.h
 *	  prototypes for var.c.
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id: var.h,v 1.9 1999/08/22 20:14:57 tgl Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef VAR_H
#define VAR_H

#include "nodes/primnodes.h"

extern List *pull_varnos(Node *me);
extern bool contain_var_clause(Node *clause);
extern List *pull_var_clause(Node *clause);

#endif	 /* VAR_H */
